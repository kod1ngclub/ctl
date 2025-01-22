#ifndef CTL_OBJECT_CLASS_H
#define CTL_OBJECT_CLASS_H

#define class(n)                    \
    typedef __class_##n##_t__ n;    \
    struct __class_##n##_t__        \

#define fn(n, ...) (*n)(__VA_ARGS__)

#endif // CTL_OBJECT_CLASS_H
