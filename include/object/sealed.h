#ifndef CTL_OBJECT_SEALED_H
#define CTL_OBJECT_SEALED_H

#define sealed(n)                       \
    typedef union __sealed_##n##_t__ n; \
    union __sealed_##n##_t__            \

#endif // CTL_OBJECT_SEALED_H
