#include<iostream>
using namespace std;

void spiralMatrix(int arr[][3],int row,int col){
    int startingRowIndex=0;
    int endingRowIndex=row-1;
    int startingColIndex=0;
    int endingColIndex=col-1;
    int total=row*col-1;
    int count =0;

    while(count<total){
        //printing starting row
        for(int i=startingColIndex;count<total&&i<=endingColIndex;i++){
            cout<<arr[startingRowIndex][i]<<" -> ";
            count++;
        }
        startingRowIndex++;
        //printing ending col
        for(int i=startingRowIndex;count<total&&i<=endingRowIndex;i++){
            cout<<arr[i][endingColIndex]<<" -> ";
            count++;            
        }
        //printing ending row
        endingColIndex--;
        for(int i=endingColIndex;count<total&&i>=startingColIndex;i--){
            cout<<arr[endingRowIndex][i]<<" -> ";
            count++;
        }
        endingRowIndex--;
        //printing starting col
        for(int i=endingRowIndex;count<total&&i>=startingRowIndex;i++){
            cout<<arr[i][startingColIndex]<<" -> ";
            count++;
        }
        startingColIndex++;
    }
}

int main(){

    int arr[3][3];
    //take input un 2d array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    spiralMatrix(arr,3,3);

}