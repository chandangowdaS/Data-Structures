#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
	Slist* node=(Slist*)malloc(sizeof(Slist));
	if(node==NULL){
	    return FAILURE;
	}
	node->data=data;
	node->link=*head;
	*head=node;
	return SUCCESS;
}