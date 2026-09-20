#include<bits/stdc++.h>
using namespace std;

//create you onw vector
//vector<int> v;       zero size ka vector hai

class Vector{
    public:
        int size;
        int capacity;
        int * arr;
        Vector(){
            size=0;
            capacity=1;
            arr=new int[1];
        }
        void add(int ele){
                if(size==capacity){
                       capacity*=2;
                       int * arr2=new int[capacity];
                       for(int i=0;i<size;i++){
                               arr2[i]=arr[i];
                       }
                       arr=arr2;
                }
                arr[size]=ele;
                size++;
        }
        void printEle(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        int get(int idx){
            if(idx>=size){
                cout<<"Invalid index";
                return -1;
            }
            return arr[idx];
        }
        void remove(){
            if(size==0){
                cout<<"Already empty array";
                return;
            }
            size--;
        }
};
int main(){
           Vector v1;   //sabse se pehle default constructor chalega
           v1.add(10);
           v1.printEle();
           v1.add(20);
           v1.printEle();
           v1.add(100);
           v1.printEle();
           v1.remove();
           v1.printEle();
           v1.remove();
           v1.printEle();
}