# Kod1ng C Template Library - object/record

## 📌 Example

```h
sealed(Document) {
    const Text text;
    const Image image;
    const Link link;
}
```

## 📌 How to

- `sealed(n)` is a syntax sugar of `typedef union`
- It's just for more simple use of `union`
