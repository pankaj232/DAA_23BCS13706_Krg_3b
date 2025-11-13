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

void insert_head(node* &head,int data){
    node* temp= new node(data);
    temp->next= head;
    head=temp;
}
void insert_tail(node* &tail, int data){
    node* temp= new node(data);
    tail->next=temp;
    tail=temp;
}
void insert_middle(node* &head, node* &tail,int data, int position){
    if(position==1){
        node* temp= new node(data);
        insert_head(head,data);
        return ;
    }
    int count=1;
    node* temp=head;
    while(count < position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insert_tail(tail, data);
        return ;
    }
    node* insert_middle = new  node(data);

    insert_middle->next = temp->next;
    temp->next= insert_middle;

}

void delection(node* &head,int position )
{
    if(position==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else {
        node* curr= head;
        node* prev= head;
        int count=1;
        while(count< position){
            prev= curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* node1= new node(10);
    node* head=node1;
    node* tail= node1;

    insert_head(head, 12);
    print(head);

    insert_tail(tail, 8);
    print(head);

    insert_middle(head, tail, 99, 2);
    print(head);

    delection(head, 2);
    print(head);
    return 0;
}