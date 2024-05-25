// #include<iostream>
// using namespace std;
// float AreaOfCircle(float r){
//     float result=3.14*r*r;
//     cout<<result;
// }
// int main(){
// float radius;
// cout<<"Enter the radius of the circle: ";
// cin>>radius;
// AreaOfCircle(radius);
// }

#include<iostream>
using namespace std;
double area(int radius) {
return 3.14 * radius * radius;
}
int main() {
int radius;
cin >> radius;
cout << "Area of the circle is: " << area(radius);
return 0;
}