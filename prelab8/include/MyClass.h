#ifndef WYJATKI2_MYCLASS_H
#define WYJATKI2_MYCLASS_H


#include <string>
#include <iostream>

class MyClass {
    std::string _name;
    static int _number;

public:
    MyClass(std::string name) : _name(std::move(name)) {
        std::cout << "Created MyClass:" << _name << std::endl;
    }

    MyClass(const MyClass &obj) {
        _name = " F" + std::to_string(++_number);
        std::cout << "Copy created MyClass:" << obj._name << std::endl;
    }

    ~MyClass(){
        std::cout << "Destroyed MyClass:" << _name << std::endl;
    }
};


#endif //WYJATKI2_MYCLASS_H
