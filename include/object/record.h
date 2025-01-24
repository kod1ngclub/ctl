#ifndef KCTL_OBJECT_RECORD_H
#define KCTL_OBJECT_RECORD_H

#define record(n)                           \
    typedef struct __record_##n##_t__ n;    \
    struct __record_##n##_t__               \

#endif // KCTL_OBJECT_RECORD_H
