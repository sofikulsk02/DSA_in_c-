#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row no of the first matrix:";
    cin>>m;
    int n;
    cout<<"Enter the col no of the first matrix:";
    cin>>n;
    int s;
    cout<<"Enter the row no of the second matrix:";
    cin>>s;
    int t;
    cout<<"Enter the col no of the second matrix:";
    cin>>t;
    int arr[m][n];
    int brr[s][t];
    if(n==s){
        cout<<"Enter the elements of the first array:";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }

        cout<<"Enter the elements of the second elements:";
        for(int i=0; i<s; i++){
            for(int j=0; j<t; j++){
                cin>>brr[i][j];
            }
        }
        int res[n][t];
        for(int i=0; i<n; i++){
            for(int j=0; j<t;j++){
                res[i][j]=0;
                for(int k=0; k<s; k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
                 
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<t; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}