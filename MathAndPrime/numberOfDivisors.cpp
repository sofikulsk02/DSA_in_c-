// #include<bits/stdc++.h>
// using namespace std;
// vector<int> printDivisors(int n,vector<int>&ans){
//     for(int i=1;i<sqrt(n);i++){
//         if(n%i==0)
//         ans.push_back(i);
//     }
//     for(int i=sqrt(n);i>=1;i--){
//         if(n%i==0)
//         ans.push_back(n/i);
//     }
//     return ans;
// }
// int main(){
//           vector<int>ans;
//           printDivisors(10,ans);
//           for(int i=0; i<ans.size();i++){
//             cout<<ans[i]<<" ";
//           }
// }


#include<bits/stdc++.h>
using namespace std;
vector<int> printDivisors(int num,vector<int>&ans){
         for(int i=1;i<sqrt(num);i++){
            if(num%i==0) ans.push_back(i);
         }
         for(int i=sqrt(num);i>=1;i--){
            if(num%i==0) ans.push_back(num/i);
         }
         return ans;
}
int main(){
      vector<int>ans;
      printDivisors(60,ans);
      for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
}