#include <iostream>

struct Node {
    int data;
    Node* link;
};
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }
    void push(int data) {
        Node* temp = new Node;
        temp->data = data;
        temp->link = top;
        top = temp;
    }

    bool isEmpty() {
        return top == nullptr;
    }
    int peek() {
        if (!isEmpty())
            return top->data;
        else {
            std::cerr << "Stack is empty." << std::endl;
            exit(1);
        }
    }
    void pop() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
            exit(1);
        }
        Node* temp = top;
        top = top->link;
        delete temp;
    }
    void display() {
        Node* temp = top;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->link;
        }
        std::cout << std::endl;
    }
};
int main() {
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.pop();
    myStack.push(30);
    myStack.push(40);
    std::cout << "Top element: " << myStack.peek() << std::endl;
    std::cout << "Stack contents: ";
    myStack.display();
    return 0;
}
