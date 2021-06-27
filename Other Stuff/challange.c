#include <stdio.h>
#define A 20
#ifdef A
#define B 10
#undef A
#endif
#define echo(m) printf(m);
#ifdef A
#define A 100
#else
#define A 50
#endif

int main()
{
#ifdef B
  echo("It is not define : ")

#endif
#if A>60
echo ("A is greatier than 60 : ")
#else
echo("A is less than 60");
#endif

      return 0;
}