// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class StakeInt{
     private:
     struct Node{
         int data;
         Node* next ;
     };
     Node* top=nullptr;
    public:
    void push(int value){
        Node* newNode=new Node;
        newNode->data=value;
        if(isEmpty()){
            newNode->next=nullptr;
            top=newNode;
        }
        else{
            newNode->next=top;
            top=newNode;
        }
    }
    void pop(){
        if(isEmpty())
        return;
        Node* temp=top;
        top=top->next;
        delete temp;
    }
    bool isEmpty(){
        if (top==nullptr)
        return true;
        else
        return false;
    }
    int topValue(){
        if(isEmpty())
        return -1;
        else 
        return top->data;
    }
};
int main() {
    
    StakeInt s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    while(!s.isEmpty()){
        cout<<s.topValue()<<endl;
        s.pop();
        
    }
    system("pause");
    return 0;
}