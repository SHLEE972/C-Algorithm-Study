#include <iostream>

using namespace std;

class ArrayStack {
private:
    static const int MAX_SIZE = 100;

    int data[MAX_SIZE];
    int topIndex;

public:
    ArrayStack() : topIndex(-1) {
    }

    bool isEmpty() const {
        return topIndex == -1;
    }

    bool isFull() const {
        return topIndex == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            return;
        }

        topIndex++;
        data[topIndex] = value;
    }

    void pop() {
        if (isEmpty()) {
            return;
        }

        topIndex--;
    }

    int peek() const {
        return data[topIndex];
    }

    int size() const {
        return topIndex + 1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    ArrayStack stack;
    while (N--) {
        char command;
        cin >> command;

        if (command == 'i') {
            int value;
            cin >> value;

            stack.push(value);
        } else if (command == 'o') {
            if (stack.isEmpty()) {
                cout << "empty\n";
            } else {
                cout << stack.peek() << '\n';
                stack.pop();
            }
        } else if (command == 'c') {
            cout << stack.size() << '\n';
        }
    }

    return 0;
}