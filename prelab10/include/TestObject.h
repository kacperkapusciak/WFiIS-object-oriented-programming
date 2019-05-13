#pragma once

#include <iostream>
class TestObject {
public:
    TestObject() = default;

    explicit TestObject(int id) : _id(id) {}

    void Print() const {
        std::cout << "Object with ID=" << _id << std::endl;
    }

    void Set(int id) {
        _id = id;
    }
private:
    int _id;
};


