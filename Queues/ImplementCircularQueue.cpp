class MyCircularQueue {
private:
    int* arr;
    int front, rear, size;

public:
    MyCircularQueue(int k) {
        arr = new int[k];
        size = k;
        front = rear = -1;
    }

    ~MyCircularQueue() {
        delete[] arr;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        } else if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[front];
        }
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[rear];
        }
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear + 1) % size == front;
    }
};
