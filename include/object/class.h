#ifndef KCTL_OBJECT_CLASS_H
#define KCTL_OBJECT_CLASS_H

#define class(n)                        \
    typedef struct __class_##n##_t__ n; \
    struct __class_##n##_t__            \

#define fn(n, ...) (*n)(__VA_ARGS__)

#endif // KCTL_OBJECT_CLASS_H
