// #include<iostream>
// using namespace std;
//  int main(){
//     char ch;
//     cin>>ch;
//     if(ch=='a' || ch=='o' || ch=='i' || ch=='e' || ch=='u'){
//         cout<<"The character you have entered is a vowel";
  
//     }
//     else{
//         cout<<"This is a consonant";
//     }
//  }
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character :";
    cin>>ch;
    bool flag=false;
    char arr[10]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0; i<10; i++){
        if(ch==arr[i]){
         flag=true;
        }
    }
    if(flag==true){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
}