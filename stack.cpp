#include<iostream>
#define MAX 10
int stack[MAX]; int top=-1;
using namespace std;
void push(){
    int n;
    if(top==MAX-1){
        cout<<endl<<"Stack is overflow";
    }
    else
    {
        cout<<"enmter your no.:";
        cin>>n;
        top++;
        stack[top]=n;
    }
    

}
void pop(){

}
int main(){
    int choice;
 do{       
        cout<<endl<<"*******STACK*******"<<endl<<"1: push"<<endl<<"3: Exit";
     cin>>choice;
     switch (choice)
     {
     case 1:push();
        break;
     case 2:pop();
     break;
     case 3:cout<<endl<<"************EXITING*******************";
     default:
        break;
     }
 }while(choice!=3);
return 0;
        
    
}