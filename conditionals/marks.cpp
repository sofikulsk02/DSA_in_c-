#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>=91 && marks<=100){
cout<<"Excellent";
}
else if(marks>=81 && marks<=90){
    cout<<"Very good";
}
else if(marks>=71 && marks<=80){
    cout<<"good";
}
else if(marks>=61 && marks<=70){
    cout<<"can do better";
}
else if(marks>=51 && marks<=60){
    cout<<"Averege";
}
else if(marks>=41 && marks<=50){
    cout<<"bellow average";
}
else if(marks<40){
    cout<<"Nikal fail hai tu";
}
}