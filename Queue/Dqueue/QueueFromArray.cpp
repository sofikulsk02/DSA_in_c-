#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
      int f;
      int b;
      vector<int>arr;
      Queue(int size){
       f=0;
       b=0;
       vector<int>v(size);
       arr=v;
   }
   void push(int val){
         if(b==arr.size()) {
            cout<<"Queue is full";
            return;
         }
        arr[b]=val;
        b++;
   }
   void pop(){
       if(b==0) {
            cout<<"Queue is full";
            return;
         }
      f++;
   }
   int front(){
    if(b==0) {
            cout<<"Queue is full";
            return -1;
         }
    return arr[f];
   }
  int back(){
     if(b==0) {
            cout<<"Queue is full";
            return -1;
         }
         return arr[b-1];
  }
  int size(){
    return b-f;
  }
  bool empty(){
    if(f-b==0){
        return true;
    }
  }
  void display(){
    for(int i=f; i<b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
int main(){
  Queue q(5);
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.display();
  q.push(50);
  q.push(60);
  q.display();
  q.pop();
  q.display();


}