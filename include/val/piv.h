#ifndef CTL_VAL_PIV_H
#define CTL_VAL_PIV_H

#define __hash_int__(x)     ((int)((x) * 2654435761U))

#define __sum_01__(str)     (__hash_int__((int)(unsigned char)str[0]))
#define __sum_02__(str)     (__hash_int__((int)__sum_01__(str) + (unsigned char)str[1]))
#define __sum_03__(str)     (__hash_int__((int)__sum_02__(str) + (unsigned char)str[2]))
#define __sum_04__(str)     (__hash_int__((int)__sum_03__(str) + (unsigned char)str[3]))
#define __sum_05__(str)     (__hash_int__((int)__sum_04__(str) + (unsigned char)str[4]))
#define __sum_06__(str)     (__hash_int__((int)__sum_05__(str) + (unsigned char)str[5]))
#define __sum_07__(str)     (__hash_int__((int)__sum_06__(str) + (unsigned char)str[6]))
#define __sum_08__(str)     (__hash_int__((int)__sum_07__(str) + (unsigned char)str[7]))
#define __sum_09__(str)     (__hash_int__((int)__sum_08__(str) + (unsigned char)str[8]))
#define __sum_10__(str)     (__hash_int__((int)__sum_09__(str) + (unsigned char)str[9]))
#define __sum_11__(str)     (__hash_int__((int)__sum_10__(str) + (unsigned char)str[10]))
#define __sum_12__(str)     (__hash_int__((int)__sum_11__(str) + (unsigned char)str[11]))
#define __sum_13__(str)     (__hash_int__((int)__sum_12__(str) + (unsigned char)str[12]))
#define __sum_14__(str)     (__hash_int__((int)__sum_13__(str) + (unsigned char)str[13]))
#define __sum_15__(str)     (__hash_int__((int)__sum_14__(str) + (unsigned char)str[14]))
#define __sum_16__(str)     (__hash_int__((int)__sum_15__(str) + (unsigned char)str[15]))
#define __sum_17__(str)     (__hash_int__((int)__sum_16__(str) + (unsigned char)str[16]))
#define __sum_18__(str)     (__hash_int__((int)__sum_17__(str) + (unsigned char)str[17]))
#define __sum_19__(str)     (__hash_int__((int)__sum_18__(str) + (unsigned char)str[18]))
#define __sum_20__(str)     (__hash_int__((int)__sum_19__(str) + (unsigned char)str[19]))
#define __sum_21__(str)     (__hash_int__((int)__sum_20__(str) + (unsigned char)str[20]))
#define __sum_22__(str)     (__hash_int__((int)__sum_21__(str) + (unsigned char)str[21]))
#define __sum_23__(str)     (__hash_int__((int)__sum_22__(str) + (unsigned char)str[22]))
#define __sum_24__(str)     (__hash_int__((int)__sum_23__(str) + (unsigned char)str[23]))
#define __sum_25__(str)     (__hash_int__((int)__sum_24__(str) + (unsigned char)str[24]))
#define __sum_26__(str)     (__hash_int__((int)__sum_25__(str) + (unsigned char)str[25]))
#define __sum_27__(str)     (__hash_int__((int)__sum_26__(str) + (unsigned char)str[26]))
#define __sum_28__(str)     (__hash_int__((int)__sum_27__(str) + (unsigned char)str[27]))
#define __sum_29__(str)     (__hash_int__((int)__sum_28__(str) + (unsigned char)str[28]))
#define __sum_30__(str)     (__hash_int__((int)__sum_29__(str) + (unsigned char)str[29]))
#define __sum_31__(str)     (__hash_int__((int)__sum_30__(str) + (unsigned char)str[30]))
#define __sum_32__(str)     (__hash_int__((int)__sum_31__(str) + (unsigned char)str[31]))

#define __sum_n__(str, n) ((int)(   \
    n <= 0 ?    0 :                 \
    n == 1 ?    __sum_01__(str) :   \
    n == 2 ?    __sum_02__(str) :   \
    n == 3 ?    __sum_03__(str) :   \
    n == 4 ?    __sum_04__(str) :   \
    n == 5 ?    __sum_05__(str) :   \
    n == 6 ?    __sum_06__(str) :   \
    n == 7 ?    __sum_07__(str) :   \
    n == 8 ?    __sum_08__(str) :   \
    n == 9 ?    __sum_09__(str) :   \
    n == 10 ?   __sum_10__(str) :   \
    n == 11 ?   __sum_11__(str) :   \
    n == 12 ?   __sum_12__(str) :   \
    n == 13 ?   __sum_13__(str) :   \
    n == 14 ?   __sum_14__(str) :   \
    n == 15 ?   __sum_15__(str) :   \
    n == 16 ?   __sum_16__(str) :   \
    n == 17 ?   __sum_17__(str) :   \
    n == 18 ?   __sum_18__(str) :   \
    n == 19 ?   __sum_19__(str) :   \
    n == 20 ?   __sum_20__(str) :   \
    n == 21 ?   __sum_21__(str) :   \
    n == 22 ?   __sum_22__(str) :   \
    n == 23 ?   __sum_23__(str) :   \
    n == 24 ?   __sum_24__(str) :   \
    n == 25 ?   __sum_25__(str) :   \
    n == 26 ?   __sum_26__(str) :   \
    n == 27 ?   __sum_27__(str) :   \
    n == 28 ?   __sum_28__(str) :   \
    n == 29 ?   __sum_29__(str) :   \
    n == 30 ?   __sum_30__(str) :   \
    n == 31 ?   __sum_31__(str) :   \
    __sum_32__(str)))               \

#define piv(str)            ((const int)(__sum_n__(str, (sizeof(str)-1))))
#define pivlen(str, len)    ((const int)(__sum_n__(str, len)))
#define pivalt(file, len)   ((sizeof(file)-1) + (len))

#endif // CTL_VAL_PIV_H
