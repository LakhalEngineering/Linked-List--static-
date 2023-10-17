#include <stdio.h>
#include <stdlib.h>


struct node{
    int value;
    struct node* next;
};

typedef struct node node_t;
void printflist(node_t *head){
    node_t *temporary = head;

    while(temporary != NULL){
        printf("%d -", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

int main(){

    node_t n1, n2, n3;
    node_t *head;

    n1.value = 5;
    n2.value = 20;
    n3.value = 70;

    // link them up
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL; // we know when to stop
    
    printflist(head);
    return 0;

}