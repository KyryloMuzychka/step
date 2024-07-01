#include <iostream>
#include <thread>
#include <chrono>

void threadFunction(int threadNum) {
    // ������������ ����� ������������� � ������� ������
    int sleepTime = 1 + threadNum;

    // ���������������� ���������� ������ �� �������� �����
    std::this_thread::sleep_for(std::chrono::seconds(sleepTime));

    // ������� ����� ������ � ��������� ���������� (������� ������ ������)
    std::cout << "Thread " << threadNum << " slept for " << sleepTime << " seconds and calculated result: " << threadNum * threadNum << std::endl;
}

int main() {
    const int numThreads = 5;  // ���������� �������
    std::thread threads[numThreads];  // ������ �������

    // ������� � ��������� ������ �����
    for (int i = 0; i < numThreads; ++i) {
        threads[i] = std::thread(threadFunction, i + 1);
    }

    // ������� ���������� ���� �������
    for (int i = 0; i < numThreads; ++i) {
        threads[i].join();
    }

    return 0;
}
