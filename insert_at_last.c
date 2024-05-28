#include "sll.h"

int insert_at_last(Slist** head, data_t data){
    Slist* node=(Slist*)malloc(sizeof(Slist));
    node->data=data;
    if(node==NULL){
        return FAILURE;
    }
    if(*head==NULL){
        *head=node;
        return SUCCESS;
    }
    Slist* temp=*head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=node;
    return SUCCESS;
}