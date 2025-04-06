#include <stdio.h>
#include <stdint.h>
#include <stdlib.h> // thu vien su dung cho cap phat dong

/*
* @brief : khoi tao struct de luu tru gia tri va dia chi cua Node
*/
typedef struct Node
{
    uint8_t value;
    struct Node *next;
}Node_t;

/*
*   @brief : Khoi tao 1 node moi 
*   @parameter: value : Gia tri cua node vua khoi tao 
*   @return : Node_t* : Dia chi cua node vua khoi tao
*/
Node_t *CreateNode(int value){
    Node_t *node = (Node_t*)malloc(sizeof(Node_t));
    node->value = value;
    node->next = NULL;
    printf("Dia chi cua node vua khoi tao : 0x%p \n", node);
    return node;
}

/*
*   @brief : In ra gia tri cua 1 list 
*   @parameter: value : Dia chi cua head
*   @return : Node_t* : void
*/
void PrintList(Node_t *head){
    Node_t *temp = head;
    while(temp != NULL){
        printf("%d ->",temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
    return;
}
int main(int argc, char **argv[]){
    printf("Linker list start !!! \n");
    Node_t *head = CreateNode(1);
    Node_t *first = CreateNode(4);
    Node_t *second = CreateNode(6);
    head->next = first;
    first->next = second;

    PrintList(head);

    return  0 ; 
}
