# ctl - object/class

## 📌 Example

```h
// food.h
class(food) {
    const int carb;
    const int sugar;
    const int fat;
    const int protein;

    const void fn(eat, self(food), int speed);
    const void fn(print, self(food));
};

```c
// food.c
static void __food_eat__(self(food), int speed) {
    ...
}

static void __food_print__(self(food)) {
    ...
}

// constructor
extern food* Food() {
    // dynamic-casting here
    ...
}

/*
 * - function 'eat'
 * - function 'print'
 * - constructor (dynamic-casting)
 */
```

## 📌 How to

- `class(n)` is a syntax sugar of `typedef struct`
- `fn(n, ...)` is a syntax sugar of func-ptr

---

- `food.h` defines fields and methods of a class
- `food.c` defines bodies of methods and constructor of a class
- `class(n)` requires a 1:1 correspondence of `food.c` `food.h`
