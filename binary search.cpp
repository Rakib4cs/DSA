#include<iostream>
using namespace std;
int main(){
int arr[]={5,10,12,13,18,19,21,24,27,30,34,40};
int n=12, key= 21;
bool result= false;
int index= -1;
int low= 0, high = n-1;

while (low <= high)
{
    int mid = (low+high)/2;
    if(arr[mid]==key){

        result= true;

        index= mid;

        break;
    }
 else if(arr[mid]<key)

    low = mid+1;
 else
    high = mid-1;
}
cout<<"the result is :"<<boolalpha<<result<<endl;
  if (result)
    cout<<"The index is:"<<index+1<<endl;
  else
    cout<<"The element is not found"<<endl;

  return 0;

}
