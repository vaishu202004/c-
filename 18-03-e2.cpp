#include <iostream>

class Animal {
public:
    virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.makeSound();
    cat.makeSound();

    return 0;
}

