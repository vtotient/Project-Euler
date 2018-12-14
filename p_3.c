#include "mylib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int find_factors(list *head, long int num);

int main(){
  long int num;
  list *factors = NULL; 
  factors = malloc(sizeof(list));
  factors->next = NULL;

  printf("Enter a number: ");
  scanf("%ld", &num);

  printf("%ld\n", find_factors(factors, num));
  
  return 0;
}

long int find_factors(list *head, long int num){
  while( num % 2 == 0 ){
    append(head, 2);
    num = num / 2;
  }

  // Only need to check odd numbers
  for(int i = 3; i <= sqrt(num); i = i+2 ){ 
    while( num % i == 0 ){
      append(head, i);
      num = num / i;
    }
  }

  if( num > 2) append(head, num);

  return find_largest(head);
}
