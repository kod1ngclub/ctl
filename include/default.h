#ifndef KCTL_DEFAULT_H
#define KCTL_DEFAULT_H

#include "stdbool.h"

#define succ(t) t* const
#define arrow(t) const t*
#define ref(t) const t* const

#define cast(t, v) (t)(v)

typedef char* const str;
typedef _Bool boolean;

#endif // KCTL_DEFAULT_H
