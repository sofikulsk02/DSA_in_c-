#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int minElenent(vector<int>& arr){
    int cp=0;
    int cn=0;
    int cz=0;
    int prodP=1;
    int prodN=1;
    int maxN=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            prodN*=arr[i];
            cn++;
            if(arr[i]>maxN){
                maxN=arr[i];
            }
        }
        if(arr[i]==0){
            cz++;
        }
        if(arr[i]>0){
            prodP*=arr[i];
            cp++;
        }
    }
       
     if(cn==0){ 
            if(cz>0){
                return 0;
            }
            else{
                return *min_element(arr.begin(),arr.end());
            }
        }
        else if(cn>0){
            if(cn%2==0){
                  return ((prodN)/maxN)*prodP;
            }
            else{
                return prodN*prodP;
            }
        }
    return 0;
}
int main(){
       vector<int>arr={1,-2,2,10,-3,6};
       cout<<minElenent(arr);
}