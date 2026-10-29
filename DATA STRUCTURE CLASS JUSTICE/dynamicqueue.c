#include <iostream>
using namespace std;

// Define a node for the linked list
struct Node {
    int data;
    Node* next;
};

class DynamicQueue {
private:
    Node* front;
    Node* rear;

public:
    DynamicQueue() {
        front = nullptr;
        rear = nullptr;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == nullptr);
    }

    // Add an element to the rear of the queue
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " inserted into the queue.\n";
    }

    // Remove an element from the front of the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! The queue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << temp->data << " removed from the queue.\n";
        front = front->next;

        // If front becomes null, rear also becomes null
        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
    }

    // Display elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    DynamicQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}
