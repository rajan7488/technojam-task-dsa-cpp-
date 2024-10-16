#include<iostream>
using namespace std;

int maxHad(int left,int right){
    while(left<right){
        right=right&(right-1);
    }
    return left&right;
}

int main(){
    int left;
    cout<<"Enter the left stone -> ";
    cin>>left;
    cout<<"Enter the right stone -> ";
    int right;
    cin>>right;
   cout<< maxHad(left,right);
}