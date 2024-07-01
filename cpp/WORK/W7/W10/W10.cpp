#include <iostream>
using namespace std;

// ����������� ������ Node (����)
class Node {
public:
    int data;  // ������, ���������� � ����
    Node* next;  // ��������� �� ��������� ���� � ������

    // ����������� ��� ������������� ����
    Node(int data) : data(data), next(nullptr) {}
};

// ����� ��� ���������� ����������� �������
class SinglyLinkedList {
private:
    Node* head;  // ��������� �� ������ ���� ������

public:
    // �����������
    SinglyLinkedList() : head(nullptr) {}

    // ���������� ��� ������� ������
    ~SinglyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // ������� ��� ���������� ���� � ������ ������
    void pushFront(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // ������� ��� �������� ���� �� ������ ������
    void popFront() {
        if (head == nullptr) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void insert(int index, int data) {
        // ���� ����� �������� � ������ ������, ���������� ��� ������������ ����� pushFront
        if (index == 0) {
            pushFront(data);
            return;
        }
        // �������� � ������� ���� ������
        Node* current = head;
        // �������� �� ������ �� ����, ������� ��������� ����� ������ �������� ��� �������
        for (int i = 0; current != nullptr && i < index - 1; i++) {
            current = current->next;
        }
        // ���� ����� ����� current ����� nullptr, ������ ������ ������� �� ������� ������
        if (current == nullptr) {
            cout << "Index out of bounds" << endl;
            return;
        }
        // ������� ����� ���� � �������
        Node* newNode = new Node(data);
        // ����� ���� ��������� �� ��������� ���� ����� current
        newNode->next = current->next;
        // ������� ���� ������ ��������� �� ����� ����
        current->next = newNode;
    }


    void remove(int index) {
        // ���� ������ ����, ������ ������� �� �������
        if (head == nullptr) return;
        // ���� ����� ������� ������ �������, ���������� ��� ������������ ����� popFront
        if (index == 0) {
            popFront();
            return;
        }
        // �������� � ������� ����
        Node* current = head;
        // prev ����� ��������� �� ���� ����� current
        Node* prev = nullptr;
        // �������� �� ������ �� ����, ������� ����� �������
        for (int i = 0; current != nullptr && i < index; i++) {
            prev = current; // ��������� ������� ���� ��� ����������
            current = current->next; // ������������ � ���������� ����
        }
        // ���� current ����� nullptr, ������ ������ ������� �� ������� ������
        if (current == nullptr) {
            cout << "Index out of bounds" << endl;
            return;
        }
        // ������������� � prev ������ �� ���� ����� current, ��� ����� �������� current �� ������
        prev->next = current->next;
        // ����������� ������, ���������� ��������� �����
        delete current;
    }


    void print() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    SinglyLinkedList list;
    
    for (int i = 10; i >= 1; i--)
        list.pushFront(i);    
    cout << "List after inserting 1-10: ";
    list.print();

    list.insert(2, 25);
    cout << "List after inserting 25 at index 2: ";
    list.print();
    
    list.remove(2);
    cout << "List after removing the element at index 2: ";
    list.print();

    list.insert(10, 100);
    cout << "List after inserting 100 at index 10: ";
    list.print();

    return 0;
}
