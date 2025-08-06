#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insert(node* &head, int data){
    node* temp= new node(data);
    temp->next=head;
    head=temp;
}

void delection(node* &head){
    if(head==NULL){
        cout<<"stack is underflow"<<endl;
        return ;
    }
    else {
        node * temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
}

int peek(node* &head){
    node* temp=head;
    if(head==NULL){
        return -1;
    }
    else{
        return temp->data;
    }
}

void print(node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* node1= NULL;
    node* head= node1;
    insert(head, 10);
    insert(head, 12);
    print(head);
    delection(head);
    delection(head);
    
    return 0;
}