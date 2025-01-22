#ifndef CTL_UTIL_OPTION_H
#define CTL_UTIL_OPTION_H

#define OPTION(t, e) __option_##t##_##e##__

#define DEF_OPTION(t, e)            \
    typedef struct {                \
        const t data;               \
        const e err;                \
        const char* const body;     \
    } OPTION(t, e)                  \

#endif // CTL_UTIL_OPTION_H
