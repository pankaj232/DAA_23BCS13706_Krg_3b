#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int search1(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

void insertion(int arr[],int n, int val ,int element){
    int index= search1(arr, n, val);
    for(int i=n-1;i > index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;

}
int main()
{
    int arr[6]={1,22,3,4,5};
    insertion(arr, 6, 22, 99);
    print(arr, 6);
    return 0;
}