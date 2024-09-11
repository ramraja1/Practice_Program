#include<iostream>
#include<vector>
using namespace std;
int main(){

    //lopp 
    printf("enter the no. \n");
vector<int> v;
for(int i=0;i<5;i++){
    int element;
    cin>>element;
    v.push_back(element);
}

    for(int i=0;i<5;i++){
   
           //for printing vector
    cout<<v[i];
    }
return 0;
}