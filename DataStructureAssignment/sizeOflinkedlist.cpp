#include <iostream>

class LinkedList {
public:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    LinkedList() : head(nullptr), size(0) {}

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insertAt(int index, int value) {
        if (index < 0 || index > size) {
            std::cout << "Index out of bounds." << std::endl;
            return;
        }

        Node* newNode = new Node(value);

        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            for (int i = 0; i < index - 1; ++i) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }

        ++size;
    }

    void deleteAt(int index) {
        if (index < 0 || index >= size) {
            std::cout << "Index out of bounds." << std::endl;
            return;
        }

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* current = head;
            for (int i = 0; i < index - 1; ++i) {
                current = current->next;
            }
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }

        --size;
    }

    int getSize() const {
        return size;
    }

    void printList() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

private:
    Node* head;
    int size;
};

int main() {
    LinkedList list;

    list.insertAt(0, 10);
    list.insertAt(1, 20);
    list.insertAt(2, 30);
    list.insertAt(1, 15);

    list.printList();
    std::cout << "Size of the list: " << list.getSize() << std::endl;

    list.deleteAt(1);
    list.printList();
    std::cout << "Size of the list: " << list.getSize() << std::endl;

    list.deleteAt(0);
    list.printList();
    std::cout << "Size of the list: " << list.getSize() << std::endl;

    list.deleteAt(2);
    list.deleteAt(-1);

    return 0;
}
