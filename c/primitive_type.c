#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    // char bit
    printf("char bit : %u\n", CHAR_BIT);
    printf("char : %d ~ %d\n", CHAR_MIN, CHAR_MAX);

    // schar
    printf("char : %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char : 0 ~ %u\n", UCHAR_MAX);

    // short
    printf("short : %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short : 0 ~ %u\n", USHRT_MAX);

    // int
    printf("int : %d ~ %d\n", INT_MIN, INT_MAX);
    printf("unsigned int : 0 ~ %u\n", UINT_MAX);

    // long
    printf("long : %ld ~ %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long : 0 ~ %lu\n", ULONG_MAX);

    // long long
    printf("long : %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long : 0 ~ %llu\n", ULLONG_MAX);

    return 0;
}



/*
#undef  SCHAR_MIN
#undef  SCHAR_MAX
#undef  UCHAR_MAX
#undef  SHRT_MIN
#undef  SHRT_MAX
#undef  USHRT_MAX
#undef  INT_MIN
#undef  INT_MAX
#undef  UINT_MAX
#undef  LONG_MIN
#undef  LONG_MAX
#undef  ULONG_MAX

#undef  CHAR_BIT
#undef  CHAR_MIN
#undef  CHAR_MAX

#undef  LLONG_MIN
#undef  LLONG_MAX
#undef  ULLONG_MAX

#undef   LONG_LONG_MIN
#undef   LONG_LONG_MAX
#undef   ULONG_LONG_MAX

*/
