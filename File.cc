#include "File.h"

#include <iostream>

using namespace std;

File::File() : name(""), content(""), date(){}

File::File(const std::string& name, const std::string& content, const Date& date)
    : name(name), content(content), date(date){}

bool File::lessThan(const Date& d) const {
    return date.lessThan(d);
}

std::string File::getName()const{
    return name;
}

Date File::getDate() const{
    return date;
}

void File::print() const{
    cout<< "This file: " << name << " was editied last on ";
    date.print();
}

void File::printContents() const{
    cout<< "File contents: " << content << endl;
}



