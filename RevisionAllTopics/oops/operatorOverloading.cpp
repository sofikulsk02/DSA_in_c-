#include <iostream>
using namespace std;

// Operator overloading is compile-time polymorphism using a class.
class Number {
private:
	int value;

public:
	Number(int value) : value(value) {}

	// Overload the + operator for two Number objects.
	Number operator+(const Number& other) const {
		return Number(value + other.value);
	}

	// Overload << so a Number object can be printed with cout.
	friend ostream& operator<<(ostream& output, const Number& number) {
		output << number.value;
		return output;
	}
};

int main() {
	Number first(10);
	Number second(20);

	Number result = first + second; // Calls overloaded operator+
	cout << result << endl;         // Calls overloaded operator<<
}