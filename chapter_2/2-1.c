# include <limits.h>
# include <stdio.h>

main()
{
  // print values from limits.h
  printf("\nHEADER VALUES \n");
  printf("SCHAR MIN %d\n", SCHAR_MIN);
  printf("SCHAR MAX %d\n", SCHAR_MAX);
  printf("UCHAR MAX %d\n", UCHAR_MAX);

  printf("INT MIN %d\n", INT_MIN);
  printf("INT MAX %d\n", INT_MAX);

  printf("SHRT MIN %d\n", SHRT_MIN);
  printf("SHRT MAX %d\n", SHRT_MAX);

  printf("USHRT MAX %d\n", USHRT_MAX);

  printf("LONG MIN %ld\n", LONG_MIN);
  printf("LONG MAX %ld\n", LONG_MAX);

  printf("ULONG MAX %lu\n", ULONG_MAX);
  printf("\nCOMPUTING \n");

  // calculate values with math!
  int int_min = 0;
  while(int_min - 1 < int_min){
    --int_min;
  }
  printf("int_min %d\n", int_min);

  int int_max = 0;
  while(int_max + 1 > int_max){
    ++int_max;
  }
  printf("int_max %d\n", int_max);

  long long_max = 0;
  while(long_max + INT_MAX > long_max){
    long_max = long_max + INT_MAX;
  }
  while(long_max + 1 > long_max){
    ++long_max;
  }
  printf("long_max %ld\n", long_max);

  long long_min = 0;
  while(long_min + INT_MIN < long_min){
    long_min = long_min + INT_MIN;
  }
  while(long_min - 1 < long_min){
    --long_min;
  }
  printf("long_min %ld\n", long_min);

  unsigned long u_long_max = 0;
  while(u_long_max + INT_MAX > u_long_max){
    u_long_max = u_long_max + INT_MAX;
  }
  while(u_long_max + 1 > u_long_max){
    ++u_long_max;
  }
  printf("u_long_max %lu\n", u_long_max);
}
