#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    //new node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;

}
void insertAtMiddle(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at last
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;

    }
    //create node
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void deleteNode(int position, Node*head){
    //deleting at start
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}
void print(Node* &head){
    Node* temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
    //detect loop

    bool detectLoop(Node* head){
        if(head==NULL){
            return 0;
        }
        map<Node*,bool>visited;
        Node*temp=head->next;
        while(temp!=NULL){
            if(visited[temp]==true){
                return true;
            }
            visited[temp]=true;
            temp=temp->next;
        }
        return false;
    }


int main() 
{
    //create a new node
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    
    insertAtTail(tail,15);
    print(head);

    insertAtMiddle(tail,head,4,22);
    print(head);

    tail->next=head->next; 
    if(detectLoop(head)){
        cout<<"Cylcle is present"<<endl;
    }
    else{
       cout<<"cycle is not present"<<endl;
    }
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

   // deleteNode(4,head);
    //print(head);
    return 0;
}