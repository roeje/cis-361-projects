
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

struct node {
   queue dataQueue;
   struct node *next;
   char *name;
};

typedef struct node node;

node *head = NULL;
node *current = NULL;

void print ();
void insert (char name[], int data);
node* find (char name[]);
node* delete (char name[]);
