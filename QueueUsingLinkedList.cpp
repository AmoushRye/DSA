#include <iostream>
using namespace std;
class QueueNode{
    public:
    int data;
    QueueNode *next;
        QueueNode(int value){
            this->data = value;
            this->next = NULL;
        }
};
class Queue{
    private:
        QueueNode *front,*rear;
    public:
        Queue(){
            front = rear = NULL;
        }
        void Enqueue(int);
        void Dequeue();
};
void Queue::Enqueue(int val){
    QueueNode *temp = new QueueNode(val);
    if(rear == NULL){
        rear = front = temp;
        cout << val << " Enqueue successful"<<endl;
        return;
    }
    rear->next = temp;
    rear = temp;
    cout << val << " Enqueue successful"<<endl;
}
void Queue::Dequeue(){
    QueueNode *nodetoDelete;
    if(front == NULL){
        cout << "Nothing to dequeue"<<endl;
        return;
    }
    nodetoDelete = front;
    front = front->next;
    if(front==NULL){
        rear = NULL;
    }
    cout << nodetoDelete->data << " Dequeue successful"<<endl;
    delete nodetoDelete;
}
int main(){
    Queue q;
    q.Enqueue(4);
    q.Dequeue();
    q.Enqueue(19);
    q.Enqueue(1);
    q.Dequeue();
    return 0;
}