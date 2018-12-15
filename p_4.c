#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int is_pal(int x);

int main(){
  int pal = 0;
  int prod;

  for( int i = 1; i <= 1000; i++ ){
    for( int j = i; j <= 1000; j++ ){
      prod = i * j;
      if( is_pal(prod) == TRUE && prod > pal ){
        pal = prod;
      }
    }
  }  

  printf("\nThe largest Palindrome made from a product of two 3 digit numbers is: %d\n\n", pal);
}

int is_pal(int x){
  int y = 0;
  int z = x;
  
  while( x != 0 ){
    y = y * 10;
    y = y + x % 10;
    x = x / 10;
  }

  return (y == z) ? TRUE : FALSE;
}