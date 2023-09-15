#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value = 0, Node* nextNode = nullptr) {
        data = value;
        next = nextNode;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList(Node* node = nullptr) {
        head = node;
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void prepend(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void deleteNode(int value) {
        if (!head) {
            return;
        }
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current->next) {
            if (current->next->data == value) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            current = current->next;
        }
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList myLinkedList;
    myLinkedList.append(1);
    myLinkedList.append(2);
    myLinkedList.append(3);
    myLinkedList.display();  // Output: 1 -> 2 -> 3 -> nullptr
    myLinkedList.prepend(0);
    myLinkedList.display();  // Output: 0 -> 1 -> 2 -> 3 -> nullptr
    myLinkedList.deleteNode(2);
    myLinkedList.display();  // Output: 0 -> 1 -> 3 -> nullptr

    return 0;
}