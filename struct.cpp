#include <iostream>
#include "struct.h"
using namespace std;

class Transactions{
    private:
    Node* head;
    Node* tail;
    
    public:        //initialize 
    Transactions(){
        head=nullptr;
        tail=nullptr;
    };
    
//add new transaction
void add(string user,int points,string time){
    Node* n = new Node{user,points,time};
if(head==NULL){
    head=tail=n;
} 
 else{
  tail->next=n;
  n->prev=tail;
  tail=n;
}
}

//spend points
 void spend(Transactions transactions,int points) {
    Node* current=transactions.head;
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
