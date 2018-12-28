#include <stdio.h>
#define TRUE 1
#define FALSE 0

int is_divisible(int x);

int main(){
  int ans = 2520;

  while( TRUE ){
    if( is_divisible(ans) ){
      break;
    } else {
      ans++;
    }
  }

  printf("The positive number that is evenly divisible by all of the numbers from 1 to 20 is: %d \n", ans);

  return 0;
}

int is_divisible(int x){
  for(int i = 11; i <= 20; i++){
    if( x % i != 0 ){
      return FALSE;
    }
  }

  return TRUE;
}