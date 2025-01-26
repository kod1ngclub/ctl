# Kod1ng C Template Library - util/nonable

## 📌 Example

```c
typedef_nonable(int);

nonable(int) div(int a, int b) {
    if (b == 0) {
        nonable(int) non = { .ok = false };
        return non;
    }

    nonable(int) dived = { .data = (a/b), .ok = true };
    return dived;
}
```

## 📌 How to

In upper case, `nonable(int)` is like this.

```c
// nonable(int) is __nonable_int__

typedef struct {
    const int data;
    const bool ok;
} __nonable_int__;
```

> - `typedef_nonable(t)` should be **unique** in include-tree
> - Not safe to re-define conflict
