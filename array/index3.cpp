#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void delection(int arr[],int n, int position){
    for(int i=position; i<n-1; i++){
        arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[5]={11,22,33,44,55};
    delection(arr, 5, 2);
    print(arr,4);
    return 0;

}