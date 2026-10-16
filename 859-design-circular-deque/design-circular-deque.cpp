
class MyCircularDeque {
private:
    vector<int> arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    MyCircularDeque(int k) {
        capacity = k;
        arr.resize(k);
        front = 0;
        rear = -1;
        count = 0;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }

        front = (front - 1 + capacity) % capacity;
        
        // For the first element, front and rear must match.
        if (count == 0) {
            front = 0;
            rear = 0;
        }

        arr[front] = value;
        count++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }

        if (count == 0) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }

        arr[rear] = value;
        count++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }

        front = (front + 1) % capacity;
        count--;

        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }

        rear = (rear - 1 + capacity) % capacity;
        count--;

        return true;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }
};
