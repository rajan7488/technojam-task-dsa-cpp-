#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    //constructor...
    Node(int d){
        this->data=d;
        this->Next=NULL;
    }
    //destructor...
    ~Node(){
        int value=this->data;
        if(this->Next!=NULL){
            delete Next;
            this->Next=NULL;
        }
        cout<<"memory is free for node with data -> "<<value<<endl;
    }

};



//in the singly linked list insertion at the end...
void InsertedAtTail(Node* &tail,Node* &head,int d){
    //new node created
    Node* temp=new Node(d);
    if(tail==NULL){
        head=temp;
        tail=temp;
    }
    else{
    tail->Next=temp;
    tail=temp;
    }

}


void print(Node* &head){
    if(head==NULL){
        cout<<"List is Empty ";
        return;
    }
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->Next;
    }
    cout<<endl;
}
Node* floydDetection(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->Next;
        if(fast!=NULL){
            fast=fast->Next;
        }
        slow=slow->Next;
        if(fast==slow){
            // cout<<"present at -> "<<slow<<endl;
            return slow;
        }
    }
    return NULL;
}

//Beigning loop detection...
int getIntersection(Node* head){
    Node* intersection=floydDetection(head);
    Node* slow=head;
    int pos=0;
    while(slow!=intersection){
        intersection=intersection->Next;
        slow=slow->Next;
        pos++;
    }
    return pos;
}

void createCycle(Node* head, Node* tail, int pos) {
    if (pos==-1) 
    {
        return;
    }  // No cycle to be created

    Node* temp=head;
    int cnt=0;

    while (cnt < pos) {
        temp = temp->Next;
        cnt++;
    }

    tail->Next = temp;  // Link the tail to the node at 'pos' to form a cycle
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n, value;

    // User inputs the number of nodes
    cout <<"Enter the number of nodes -> ";
    cin >> n;

    //  user input for each node value
    for (int i=0;i<n;i++) {
        cout << "Enter value for node " << i+1 << " ->  ";
        cin >> value;
        InsertedAtTail(tail, head, value);  // Insert each node at the tail
    }
    int pos;
    cout<<"Enter Position -> ";
    cin >> pos;

    // Create cycle if required
    createCycle(head, tail, pos);

    // Detect if a cycle exists and print the position
    int  loop=getIntersection(head);

    if (loop== -1) {
        cout << "No cycle detected." << endl;
    } else {
        cout << "Cycle starts at position -> " << loop << endl;
    }
    

}
