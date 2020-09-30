#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Linked_list{
    private:
    Node *head, *tail;
    public:
    Linked_list(){
    head=NULL;
    tail=NULL; 
    }
    void AddNode(int value){
        Node* temp = new Node;
        temp->data=value;
        temp->next=NULL;

        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=tail->next;
        }
    }
    void Display_list(int list_number){
        Node* curr;
        curr=head;
        while(curr!=NULL){
            cout<<curr->data<<"\t";
            curr=curr->next;
        }
    }

    void Add_multiple_nodes(int n,int list_number){
    
        for(int i=0;i<n;i++)
        list[list_number].AddNode(int data);
    }
};
int main(){
    int i,option;
    cout<<"Enter number of list do you want to create"<<"\n";
    cin>>i;
    for(int k=0; k<i;k++)
	Linked_list list[i];

cout<<"Choose the option given below"<<"\n";
cout<<"Enter 1 for enter specific number of data in linked_list"<<"/n";
    <<"Enter 2 for display the whole linked_list"<<"\n";
    <<"Enter 3 for delete any elements in linked_list"<<"\n";
    <<"Enter 4 for enter data at any specific index in linked_list"<<"\n";
    <<"Enter 5 for delete whole linked_list"<<"\n";
cout<<"Enter the option given above"<<"\n";
cin>>option;

    switch(option){
    case 1:
    int list_number;
    cout<<"Enter the list number"<<"\n";
    cin>>list_number;
    int num;
    cout<<"Enter how many data do you want to enter"<<"\n";
    cin>>num;
    Add_multiple_nodes(num,list_number);

    case 2:
    int list_number;
    cout<<"Enter list number"<<"\n";
    cin>>list_number;
    Disply_list(int list_number);
    
}
return 0;
}
