# ctl - object/record

## 📌 Example

```h
typedef succ(char) str;

record(ItemName)        { const str data; };
record(ItemBody)        { const str data; };
record(ItemPrice)       { const int data; };
record(ItemBreakable)   { const bool data; };

record(Item) {
    const ItemName name;
    const ItemBody body;
    const ItemPrice price;
    const ItemBreakable breakable;
};
```

### What is that `record(ItemName)`

- Its called `class wrapper`
- To distinguish value according to context as type
  - For example, name and body of `Item` uses the same type, `str`
  - But they are contextly different, so differtiating them is needed
  - To wrap data with `class`, `struct` or `record` is a traditional way for it

## 📌 How to

- `record(n)` is a syntax sugar of `typedef struct`
