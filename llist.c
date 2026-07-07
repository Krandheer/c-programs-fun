#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

int main() {
  struct node *head = malloc(sizeof(struct node));
  head->data = 0;
  head->next = NULL;
  struct node *curr = head;
  for (int i = 1; i < 6; i++) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = i;
    curr->next = newnode;
    newnode->next = NULL;
    curr = newnode;
  }

  curr = head;
  while (curr != NULL) {
    printf("%d\n", curr->data);
    curr = curr->next;
  }

  curr = head;
  while (curr != NULL) {
    struct node *next = curr->next;
    free(curr);
    curr = next;
  }
}
