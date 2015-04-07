/* exercise 3-1 */
/* binsearch2: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch2(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;
  mid = (low + high) / 2;
  while (low <= high && v[mid] != x) {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else 
      low = mid + 1;
  }

  if (v[mid] == x)
    return mid;
  else
    return -1; /* no match */
}
