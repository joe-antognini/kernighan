#include <stdio.h>
#include <time.h>
#include "binsearch.c"
#include "3-1.c"

int main(void)
{
  int i, list_len, index, test_index, nrun;
  list_len = 1e6;
  test_index = 123456;
  nrun = 3e7;
  clock_t begin, end;

  int lst[list_len];

  for (i=0; i < list_len; i++)
  {
    lst[i] = i;
  }

  begin = clock();
  for (i=0; i < nrun; i++)
  {
    index = binsearch(test_index, lst, list_len);
  }
  end = clock();
  printf("index of test value: %d\n", index);
  printf("binsearch runtime: %.3f s\n", ((double) (end - begin)) / CLOCKS_PER_SEC);

  begin = clock();
  for (i=0; i < nrun; i++)
  {
    index = binsearch2(test_index, lst, list_len);
  }
  end = clock();
  printf("index of test value: %d\n", index);
  printf("binsearch2 runtime: %.3f s\n", ((double) (end - begin)) / CLOCKS_PER_SEC);


  return 0;
}
