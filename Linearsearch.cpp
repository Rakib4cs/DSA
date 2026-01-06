#include<iostream>
using namespace std;
int main(){

int arr[]={1,3,5,6,8,11,7,10};
int i, n=8, key=11,counter=0,index=-1;
bool result= false;
for(int i=0;i<n;i++)
    {
    if(arr[i]==key){
        result=true;
        break;
    }
}
for(i=0;i<n;i++){
    if(arr[i]==key){

        counter++;
    }
}
for(int i=0; i<n; i++){

    if(arr[i]==key){
        index=i+1;
        break;
    }

}
cout<<"The result is ="<<boolalpha<<result<<endl;
cout<<"repeated :"<<counter<<endl;
cout<<"The index is:"<<index<<endl;
return 0;
}
