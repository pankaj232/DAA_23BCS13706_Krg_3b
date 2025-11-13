#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion(int arr[],int n, int index,int element){
    for(int i= n-1; i>index; i--){
        arr[i]=arr[i-1];
    }
    arr[index+1]=element;
}

int main()
{
    int arr[6]={1,2,3,4,5};
    insertion(arr, 6,2,99);
    print(arr,6);
    return 0;
}