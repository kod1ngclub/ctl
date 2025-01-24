#ifndef KCTL_OBJECT_ENUM_H
#define KCTL_OBJECT_ENUM_H

#define enum(n)                         \
    typedef enum __enum_##n##_t__ n;    \
    enum __enum_##n##_t__               \

#endif // KCTL_OBJECT_ENUM_H
