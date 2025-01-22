#ifndef CTL_OBJECT_ENUM_H
#define CTL_OBJECT_ENUM_H

#define enum(n)                         \
    typedef enum __enum_##n##_t__ n;    \
    enum __enum_##n##_t__               \

#endif // CTL_OBJECT_ENUM_H
