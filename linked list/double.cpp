#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node* prev;

    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev= NULL;
    }
};
void print(node* head){
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insert_head(node* &head, int data){
    node* temp= new node(data);
    temp-> next=head;
    head->prev=temp;
    head=temp;
}

void insert_tail(node* &tail,int data){
    node* temp= new node(data);
    tail->next= temp;
    temp->prev=tail;
    tail=temp;
}

void insertion_middle(node* &head, node* &tail, int position , int data){
    if(position==1){
        insert_head(head, data);
        return ;
    }
    int count=1;


    node* temp= head;
    while(count< position-1){
        temp=temp->next;
        count++;
    }

    node* nodetoinsert= new node(data);

    nodetoinsert ->next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;
}

void deletion(node* &head, int position){
    if(position ==1 ){
        node* temp= head;
        temp->prev->next=NULL;
        head= head->next;
        temp->next=NULL;
        delete temp;
    }
    else {
        node* curr= head;
        node* prev=NULL;
        int count=1;

        while(count< position){
            prev= curr;
            curr= curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}
int main()
{
    node* node1= new node(10);
    

    node* head= node1;
    node* tail= node1;
    print(head);

    insert_head(head, 12);
    insert_tail(tail, 8);
    print(head);

    insertion_middle(head, tail, 2, 88);
    print(head);

    deletion(head, 2);
    print(head);
}