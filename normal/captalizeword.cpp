#include<iostream>
#include<string>
using namespace std;
int main(){
    // int arr[5]={1,2,3,4,5};
    // for (int  i = 0; i < 5; i++)
    // {    arr[1]=78;
    //     cout<<arr[i]<<endl;
    // }
  char arr[50];
  gets(arr);
  int n=0;
while (arr[n]!='\0')
{
    n++;
}// captalize first letter of each word in sentence
  /// char a=97 z=122 !!! A==65 && z==90
    for (int  i = 0; i <n; i++)
    {   if (arr[i]==' ')

    {
        
      if(arr[i+1]>='a' &&arr[i+1]<='z'){
        arr[i+1]=arr[i+1]-32;
        
       }
    }
    
        cout<<arr[i];
    }
    return 0;
}