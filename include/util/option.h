#ifndef CTL_UTIL_OPTION_H
#define CTL_UTIL_OPTION_H

#define option(t, e) __option_##t##_##e##__

#define def_option(t, e)            \
    typedef struct {                \
        const t data;               \
        const e err;                \
        const char* const body;     \
    } option(t, e)                  \

#endif // CTL_UTIL_OPTION_H
