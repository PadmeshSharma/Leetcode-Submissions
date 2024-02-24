class MyCircularQueue {
private:
    vector<int> data;
    int front;
    int rear;
    int size;
    int capacity;

public:
    MyCircularQueue(int k) {
        data.resize(k);
        front = -1;
        rear = -1;
        size = 0;
        capacity = k;
    }
    
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        
        if (isEmpty()) {
            front = 0;
        }
        
        rear = (rear + 1) % capacity;
        data[rear] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        
        if (front == rear) {
            // Last element is dequeued
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        
        size--;
        return true;
    }
    
    int Front() {
        if (isEmpty()) {
            return -1;  // or any other value to indicate an error
        }
        
        return data[front];
    }
    
    int Rear() {
        if (isEmpty()) {
            return -1;  // or any other value to indicate an error
        }
        
        return data[rear];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};


/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */