#include<bits/stdc++.h>
using namespace std;
class Crickter{
        public:
            string name;
            string role;
            int runs;
};
class Engineer{
    public:
        string company;
        float experience;
        float salary;
};

class Phodu:public Engineer,Crickter{ //multiple inheritence
                 
};

int main(){

}