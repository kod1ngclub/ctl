# Kod1ng C Template Library - util/option

## 📌 Example

```c
enum(MathError) {
    MATH_ERROR_NONE     = piv("MAIN::MathError"),
    MATH_ERROR_DIV_0,
    MATH_ERROR_OVERFLOW
};

typedef_option(int, MathError);

option(int, MathError) div(int a, int b) {
    if (b == 0) {
        option(int, MathError) erred = {
            .err    = MATH_ERROR_DIV_0,
            .body   = "Divide number by zero is not allowed"
        };
        return erred;
    }

    option(int, MathError) dived = {
        .data   = (a/b),
        .err    = MATH_ERROR_NONE,
        .body   = NULL
    };
    return dived;
}
```

## 📌 How to

In upper case, `option(int, MathError)` is like this.

```c
// option(int, MathError) is __option_int_MathError__

typedef struct {
    const int data;
    const MathError err;
    const str body;
} __option_int_MathError_-;
```
