#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Full Vector Concept in one Programn  !!!!!  vector is a dynamic array in which we can resize our array

    //Declearation of vector  
    vector<int> p;
    //size of vector
    cout<<"size : "<<p.size()<<endl;
    // capacity of vector == 2 ke power ke order me rahege aur size se ya to bada rahega ya equal
     cout<<"Capacity : "<<p.capacity()<<endl;
    //insertion
    p.push_back(1);
     cout<<"size : "<<p.size()<<endl;
       p.push_back(2);
        cout<<"Capacity : "<<p.capacity()<<endl; 
            cout<<"size : "<<p.size()<<endl;

    //resize bhi kr sakte

    p.resize(50);
        cout<<"size : "<<p.size()<<endl;

        cout<<"Capacity : "<<p.capacity()<<endl; 
      
      //pop deleate size 
          p.pop_back();
           p.pop_back();
            p.pop_back();
        cout<<"size : "<<p.size()<<endl;

      

        cout<<"Capacity : "<<p.capacity()<<endl; 



    return 0;
}