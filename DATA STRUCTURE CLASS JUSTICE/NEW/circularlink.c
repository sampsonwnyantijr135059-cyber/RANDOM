#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function declarations
void insertAtBeginning(struct Node** head, int data);
void insertAtEnd(struct Node** head, int data);
void deleteNode(struct Node** head, int key);
void displayList(struct Node* head);

int main() {
    struct Node* head = NULL;

    printf("--- Circular Linked List Operations ---\n");

    // Insert elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    displayList(head);

    printf("\nInserting 5 at the beginning:\n");
    insertAtBeginning(&head, 5);
    displayList(head);

    printf("\nDeleting 20 from the list:\n");
    deleteNode(&head, 20);
    displayList(head);

    printf("\nDeleting 5 (head node) from the list:\n");
    deleteNode(&head, 5);
    displayList(head);

    return 0;
}

// Function to insert a node at the beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*head == NULL) {
        newNode->next = newNode; // Points to itself
        *head = newNode;
        return;
    }

    // Find the last node to update its next pointer
    struct Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }

    newNode->next = *head;
    temp->next = newNode; // Last node now points to the new head
    *head = newNode;       // Move head pointer to new node
}

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = *head; // Maintain the circular link
}

// Function to delete a specific node
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *curr = *head, *prev = NULL;

    // Case 1: If the node to be deleted is the head node
    if (curr->data == key) {
        // If it's the only node in the list
        if (curr->next == *head) {
            free(curr);
            *head = NULL;
            return;
        }

        // Find the last node to update its reference
        struct Node* last = *head;
        while (last->next != *head) {
            last = last->next;
        }

        *head = curr->next;  // Move head to next node
        last->next = *head;  // Point last node to new head
        free(curr);
        return;
    }

    // Case 2: Node to be deleted is somewhere else in the list
    while (curr->next != *head && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    // If node was found
    if (curr->data == key) {
        prev->next = curr->next;
        free(curr);
    } else {
        printf("Element %d not found in the list.\n", key);
    }
}

// Function to display the circular linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("List elements: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head); // Stop when we loop back to the head

    printf("(head: %d)\n", head->data);
}
