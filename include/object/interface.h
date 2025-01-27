#ifndef CTL_OBJECT_INTERFACE_H
#define CTL_OBJECT_INTERFACE_H

#define interface(n)                        \
    typedef struct __interface_##n##_t__ n; \
    struct __interface_##n##_t__            \

#define impled() const void* const impled

#define impl() const void* const impl
#define callable(n, ...) (*n)(__VA_ARGS__)

#endif // CTL_OBJECT_INTERFACE_H
