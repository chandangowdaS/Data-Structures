#include "sll.h"

int sl_delete_last(Slist **head){
    if(*head==NULL){
        return FAILURE;
    }
    Slist* temp=*head;
    Slist* prev=*head;
    while(temp!=NULL){
        prev=temp;
        temp=temp->link;
    }
    prev->link=NULL;
    free(temp);
    return SUCCESS;
}