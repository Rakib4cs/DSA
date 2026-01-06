#include<iostream>
using namespace std;
int stackArr[50];
int top=-1;
//Push
void push(int x){
stackArr[++top]=x;

cout<<x<<"pushed\n";
}
//POP
void pop(){
if(top== -1){

    cout<<"stack is empty\n";
    return;
}
cout<<stackArr[top--]<<"popped\n";

}
//Print stack
void print(){

if(top==-1){
    cout<<"Stack is empty\n";
    return;
}
cout<<"Stack:";
for (int i=0; i<=top;i++)
    cout<<stackArr[i]<<" ";
cout<<"\n";
}
//size()
int size(){
    return top+1;
}
int main(){
push(10);
push(20);
push(30);
push(35);
push(40);
push(45);

print();

pop();
print();

cout<<"Size:"<<size()<<endl;

return 0;
}
