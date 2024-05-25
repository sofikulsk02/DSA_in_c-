#include<iostream>
using namespace std;
int main(){
       int m;
       cin>>m;
       int arr[m][m];
       int brr[m][m];
       cout<<"Elements of 1st elements:";
       for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
       }
       cout<<"Elements of 2nd elements:";
       for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>brr[i][j];
        }
       }
       int res[m][m];
       for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            res[i][j]=0;
            for(int k=1; k<m; k++){
                res[i][j]+=arr[i][k]+brr[k][j];
            }
        }
       }
       for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }

       
}
