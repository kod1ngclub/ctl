# Kod1ng C Template Library - default

## 📌 `cast(t, v)`

```c
long v = 100;

// equal
int c1 = (int)v;
int c2 = cast(int, v);
```

- `cast(t, v)` is a static-casting macro
- For more explicit syntax

## 📌 `succ(t)`

```c
// equal
const char* const t1 = "Hello, World!";
const succ(char) t2 = "Hello, World!";
```

- `succ(t)` is for succssive expression of type `t`
- Its expression is `t* const` but different in semantic classification
  - `t* const` is pointer that can't change its target
  - `succ(t)` is succssion of type `t`
  - `succ(char)` is for succssive `char`, namely **string**

## 📌 `arrow(t)`

```c
FILE sec1 = FileSection("file1.txt", 1);
FILE sec2 = FileSection("file2.txt", 2);

arrow(FILE) sec = &sec1;
```

- `arrow(t)` is for target-switch expression between two values of type `t`
- `arrow(FILE)` is file-switch expression
  - `sec = &sec2` is switching target from `sec1` to `sec2`

```c
sec = sec1 // targeted-file is switched to sec1
sec = sec2 // targeted-file is switched to sec2
```

## 📌 `ref(t)`

```c
const int* const p1 = ...
ref(p2) = ...
```

- `ref(t)` is for readonly pointer
- Nothing more than `const t* const`
- Readonly pointer is usually used for reading too-heavy data
