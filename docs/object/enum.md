# ctl - object/enum

## 📌 Example

```h
// model/player/state.h
enum(PlayerState) {
    PLAYER_STATE_IDLE       = piv("MINESERV_MODEL_PLAYER_STATE_H::State"),
    PLAYER_STATE_WALK,
    PLAYER_STATE_RUN,
    PLAYER_STATE_JUMP,
    PLAYER_STATE_MINE,
    PLAYER_STATE_ATTACK
};
```

```h
// model/monster/state.h
enum(MonsterState) {
    MONSTER_STATE_IDLE      = piv("MINESERV_MODEL_MONSTER_STATE_H::State"),
    MONSTER_STATE_WALK,
    MONSTER_STATE_ATTACK
};
```

By using `piv(s)`, you can avoid different-enum same-value problem.

```c
enum(Fruit) {
    Apple       = 0,
    Pineapple   = 1
};

enum(Laptop) {
    Dell        = 0,
    Mac         = 1
}

int main(void) {
    Fruit = Apple;
    Laptop = Dell;

    if (Apple == Dell) {
        printf("Example of different-enum same-value problem");
    }

    return 0;
}
```

```c
enum(Fruit) {
    Apple       = piv("Fruit"),
    Pineapple
};

enum(Laptop) {
    Dell        = piv("Laptop"),
    Mac
}

int main(void) {
    Fruit = Apple;
    Laptop = Dell;

    if (Apple != Dell) {
        printf("Example of piv(s) usage");
    }

    return 0;
}
```

## 📌 How to

- `enum(n)` is a syntax sugar of `typedef enum`
- `piv(s)` is a compile-time hash function with macro

### `piv(s)`

Use `piv(s)` for most cases

- For `s`, use unique string for each enum (like `"MINESERV_MODEL_PLAYER_STATE_H::State"`)
- `piv(s)` is *str* to *int* function for enum value

### `pivlen(s, l)`

Use `pivlen(s, l)` if `piv(s)` is unusable
because `sizeof(t)` doesn't come before checking enum-item value is constant-integer.

- For `s`, use the same string in `piv(s)`
- For `l`, use the length of `s`

### `pivalt0(f, l)`

Use `pivalt0(f, l)` when `piv(s)` and `pivlen(s, l)` is anyway-not-usable

- For `f`, use `__FILE__` (filename)
- For `l`, use `__LINE__` (line number)
