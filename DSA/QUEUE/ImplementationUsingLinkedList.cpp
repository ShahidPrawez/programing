#include <iostream>

struct QNode {
    int data;
    QNode* next;
    QNode(int d) : data(d), next(nullptr) {}
};

class Queue {
private:
    QNode* front;
    QNode* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enQueue(int x) {
        QNode* temp = new QNode(x);
        if (rear == nullptr) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deQueue() {
        if (front == nullptr) {
            std::cerr << "Queue is empty." << std::endl;
            exit(1);
        }
        QNode* temp = front;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        delete temp;
    }

    void display() {
        QNode* temp = front;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue myQueue;
    myQueue.enQueue(10);
    myQueue.enQueue(20);
    myQueue.deQueue();
    myQueue.enQueue(30);
    myQueue.enQueue(40);

    std::cout << "Queue contents: ";
    myQueue.display();

    return 0;
}
