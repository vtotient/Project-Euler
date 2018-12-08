#include <stdio.h>

int sum(int n,int k);

int main() {
  int num;
  long int ans;

  printf("Enter Number, N: \n");
  scanf("%d", &num);

  ans = sum(num, 3) + sum(num, 5) - sum(num, 15);

  printf("%ld \n", ans);

  return 0;
}

int sum(int n, int k){
  int z = n /k;
  return k*(z*(z+1))/2; // Always an integer
}
