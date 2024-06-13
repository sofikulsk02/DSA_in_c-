#include<iostream>
#include<vector>
using namespace std;
vector<int> sort(vector<int>&v1 ,vector<int>& v2){
           int i=0; int j=0; int k=0;
           vector<int>res;
        int m=v1.size(); int n=v2.size();
        while(i<=n-1 && j<= m-1){
             if(v1[i]<v2[j]){
                res[k]=v1[i];
                i++;
             }
            else{
                res[k]=v2[j];
                j++;
            }
             k++;
        }
    //remaining elements
    if(i==n){
        while(j<=m-1){
            res[k]=v2[j];
            j++;
            k++;
        }
        if(j==m){
            while(i<=n-1){
                res[k]=v1[i];
                i++;
                k++;
            }
        }
    }

    return res;
}
void display(vector<int>&array){
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
   vector<int>v1;
   vector<int>v2;
   v1.push_back(1);
   v1.push_back(4);
   v1.push_back(6);
   v1.push_back(8);
   display(v1);
   v2.push_back(2);
   v2.push_back(3);
   v2.push_back(5);
   v2.push_back(7);
   v2.push_back(9);
   v2.push_back(12);
   display(v2);
   vector<int>Result=sort(v1,v2);
   display(Result);

   }