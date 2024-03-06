#include "free.h"
#include "slf0_basic_incr.c"
#include "slf10_basic_ref.c"

unsigned int succ_using_incr (unsigned int n)
/*@ ensures return == n + 1u32 @*/
{
  unsigned int *p = ref(n);
  incr(p);
  unsigned int x = *p;
  free_(p);
  return x;
}