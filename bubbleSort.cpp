#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int temp;
    int arr[8]={12,3,10,8,7,15,22,17};
    cout<<"Unsorted array: \n";
    for(i=0;i<8;i++){

        cout<<arr[i]<<"\t";

    }

    cout<<endl;
    for(i=0; i<8; i++){

        for(j=i+1; j<8; j++)
        {
            if(arr[j]<arr[i])
                {
                temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            }
        }

    }

    cout<<"Sorted Elements....\n";
    for(i=0; i<8; i++){

    cout<<arr[i]<<"\t";
    }

    return 0;
}
