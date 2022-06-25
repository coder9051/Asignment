#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtFirstPos(struct Node** head, int new_data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = new_data;
    ptr->next = *head;

    (*head) = ptr;
}

void insertAtLastPos(struct Node** head, int new_data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    while (last->next != NULL){
        last = last->next;
    }
    ptr->data = new_data;
    ptr->next = NULL;
    last->next = ptr;
}

void insertAtAnyPos(struct Node** head, int new_data, int pos){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    ptr->data = new_data;

    if (pos==1){
        ptr->next = temp;
        *head = ptr;
    }

    else{
        for (int i = 0; i < pos - 2; i++){
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }
}

void searchNode(struct Node** head, int key){
    struct Node* current = *head;
    int flag = 0;
    if (current != NULL){
        while(current != NULL){
            if (current->data == key){
                    flag = 1;
                break;
            }
            else{
                current = current->next;
            }
        }
    }
    if (flag == 1){
        printf("\n%d is present in linked list", key);
    }
    else{
        printf("\n%d is not present in linked list", key);
    }
}

void printLinkedList(struct Node* node){
    printf("\n");
    while(node != NULL){
        printf("%d ", node->data);
        node = node->next;
    }
}

void deleteFirstNode(struct Node** head){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if (*head == NULL){
        printf("List is Empty");
    }
    else{
        temp = *head;
        *head = temp->next;
        free(temp);
        printf("Node is Deleted");
    }
}

void deleteFromAnyPos(struct Node** head, int pos){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr = *head;

    for(int i; i < pos - 1; i++){
        temp = ptr;
        ptr = ptr->next;

        if (ptr == NULL){
            printf("Not Enough elements in Linked List");
        }
    }
    temp->next = ptr->next;
    free(ptr);
    printf("Element Deleted from Linked List");

}

void deleteFromLastPos(struct Node** head){
    struct Node* previous = (struct Node*)malloc(sizeof(struct Node));
    struct Node* current = *head;

    while (current->next != NULL){
        previous = current;
        current = current->next;
    }
    previous->next = NULL;
    free(current);
    printf("Node Deleted from last position");
}

int main(){
    struct Node* head = NULL;

    //insertAtFirstPos(&head, 56);
    //printLinkedList(head);

    //insertAtFirstPos(&head, 45);
    //printLinkedList(head);

    //insertAtLastPos(&head, 23);
    //printLinkedList(head);

    //insertAtLastPos(&head, 65);
    //printLinkedList(head);

    //insertAtAnyPos(&head, 12, 2);
    //printLinkedList(head);

    //insertAtAnyPos(&head, 13, 1);
    //printLinkedList(head);

    //searchNode(&head, 12);
    //printLinkedList(head);

    //searchNode(&head, 13);
    //printLinkedList(head);

    //deleteFirstNode(&head);
    //deleteFirstNode(&head);
    //printLinkedList(head);

    //deleteFromAnyPos(&head, 2);
    //printLinkedList(head);

    //deleteFromLastPos(&head);
    //printLinkedList(head);

    return 0;
}