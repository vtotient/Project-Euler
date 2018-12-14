#include "mylib.h"
#include <stdio.h>
#include <stdlib.h>

void print_list(list *head){
  list *cur = head;

  while( cur != NULL ){
    printf("%d\n", cur->val);
    cur = cur->next;
  }
}

void append(list *head, long int val){
  list *cur = head;

  while( cur->next != NULL ){
    cur = cur->next;
  }

  cur->next = malloc(sizeof(list));
  cur->next->val = val;
  cur->next->next = NULL;
}

// Takes a double pointer so that pointer may be modified within function
void push(list **head, long int val){
  list *new_node;
  new_node = malloc(sizeof(list));

  new_node->val = val;
  new_node->next = *head;

  *head = new_node;
}

long int pop(list **head){
  list *tmp = *head;
  long int   val = -1;

  if( *head == NULL ){
    return -1;
  }

  *head = tmp->next;
  val = tmp->val;
  free(tmp);

  return val;
}

long int find_largest(list *head){
  list *cur = head;
  long int   largest = -1;

  if( head == NULL ){
    return largest; // if empty list 
  }

  while( cur->next != NULL ){
    if( cur->val > largest ){
      largest = cur->val;
    }
    cur = cur->next;
  }

  if( cur->val > largest ){
      largest = cur->val;
    }

  return largest;
}