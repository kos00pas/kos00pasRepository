#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <string.h>

struct node{
 
  struct node *pinakas[26];
  bool  is_end ; 
  bool used ; 
};


bool search(struct node *root, char kouponi[10] );//psaksimo kouponiou kai elegxos gia valid 
void InsertNode(struct node *root, char* s); // eisagw sto dento 
struct node *create(); // dimiourgia paidion 

