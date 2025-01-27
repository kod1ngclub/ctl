#ifndef CTL_OBJECT_ENUMCLASS_H
#define CTL_OBJECT_ENUMCLASS_H

#define enumclass(n)                    \
    typedef enum __enum_##n##_t__ n;    \
    enum __enum_##n##_t__               \

#endif // CTL_OBJECT_ENUMCLASS_H
