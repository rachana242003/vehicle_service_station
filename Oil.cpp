#include "../include/oil.h"
oil::oil()
{

}
oil::oil(double cost,const string & desc)
{
    this->cost = cost;
}
double oil::get_cost()
{
    return cost;
}
void oil::set_cost(double cost)
{
    this->cost = cost;
}
double oil::price()
{
    return cost;
}
void oil::input()
{
    cout << "Enter the oil/addtitive description"<<endl;
    cin>> desc;
    cout << "Enter price -";
    cin >> cost;
}
