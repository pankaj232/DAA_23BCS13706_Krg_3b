#include<iostream>
using namespace std;
class stack1{
    public:
    int *arr;
    int top;
    int size;

    stack1(int s){
        this->size=s;
        top=-1;
        arr= new int[size];
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is undeflow"<<endl;
        }
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            return -1;
        }
    }
};
int main(){
    stack1 st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    while(!st.isempty()){
        cout<<st.peek()<<" ";
        st.pop();
    }
    cout<<endl<<endl;

    if(st.isempty()==true){
        cout<<"stack is  empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    return 0;

}