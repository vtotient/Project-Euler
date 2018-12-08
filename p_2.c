#include <stdio.h>

int main(){
  int num;
  int f1 = 1, f2 = 1, f3 = 2, sum = 0;

  printf("Enter N: \n");
  scanf("%d", &num);

  while(f3 < num){
    f3 = f2 + f1;
    sum += (f3 % 2 == 0) ? f3 : 0;
    f1 = f2;
    f2 = f3;
  }

  printf("%d\n", sum);

  return 0;
}