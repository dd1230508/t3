#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

class File{
    public:
        File(const std::string& name, const std::string& content, const Date& date);

        bool lessThan(const Date& d) const;
        void print() const;
        void printContents() const;
        std::string getName() const;
        Date getDate() const;

    private:
        std::string name;
        std::string content;
        Date date;


};
#endif
