#include <iostream>
#include <string>
using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE
};


//Color myColor = RED;
//
//if (myColor == RED) {
//    std::cout << "The color is red." << std::endl;
//}


// ����������� ������������ ��� ������� ������
enum TaskStatus {
    TODO,
    IN_PROGRESS,
    DONE
};

// ����������� ��������� ��� ������
struct Task {
    string name;
    TaskStatus status;
};

void processTask(Task& task) {
    switch (task.status) {
    case TODO:
        std::cout << "Starting task: " << task.name << std::endl;
        task.status = IN_PROGRESS;
        break;
    case IN_PROGRESS:
        std::cout << "Completing task: " << task.name << std::endl;
        task.status = DONE;
        break;
    case DONE:
        std::cout << "Task already completed: " << task.name << std::endl;
        break;
    }
}

int main() {
    Task myTask = { "Fix bug #42", TODO };

    processTask(myTask); // ������ ������ ������
    std::cout << "Task status is now: " << myTask.status << std::endl;

    processTask(myTask); // ������ ��������� ������
    std::cout << "Task status is now: " << myTask.status << std::endl;

    processTask(myTask); // ������ ��� ���������
    std::cout << "Task status is now: " << myTask.status << std::endl;

    return 0;
}

//������� 1: ������ enum
//���� : ������� ������������ Color � ����� ������� : RED, GREEN, BLUE.
//
//���������� ������������ Color.
//�������� �������, ������� ��������� Color � ������� ��������������� �������� ����� �� �����.
//������� 2 : ���������� enum � �������� ����������
//���� : ������������ enum Color ��� ���������� ������� ���������� ���������.
//
//��������� ������������ Color, ������� �������������� �����.
//�������� �������, ������� �������� ���������� ���� �� ��������� � ������������(��������, � RED �� GREEN) � ���������� ����� ��������.
//� main, ����������������� ��������� ����� � ��� �����.
//������� 3 : enum � �������������� ����������
//���� : ���������� ������������ Weekday � ����� ������, ������� � ������������, ���������� ���� ������ �������� ��������(1 ��� ������������ � �.�.).
//
//�������� ������������ Weekday � ����� ������.
//�������� �������, ������� �� ��������� �������� ��� ������ ���������� ��������������� ��� ���.
//� main, ����������������� ������������� ���� ������� ��� ���������� ��������.
//������� 4 : enum class
//���� : ������� ������������ � ������� TrafficLight ��� ���������� ����������, ��� ������ ����(�������, �����, ������) ������������� ������������ ���������.
//
//���������� enum class TrafficLight � ����� ����������� : RED, YELLOW, GREEN.
//�������� �������, ������� ��������� TrafficLight � ���������� ������������ ��� ��������(��������, "Stop" ��� ��������).
//� main, ����������������� ������������� ���� ������� ��� ������� ��������� ���������.
//������� 5 : ���������� enum �� �����������
//���� : ������� ������� ��� ���������� �������� �������, ��������� enum ��� �������� �����(��������, ACTIVE, COMPLETED, CANCELED) � ��������� ��� ������������� �����.
//
//���������� enum ��� ������� �����.
//�������� ��������� Course � ������ �������� �����, ���������� �������� � �������.
//�������� ������� ��� ��������� ������� ����� � ��� ������ ���������� � �����.
//� main, �������� ��������� ������ � ���������� ��������� � ����������������� ���������������� ����� �������.
