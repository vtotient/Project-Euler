// Linked List implementation to help solve problems

typedef struct node{
  int val;
  struct node *next;
} list;

void print_list(list *head); 
void append(list *head, long int val);
void push(list **head, long int val);
long int pop(list **head);
long int find_largest(list *head);