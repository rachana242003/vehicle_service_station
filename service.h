#ifndef SERVICE_H
#define SERVICE_H

#include<iostream>
using namespace std;

class service{
    protected:
    string desc;

    public:
    service();
    service(const string desc);
    string getDesc();
    void set_desc(const string desc);
    void display();
    virtual void input();
    virtual double price();
};
#endif