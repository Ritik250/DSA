#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* Convert2LL(vector<int> & arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

bool SearchLL(Node* head, int key){
    Node* temp=head;
    while(temp){
        if(temp->data==key) return true;
        temp=temp->next;
    }
    return false;
}

int LengthLL(Node* head){
    int count=0;
    Node*temp = head;
   while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    cout<<"Length of the LL is: ";
    return count;
}

void print(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* InsertNode(Node* head, int position, int value){
    if(position==1){
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
        return head;
    }
    int count=1;
    Node* temp=head;
    while(temp && temp->next){
        count++;
        if(count==position){
            Node* newNode=new Node(value);
            newNode->next=temp->next;
            temp->next=newNode;
        }
        temp=temp->next;
    }
    if(position==count+1){
        Node* newNode=new Node(value);
        temp->next=newNode;
    }
    return head;

}

Node* DeleteNode(Node* head, int target){
    if(head==nullptr){
        return nullptr;
    }
    if(head->data==target){
        Node* toDelete=head;
        head=head->next;  
        delete toDelete;
        return head; 
    }
    Node* temp = head;
    while(temp && temp->next){
        if(temp->next->data==target){
            Node* toDelete=temp->next;
            temp->next=temp->next->next;
            delete toDelete;
            break;
        }
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int> arr={2,5,8,7};
    Node* head=Convert2LL(arr);
    Node* temp=head;
    // cout<< LengthLL(head);
    // cout<< (SearchLL(head,8)?"present":"absent");
    // head=DeleteNode(head,2);
    head=InsertNode(head,5,4); // to insert element at tail, you need to write length of LL+1
    print(head);
}