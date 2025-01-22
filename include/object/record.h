#ifndef CTL_OBJECT_RECORD_H
#define CTL_OBJECT_RECORD_H

#define record(n)                   \
    typedef __record_##n##_t__ n;   \
    struct __record_##n##_t__       \

#endif // CTL_OBJECT_RECORD_H
