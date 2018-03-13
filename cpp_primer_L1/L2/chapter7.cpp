#include <stdio.h>
#include <iostream>
#include "chapter7.h"




Sales_data::avg_price()
{
    return this->revenue / this->units_sold;
}


namespace chapter7 {

using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);
/**
 * @brief chapter7
 */
void chapter7()
{
    Sales_data sales;
    read(cin,sales);
    print(cout,sales);
}

//P234
/**
 * @brief read
 * @param item
 * @return
 */
istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{

    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " <<item.avg_price();
    return os;
}

}
