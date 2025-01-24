#ifndef CTL_UTIL_TUPLE_H
#define CTL_UTIL_TUPLE_H

// ==== tuple2
#define tuple2(a, b)    __tuple_##a##_##b##__

#define typedef_tuple2(a, b)    \
    typedef struct {            \
        const a v1;             \
        const b v2;             \
    } tuple2(a, b)              \

// ==== tuple3
#define tuple3(a, b, c) __tuple_##a##_##b##_##c##__

#define typedef_tuple3(a, b, c) \
    typedef struct {            \
        const a v1;             \
        const b v2;             \
        const c v3;             \
    } tuple3(a, b, c)           \

// ==== tuple4
#define tuple4(a, b, c, d)  __tuple_##a##_##b##_##c##_##d##__

#define typedef_tuple4(a, b, c, d)  \
typedef struct {                    \
    const a v1;                     \
    const b v2;                     \
    const c v3;                     \
    const d v4;                     \
} tuple4(a, b, c, d)                \

#endif // CTL_UTIL_TUPLE_H
