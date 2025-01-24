# Kod1ng C99 Template Library - util/tuple

## Example

```c
typedef_tuple2(int, char);
typedef_tuple3(int, char, float);
typedef_tuple4(int, char, float, int);

int main(void) {
    tuple2(int, char) t2 =  { 12, 'A' };
    tuple3(int, char) t3 =  { 24, 'B', 3.14 };
    tuple4(int, char) t4 =  { 36, 'E', 3.14, 612 };

    // access to value like this
    int a       = t2.v1;
    int b       = t4.v4;
    char c      = t3.v2;
    float d     = t4.v3;

    return 0;
}
```

## How to

- `typedef_tuple2(n)` is a syntax sugar of `typedef struct`
- `typedef_tuple3(n)` is a syntax sugar of `typedef struct`
- `typedef_tuple4(n)` is a syntax sugar of `typedef struct`
- Just for defining more-tuple-like struct

> - `typedef_tuple2(t)` should be **unique** in include-tree
> - Not safe to re-define conflict

> - `typedef_tuple2(t)` should be **unique** in include-tree
> - Not safe to re-define conflict

> - `typedef_tuple2(t)` should be **unique** in include-tree
> - Not safe to re-define conflict
