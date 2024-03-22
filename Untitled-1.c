#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;

} Node;
Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL){
        printf("Erro: Não foi possivel alocar memoria.\n");
        exit(EXIT_FAILURE);

    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(Node **head , int data) {
    Node *newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
    } else{
        Node *temp = *head;
        while (temp->next !=NULL){
        temp = temp->next;
        }
        temp->next = newNode;
    }
}

