# Kod1ng C Template Library - object/class

## 📌 Example

```h
// config.h
interface(CONFIG) {
    impled();

    const void callable(print, impl());
    const void callable(reset, impl())
};

```c
// envconfig.h
static void __env_config_print__(impl()) {
    ...
}

static void __env_config_reset__(impl()) {
    ...
}

// constructor
extern CONFIG* EnvConfig() {
    // dynamic-casting here
    ...
}

/*
 * - function 'print'
 * - function 'reset'
 * - constructor (malloc implement) (dynamic-casting)
 */
```

```c
// sqlite3config.h
static void __sqlite3_config_print__(impl()) {
    ...
}

static void __sqlite3_config_reset__(impl()) {
    ...
}

// constructor
extern CONFIG* Sqlite3Config() {
    // dynamic-casting here
    ...
}

/*
 * - function 'print'
 * - function 'reset'
 * - constructor (malloc implement) (dynamic-casting)
 */
```

## 📌 How to

- `interface(n)` is a syntax sugar of `typedef struct`
- `callable(n, ...)` is a syntax sugar of func-ptr
- `interface(n)` is defined as a struct with pure func-ptrs

---

- `config.h` defines callables of a interface
- `envconfig.c` `sqlite3config.c` defines bodies of callables of a inteface
- In `NnnConfig()`
  - Malloc implement and its data
  - Dynamic-dispath of its own functions
- `interface(n)` requires a N:1 correspondence of `sqlite3config.c` `envconfig.c` and `config.h`

> Using `class(n)` in implements of `interface(n)` can be useful.
> For example, in `nnnconfig.c`
> - defination of class `impl_nnnconfig`
> - functions of class `impl_nnnconfig`
> - constructor of class `impl_nnnconfig`
> - binding functions for interface `config`
> - constructor as an implement of interface `nnnconfig`
