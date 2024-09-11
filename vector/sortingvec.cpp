#include<iostream>
#include<vector>

using namespace std;
 int main(){
    vector<int> v(5);
    for (int  i = 0; i <5; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
     for (int  j= 0;j < 5; j++)
    {
          cout<<v[j];
    }
  
    return 0;
 }