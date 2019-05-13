#pragma once

class Punkt {
public:
    Punkt(int x, int y) : _x(x), _y(y) {}

    template <int T>
    int wsp() const {
        return T ? _y :_x;
    }

    bool operator<(const Punkt& other) const {
        if (_x == other._x)
            return _y < other._y;
        return _x < other._x;
    }

    template <typename T>
    static T min(const T& first, const T& second) {
        return first < second ? first : second;
    }

    template <typename T>
    static T max(const T& first, const T& second) {
        return first < second ? second : first;
    }

private:
    int _x, _y;
};

