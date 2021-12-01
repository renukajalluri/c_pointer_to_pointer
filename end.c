#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{   
    int data;
    struct node *next;
};
struct node *lastNode = NULL;


void addLast(struct node **h, int val)
{   
    printf("a1");
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    
    if(*h == NULL){
         *h = newNode;
        lastNode = newNode;
          newNode->next = NULL;
    }
    else
    {   
         lastNode->next=newNode;
        lastNode =  newNode ;
    }

}

int main()
{
    struct node *head = NULL;
    printf("%p \n",&head);
    printf("%p \n",&head);
    addLast(&head,10);
    printf("%p",&head);

    // addLast(&head,20);
    // addLast(&head,30);

    // int key;
    // scanf("%d",&key);

    // deleteNode(&head, key);

    // printList(head);

    return 0;
}