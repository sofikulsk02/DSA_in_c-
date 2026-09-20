//different forms
#include<bits/stdc++.h>
using namespace std;

// Function overloading: compile-time polymorphism inside a class.
class Calculator {
public:
	int add(int a, int b) {
		return a + b;
	}

	double add(double a, double b) {
		return a + b;
	}

	int add(int a, int b, int c) {
		return a + b + c;
	}
};

int main(){
	Calculator calculator;

	cout << calculator.add(2, 3) << endl;          // int, int
	cout << calculator.add(2.5, 3.5) << endl;      // double, double
	cout << calculator.add(1, 2, 3) << endl;       // three ints
}