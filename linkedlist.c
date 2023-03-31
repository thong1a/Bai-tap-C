#include "linkedlist.h"
 node arr={0,NULL};
node* createnewnode(uint8_t data){
    node *CurrentNode;
    CurrentNode =(node*)malloc(sizeof(node));
    CurrentNode->data=data;
    CurrentNode->next=NULL;
    return CurrentNode;
}
void pushback(node* CurrentNode, uint8_t data){
    node *create;
    create=createnewnode(data);
    if(CurrentNode->next==NULL)
    CurrentNode->next=create;
    else{
        node * address=CurrentNode->next;
        while(address->next!=NULL){
            address=address->next;
        }
        address->next=create;
    }
}
void assign(node* CurrentNode,uint8_t data, uint8_t index){
    node *address=CurrentNode->next; // declare a pointer to access location of changing node
    uint8_t cnt=0; // declare a unsigned interger value to save order's address
    while(cnt<index){
        address=address->next;
        cnt++;
    }
    address->data=data;
}
void print(node* CurrentNode)
{
    node*  temp;
    temp=CurrentNode->next;
    while (temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    
}
void earse(node* CurrentNode,uint8_t index){
    node *address, *delete;
    address=CurrentNode->next;
    uint8_t cnt=0;
    while (address!=NULL)
    {
        address=address->next;
        cnt++;
        if(cnt==(index-1))
        {
            delete=address->next;
            address->next=address->next->next;
            free(delete);
            return;
        }
    }   
}
void popback(node *CurrentNode){
    node *address=CurrentNode->next;
    while(address!=NULL){
        address=address->next;
    }
    free(address);
}
void clear(node* CurrentNode){
    node *address=CurrentNode->next, *delete;
    while (address!=NULL)
    {
        delete=address;        
    }
    
}
int main(int argc, char const *argv[])
{
     
    pushback(&arr,5);
    pushback(&arr,8);
    pushback(&arr,7);
    pushback(&arr,9);
    pushback(&arr,11);
    //assign(&arr,11,2);
    earse(&arr,3);

    print(&arr);
    
    return 0;
}

