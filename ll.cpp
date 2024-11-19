#include<iostream>
using namespace std;
class Node{
    public:
    int data;
   Node*next;

Node (int value){
    data=value;
    next=nullptr;
}



};
int main()
{
    Node*head;
    head=new Node(8);
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    return 0;
}
