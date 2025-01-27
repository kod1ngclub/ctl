#ifndef CTL_UTIL_OPTION_H
#define CTL_UTIL_OPTION_H

#include "shared/str.h"

#define option(t, e) __option_##t##_##e##__

#define typedef_option(t, e)    \
    typedef struct {            \
        const t data;           \
        const e err;            \
        const __str__ body;     \
    } option(t, e)              \

#endif // CTL_UTIL_OPTION_H
