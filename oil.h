#include "../include/service.h"
#ifndef OIL_H
#define OIL_H

 class oil:public service
 {
    private:
    double cost;

    public:
    oil();
    oil(double cost,const string &desc);
    double get_cost();
    double price();
    void input();
    void set_cost(const double cost);
   
 };
 #endif
