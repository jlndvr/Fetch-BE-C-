#include <iostream>
#include "struct.h"
using namespace std;

class Transactions{
private:
    Node* head;
    Node* tail;
    
void deleteList(){
Node* current=head;
while(current != nullptr){
    Node* next=current->next;
    delete current;
    current=next;
}
 head=tail=nullptr;
}
    
public:        
    Transactions(){
        head=nullptr;  //initialize 
        tail=nullptr;
    }
//destructor
~Transactions(){
    deleteList();
}
//add new transaction
void add(string user,int points,string time){
    Node* n = new Node{user,points,time};
if(head==nullptr){
    head=tail=n;
} 
 else{
  tail->next=n;
  n->prev=tail;
  tail=n;
}
}

//spend points
 void spend(int points) {
    Node* current=head;
while(current != nullptr && points>0){
    if(current->points<=points){
    points-=current->points;
    current->points=0;
} 
else{
    current->points-=points;
    points=0;
}
    current=current->next;
}
 } 
 
//get point balance
int getbalance(string user) {
    Node* c=head;
    int tp=0;
    while(c != nullptr){
if(c->user==user){
    tp+=c->points;
}
c=c->next;
}
return tp;
}
};
