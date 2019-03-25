#pragma once
#include <string>

class Gps
{
public:
    //konstruktor domyslny
    Gps() = default;

    //settery
    void set_company_name(std::string company_name) {
        _company_name = company_name;
    }

    void set_gps_number(std::string gps_number) {
        _gps_number = gps_number;
    }

    //gettery
    std::string get_gps_number() {
        return _gps_number;
    }

    std::string get_company_name() {
        return _company_name;
    }

private:
    std::string _company_name;
    std::string _gps_number;
};
