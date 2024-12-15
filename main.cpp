#include <iostream>
#include "struct.cpp"
using namespace std;


//WRITTEN IN C++ USING A DOUBLY LINKED LIST


//TEST SOLUTIONS
void simulateAPI(){
    Transactions transactions;
transactions.add("DANNON", 300, "2022-10-31T10:00:00Z");
transactions.add("UNILEVER", 200, "2022-10-31T11:00:00Z");
transactions.add("DANNON", -200, "2022-10-31T15:00:00Z");
transactions.add("MILLER COORS", 10000, "2022-11-01T14:00:00Z");
transactions.add("DANNON", 1000, "2022-11-02T14:00:00Z");

transactions.spend(5000);

cout<<"DANNON:"<<transactions.getbalance("DANNON")<<endl;
cout<<"UNILEVER:"<<transactions.getbalance("UNILEVER")<<endl;
cout<<"MILLER COORS:"<<transactions.getbalance("MILLER COORS")<<endl;

}

int main()
{
 simulateAPI();
};
