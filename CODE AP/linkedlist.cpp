#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;    
  struct node *next; 
}*head;

void create_list(int n);
void display_list();

int main()
{
  int n;
  printf("Enter total number of nodes: ");
  scanf("%d", &n);
  create_list(n);
  printf("\nData in the linked list \n");
  display_list();
  return 0;
}

void create_list(int n)
{
  struct node *newNode, *temp;
  int data, i;
  head = (struct node *)malloc(sizeof(struct node));
  if(head == NULL)
  {
    printf("Unable to allocate memory.");
    exit(0);
  }
  
  printf("Enter data for node 1: ");
  scanf("%d", &data);
  head->data = data; 
  head->next = NULL; 
  temp = head;
  for(i=2; i<=n; i++)
  {
    newNode = (struct node *)malloc(sizeof(struct node));
    
    if(newNode == NULL)
    {
      printf("Unable to allocate memory.");
      break;
    }
    
    printf("Enter data for node %d: ", i);
    scanf("%d", &data);
    newNode->data = data; 
    newNode->next = NULL; 
    temp->next = newNode; 
    temp = temp->next;   
  }
}

void display_list()
{
  struct node *temp;
  if(head == NULL)
  {
    printf("List is empty.");
    return;
  }
  temp = head;
  
  while(temp != NULL)
  {
    printf(" %d  ", temp->data); 
    temp = temp->next;         
  }
}
