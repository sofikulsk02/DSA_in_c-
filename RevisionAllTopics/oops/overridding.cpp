#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() const {
        cout << "Animal makes a sound" << endl;
    }

    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->sound(); // Calls Dog::sound() through runtime polymorphism

    delete animal;
    return 0;
}