#pragma once

class Vector {
public:
    template <typename T>
    static void Initialise(const int size) {
        _size = size;
        _mem = new T[_size];
    }

    template <typename T>
    static void Initialise(const int size, T obj) {
        _size = size;
        _mem = new T[_size];
        for (int i = 0; i < _size; i++)
            *(static_cast<T *>(_mem) + i) = obj;
    }

    template <typename T>
    static T &At(const int index) {
        return *(static_cast<T *>(_mem) + index);
    }

    template <typename T>
    static void Reset() {
        delete [] static_cast<T *>(_mem);
        _size = 0;
        _mem = nullptr;
    }

    static int Size() {
        return _size;
    }

private:
    static void *_mem;
    static int _size;
};


