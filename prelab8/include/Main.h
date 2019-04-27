#pragma once

#include "MyException.h"
#include "MyClass.h"

int ReturnValueID;

void Fold2(MyClass *);

void Fold3(MyClass *d);

void MyTerminate()
{
    std::cout << "--- UWAGA: blad mechanizmu wyjatkow ---" << std::endl;
    exit(0);
}

void Fold1(MyClass *d) {
    MyClass copy(*d);
    std::cout << "Entering fold level 1" << std::endl;
    Fold2(&copy);
}

void Fold2(MyClass *d) {
    MyClass copy(*d);
    std::cout << "Entering fold level 2" << std::endl;
    Fold3(&copy);
}

void Fold3(MyClass *d) {
    std::set_terminate(MyTerminate);
    MyClass copy(*d);
    std::cout << "Entering fold level 3" << std::endl;

    try {
        switch (ReturnValueID) {
            case 0:
                throw 9.242f;
            case 1:
                throw -87;
            case 2:
                throw 16u;
            case 3:
                throw 3.14157;
        }
    } catch (float &e) {
        std::cout << "Caught an exception of type: float" << std::endl;
    } catch (int &e) {
        std::cout << "Caught an exception of type: int" << std::endl;
    } catch (unsigned &e) {
        std::cout << "Caught an exception of type: unsigned" << std::endl;
    } catch (double &e) {
        std::cout << "Caught an exception of type: double" << std::endl;
    }
    throw MyException(" ");
}

