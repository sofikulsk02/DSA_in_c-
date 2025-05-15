
// // #include<iostream>
// // #include<string>
// // #include<algorithm>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     string s="leetcode";
// //     vector<int> arr(26,0);
// //     for(int i=0; i<s.length();i++){
// //         char ch=s[i];
// //         int ascii=(int)ch;
// //         arr[ascii-97]++;
// //     }
// //     int mx=0;
// //     for(int i=0; i<26; i++){
// //         if(arr[i]>mx) mx=arr[i];
// //     }
// //     for(int i=0; i<26; i++){
// //         if(arr[i]==mx){
// //             int ascii=i+97;
// //             char ch=(char)ascii;
// //             cout<<ch<<" "<<mx<<endl;
// //         }
// //     }
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     string s;
// //     getline(cin,s);
// //     vector<int>v(26,0);
// //     for(int i=0; i<s.length(); i++){
// //         char ch=s[i];
// //         int ascii=(int)ch;
// //         v[ascii-97]++;
// //     }
// //     int mx=0;
// //     for(int i=0; i<26;i++){
// //         if(v[i]>mx) mx=v[i];
// //     }
// //     for(int i=0; i<26;i++){
// //         if(v[i]==mx){
// //             int ascii=i+97;
// //             char ch=(char)ascii;
// //             cout<<ch<<":"<<mx;
// //         }
// //     }
// // }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//       string str;
//       getline(cin,str);
//       vector<int>arr(26,0);
//       for(int i=0; i<str.length();i++){
//         char ch=str[i];
//         int ascii=(int)ch;
//         arr[ascii-97]++;
//       }
//       int mx=0;
//       for(int i=0; i<26; i++){
//         if(arr[i]>mx) mx=arr[i];
//       }
//       for(int i=0; i<26; i++){
//         if(arr[i]==mx){
//             int ascii=i+97;
//             char ch=(char)ascii;
//             cout<<ch<<"->"<<mx;
//         }
//       }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string str;
//   getline(cin,str);
//   vector<int>arr(26,0);
//   for(int i=0; i<26; i++){
//     int ascii=(int)str[i]-97;
//     arr[ascii]++;
//   }
//   int mx=0;
//   for(int i=0; i<26; i++){
//     if(arr[i]>mx) mx=arr[i];
//   }
//   for(int i=0; i<26; i++){
//     if(arr[i]==mx){
//       char ch=(char)(97+i);
//       cout<<ch<<"->"<<mx;
//     }
// }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  vector<int>ans(26,0);
  for(int i=0; i<s.size();i++){
    int ascii=(int)s[i]-97;
    ans[ascii]++;
  }
  int mx=INT_MIN;
  for(int i=0; i<26;i++){
    if(ans[i]>mx) mx=ans[i];
  }
  for(int i=0; i<26;i++){
    if(mx==ans[i]){
      char ch=(char)(i+97);
      cout<<ch<<"->"<<mx;
    }
  }
}