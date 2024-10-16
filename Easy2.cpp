#include<iostream>
using namespace std;
int moves(int arr[],int n){
    for(int i=1;i<n;i++){
        int move=0;
        if(arr[i]<arr[i-1]){
            move+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<moves(arr,n);
}
