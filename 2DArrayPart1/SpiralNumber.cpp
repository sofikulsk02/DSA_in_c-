#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row number:";
    cin>>m;
    int n;
    cout<<"Enter the col number:";
    cin>>n;
    int arr[m][n];
    cout<<"Enetr the matrix elements:";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int minr=0, minc=0;
    int maxr=m-1, maxc=n-1;
    int count=0;
    int noe=n*m;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int i=minc; i<=maxc && count<noe; i++){
            cout<<arr[minr][i]<<" ";
            count++;
        }
        minr++;
        //down
        for(int j=minr; j<=maxr && count<noe; j++){
            cout<<arr[j][maxc]<<" ";
            count++;
        }
        maxc--;
        //left
        for(int i=maxc;i>=minc && count<noe;i--){
            cout<<arr[maxr][i]<<" ";
            count++;
        }
        maxr--;
        //up
        for(int j=maxr;j>=minr && count<noe; j--){
            cout<<arr[j][minc]<<" ";
            count++;
        }
        minc++;
    }

}
