#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;
};
int main(){
     Student s;
     s.name="Sofikul sk";
     s.rno=12;
     s.gpa=8.8;

     cout<<s.gpa<<endl;
}