#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* insertAtBeginning(struct node* head, int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    return newnode;
}
struct node* deleteNode(struct node* head, int key) {
    struct node* current = head;
    struct node* prev = NULL;

    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Element %d not found in the list\n", key);
        return head;
    }

    if (prev == NULL) {
        head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
    printf("Element %d deleted from the list\n", key);
    return head;
}

void searchElement(struct node* head, int key) {
    struct node* current = head;
    int position = 1;

    while (current != NULL) {
        if (current->data == key) {
            printf("Element %d found at position %d\n", key, position);
            return;
        }
        current = current->next;
        position++;
    }

    printf("Element %d not found in the list\n", key);
}

void displayList(struct node* head) {
    struct node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);

    displayList(head);

    searchElement(head, 2);
    
    head = deletenode(head, 2);

    displayList(head);

    return 0;
    }
