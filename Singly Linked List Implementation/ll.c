#include<stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* link;
};

struct node* root = NULL;

void append(int a){
  struct node* temp;
  temp = (struct node*)malloc(sizeof(struct node*));
  temp->data = a;
  temp->link = NULL;
  if(root==NULL){
    root=temp;
  }
  else{
    struct node* p;
    p = root;
    while(p->link != NULL)
    {
      p = p->link;
    }
    p->link = temp;
  }
}

void insert_beginning(int a){
  struct node* temp;
  temp = (struct node*)malloc(sizeof(struct node*));
  temp->data = a;
  temp->link = NULL;
  if(root == NULL){
    root = temp;
  }
  else{
    temp->link= root;
    root = temp;
  }
}

int length(){
  struct node* temp;
  int count=0;
  temp = root;
  while(temp != NULL){
    count++;
    temp = temp->link;
  }
  return count;
}

void delete(int loc){
  struct node* temp;
  if(loc>length()){
    printf("Invalid location !\n");
  }
  else if(loc == 1){
    temp = root;
    root = temp->link;
    temp->link = NULL;
    free(temp);
  }
  else{
    struct node* p;
    temp = root;
    int i=1;
    while(i<loc-1){
      temp = temp->link;
      i++;
    }
    p = temp->link;
    temp->link = p->link;
    p->link = NULL;
    free(p);
  }
}

void viewlist(){
  struct node* temp;
  temp = root;
  for(int i=0;i<length();i++){
    printf("%d ",temp->data);
    temp = temp->link;
  }
  printf("\n");
}

int main(){
  append(6);
  append(8);
  append(4);
  insert_beginning(3);
  viewlist();
  printf("%d\n",length());
  delete(2);
  viewlist();
  printf("%d\n",length());
  return 0;
}
