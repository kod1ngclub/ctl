#ifndef CTL_OBJECT_SEALED_H
#define CTL_OBJECT_SEALED_H

#define sealed(n)                           \
    typedef struct __union_##n##_t__ n;     \
    union __union_##n##_t__                 \

#endif // CTL_OBJECT_sealed_H
