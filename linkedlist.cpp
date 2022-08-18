#include <iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
    Node(int data){
        this->data=data;
    this->next=next;
    }
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
    
};
void insertathead(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}
void insertattail(Node* tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatmiddle(Node* &head, Node* &tail, int position,int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    //creatind a node for d
    Node* nodetoinsert =new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void deleteNode(int position,Node* &head){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main() {
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertathead(head,33);
    print(head);
    insertattail(tail,11);
    print(head);
insertatmiddle(head,tail,2,11);
print(head);
deleteNode(4,head);
print(head);
    return 0;
}
