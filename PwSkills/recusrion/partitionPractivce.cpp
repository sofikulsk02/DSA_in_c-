#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int ways(string s,int i,unordered_set<string>&hs,vector<int>&dp){
      int n=s.length();
      if(i==n) return 1;
      if(dp[i]!=-1) return dp[i];
      else{
        int count=0;
        string temp="";
        for(int j=i;j<n;j++){
            temp+=s[j];
            if(hs.find(temp)!=hs.end()){
                count+=ways(s,j+1,hs,dp);
            }
        }
        dp[i]=count;
      }
      return dp[i];
}
int solve(vector<string>arr,string s){
    unordered_set<string>hs;
    vector<int>dp(s.length(),-1);
    for(int i=0;i<arr.size();i++){
        hs.insert(arr[i]);
    }
    int ans=ways(s,0,hs,dp);
    return ans;
}
int main(){
    vector<string> dict1 = {"apple", "pen", "applepen", "pine", "pineapple"};
    string s1 = "pineapplepenapple";
    int result1 = solve(dict1, s1);
    cout << "Test 1: " << result1 << " (Expected: 3)" << endl;
}