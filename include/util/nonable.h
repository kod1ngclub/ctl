#ifndef KCTL_UTIL_NONABLE_H
#define KCTL_UTIL_NONABLE_H

#include "shared/bool.h"

#define nonable(t) __nonable_##t##__

#define typedef_nonable(t)  \
    typedef struct {        \
        const t data;       \
        const __bool__ ok;  \
    } nonable(t)            \

#endif // KCTL_UTIL_NONABLE_H
