#include<iostream>
using namespace std;

int main(){
    int arr[]={2,2,3,4,5,4,5};
    int n=7;
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    cout<<"Unique element is -> "<<ans;
}