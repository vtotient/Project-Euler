// Just a simple formula, calculator would suffice
#include <stdio.h>

int ex(int a, int b);

int main()
{
  int n;
  int ans;

  printf("\nEnter: ");
  scanf("%d", &n);

  ans = (n + 1) * ( 3 * ex(n, 3) - ex(n, 2) - 2 * n ) / 12;
  printf("%d\n", ans);
  return 0;
}

int ex(int a, int b){
  if( b == 0) {
    return 1;
  }
  else 
    return a * ex( a, b - 1 );
}
