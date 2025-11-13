#include<iostream>
using namespace std;
class queue1{
    public:
    int front;
    int rear;
    int *arr;
    int size;

    queue1(int s){
        this->size=s;
        rear=0;
        front=0;
        arr= new int[size];
    }
    void enqueue(int element){
        if(size==rear){
            cout<<"queue is overflow"<<endl;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }
    void deqeue(){
        if(front==rear){
            cout<<"queue is underflow"<<endl;
        }
        else{
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    int top(){
        if(size==rear){
            return arr[front];
        }
        else{
            return -1;
        }
    }

    void print(){
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    queue1 q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(1);

   q. print();
   cout<<q.top()<<endl;

   q.deqeue();
   q.print();

   q.deqeue();
   q.print();

}