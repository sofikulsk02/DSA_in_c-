#include <iostream>

class LinkedList {
public:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    
    LinkedList() : head(nullptr) {}


    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }


    void insertAt(int index, int value) {
        if (index < 0) {
            std::cout << "Index cannot be negative." << std::endl;
            return;
        }

        Node* newNode = new Node(value);

        if (index == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        int currentIndex = 0;

        while (current != nullptr && currentIndex < index - 1) {
            current = current->next;
            currentIndex++;
        }

        if (current == nullptr) {
            std::cout << "Index out of bounds." << std::endl;
            delete newNode;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void deleteAt(int index) {
        if (index < 0) {
            std::cout << "Index cannot be negative." << std::endl;
            return;
        }

        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        int currentIndex = 0;

        while (current != nullptr && currentIndex < index - 1) {
            current = current->next;
            currentIndex++;
        }

        if (current == nullptr || current->next == nullptr) {
            std::cout << "Index out of bounds." << std::endl;
            return;
        }

        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;

    list.insertAt(0, 10);
    list.insertAt(1, 20);
    list.insertAt(2, 30);
    list.insertAt(1, 15);  

    list.printList();  
    list.deleteAt(1);  
    list.printList();  

    list.deleteAt(0);  
    list.printList();  
    list.deleteAt(2);  
    list.deleteAt(-1);  

    return 0;
}
