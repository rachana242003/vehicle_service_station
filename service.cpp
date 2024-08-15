#include "../include/service.h"

service::service() 
{
    
}

service::service( const string desc) {
    this->desc = desc;
}

string service::getDesc() {
    return desc;
}

void service::set_desc(const string desc) {
    this->desc = desc;
}

void service::display() {
    cout << "Description = " << desc << endl;
}

void service::input() {
    getchar();
    cout << "Enter what work is done - ";
    getline(cin, desc);
}

double service::price() {
    return 0; 
}