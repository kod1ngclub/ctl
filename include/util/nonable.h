#ifndef CTL_UTIL_NONABLE_H
#define CTL_UTIL_NONABLE_H

#include "shared/bool.h"

#define nonable(t) __nonable_##t##__

#define def_nonable(t)      \
    typedef struct {        \
        const t data;       \
        const bool ok;      \
    } nonable(t)            \

#endif // CTL_UTIL_NONABLE_H
