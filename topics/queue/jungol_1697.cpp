#include <iostream>

using namespace std;

int arr[101] = {0};
int front = -1, rear=-1;

bool isQueueFull() {
    if (rear == 101 - 1) {
        return true;
    }
    else { return false; }
}

void enQueue(int data) {
    if (isQueueFull()) {
        return;
    }
    else { 
        rear++;
        arr[rear] = data;
    }
}

bool isQueueEmpty() {
    if (front == rear) {
        return true;
    }
    else { return false; }
}

int deQueue() {
    if (isQueueEmpty()) {
        return -1;
    }
    else {
        front++;
        int data = arr[front];
        return data; 
    }
}

int getSize() {
    return rear - front;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        char select;
        cin >> select;
        switch (select) {
            case 'i': {
                int val;
                cin >> val;
                enQueue(val);
                break;
            }
            case 'o': {
                int popped = deQueue();
                if (popped == -1) {
                    cout << "empty\n";
                } else {
                    cout << popped << '\n';
                }
                break;
            }
            case 'c': {
                cout << getSize() << '\n';
                break;
            }
        }
    }

    return 0;
}