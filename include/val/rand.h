#ifndef CTL_VAL_RAND_H
#define CTL_VAL_RAND_H

// ==== Hash - INT
#define __HASH_INT_KEY__        (2654435761U)
#define __HASH_INT_LIMIT__      (4294967296U)
#define __HASH_INT__(i)         (((i) * (__HASH_INT_KEY__)) % (__HASH_INT_LIMIT__))

// ==== Hash - STR
#define __STRLEN__(s)           (sizeof(s) - (1))
#define __STRLAST__(s)          (__STRLEN__(s) - (1))

// ==== Hash - FILE, TIME, LINE
#define __HASH_FILE__(s)    ((__HASH_INT__((s)[__STRLAST__(s) - (2)])) + (__HASH_INT__((s)[__STRLAST__(s) - (3)])))
#define __HASH_TIME__(s)    ((__HASH_INT__((s)[0])) + (__HASH_INT__((s)[1])))
#define __HASH_LINE__(n)    (__HASH_INT__(__HASH_INT__(n) * 31) / 17)

// ==== RAND
#define RAND(f, t, l)       (__HASH_INT__(__HASH_FILE__(f) + __HASH_TIME__(t) + __HASH_LINE__(l)))

// ==== LRAND (Linic Random)
#define LRAND(f, t, l)      (__HASH_INT__(__HASH_FILE__(f) + __HASH_TIME__(t)) + l)

// ==== FRAND (File Random)
#define FRAND(f, t)         (__HASH_INT__(__HASH_FILE__(f) + __HASH_TIME__(t)) + __STRLEN__(f))

// ==== SRAND (Str Random)
#define SRAND(s)            ((__HASH_TIME__(s)) + (__HASH_INT__(__HASH_FILE__(s) + __HASH_LINE__(__STRLEN__(s)))))

#endif // CTL_VAL_RAND_H
