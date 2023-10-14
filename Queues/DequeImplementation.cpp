#include <iostream>
using namespace std;
class Deque{
    int *arr;
    int front,rear;
    int size;
    public:
        Deque(int x){
            this->size = x;
            arr = new int[x];
            front = rear = -1;
        }
        void pushfront(int);
        void pushRear(int);
        void popfront();
        void popRear();
        void display();
        bool isFull() {
        return (front == 0 && rear == size - 1) || (rear + 1) % size == front;
        }
        bool isEmpty() {return front == -1;}
};
void Deque::pushfront(int data){
    if(isFull()){
        cout << "Deque is full"<<endl;
        return;
    }
    else if(front==-1){
        front = rear = 0;
    }
    else if(front == 0 && rear!=size-1){
        front = size-1;
    }
    else{
        front--;
    }
    arr[front] = data;
    cout << data << " pushed successfully"<<endl;
    
}
void Deque::pushRear(int data){
    if(isFull()){
        cout << "Deque is full"<<endl;
        return;
    }
    else if(front == -1){
        front = 0;
        rear = 0;
    }
    else if(rear == size-1 && front!=0){
        rear = 0;
    }
    else{
        rear++;
    }
    arr[rear] = data;
    cout << data << " pushed successfully"<<endl;

}
void Deque::popfront(){
    if(isEmpty()){
        cout <<"Deque is empty"<<endl;
        return;
    }
    int temp = arr[front];
    arr[front] = -1;
    if(front == rear){
        front = rear = -1;
    }
    else if(front == size-1){
        front = 0;
    }
    else{
        front++;
    }
    cout << temp << " popped Successfully"<<endl;
}
void Deque::popRear(){
    if(isEmpty()){
        cout << "Deque Empty"<<endl;
        return;
    }
    int temp = arr[rear];
    arr[rear] = -1;
    if(front == rear){
        front = rear = -1;
    }
    else if(rear == 0){
        rear = size-1;
    }
    else{
        rear--;
    } 
    cout << temp << " popped Successfully"<<endl;

}
void Deque::display(){
    if (isEmpty()) {
        cout << "Deque is empty." << endl;
        return;
    }
    int current = front;
    while (current != rear) {
        cout << arr[current] << " ";
        current = (current + 1) % size;
    }
    cout << arr[rear] << endl;
}

int main(){
    Deque x(4);
    x.popRear();
    x.pushfront(2);
    x.pushfront(1);
    x.pushRear(4);
    x.pushRear(0);
    x.display();
    return 0;
}