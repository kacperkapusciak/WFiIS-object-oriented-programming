#ifndef WYJATKI2_MYEXCEPTION_H
#define WYJATKI2_MYEXCEPTION_H

#include <string>
#include <exception>
#include <iostream>

class MyException : std::exception {
    std::string _message;
public:
    MyException(std::string message) : _message(std::move(message)) {}

    const char *what() {
        return  _message.c_str();
    }
};


#endif //WYJATKI2_MYEXCEPTION_H
