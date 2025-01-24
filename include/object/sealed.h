#ifndef KCTL_OBJECT_SEALED_H
#define KCTL_OBJECT_SEALED_H

#define sealed(n)                       \
    typedef union __sealed_##n##_t__ n; \
    union __sealed_##n##_t__            \

#endif // KCTL_OBJECT_SEALED_H
