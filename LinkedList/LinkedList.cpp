#include <iostream>

class ListNode {
public:
    int value;
    ListNode* next;

    ListNode(int value = 0, ListNode* next = nullptr) {
        this->value = value;
        this->next = next;
    }
};

class LinkedList {
public:
    ListNode* head;

    LinkedList(ListNode* node = nullptr) {
        head = node;
    }

    void append(int value) {
        ListNode* newNode = new ListNode(value);
        if (!head) {
            head = newNode;
            return;
        }
        ListNode* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void prepend(int value) {
        ListNode* newNode = new ListNode(value);
        newNode->next = head;
        head = newNode;
    }

    void deleteNode(int value) {
        if (!head) {
            return;
        }
        if (head->value == value) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        ListNode* current = head;
        while (current->next) {
            if (current->next->value == value) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            current = current->next;
        }
    }

    void display() {
        ListNode* current = head;
        while (current) {
            std::cout << current->value << " -> ";
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