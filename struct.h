#include <iostream>
using namespace std;

struct Node{
string user;
int points;   //Data structure 
string time;
Node* prev;
Node* next;

Node(string u, int p, string t){
user=u;
points=p;
time=t;   //initialize
prev=nullptr;
next=nullptr;
}

};
