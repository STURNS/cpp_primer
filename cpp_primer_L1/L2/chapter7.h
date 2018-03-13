#ifndef CHAPTER7
#define CHAPTER7

#include<string>
class Sales_data{

    Sales_data(std::string user_name);

public:
    std::string isbn() const { return bookNo; }

    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

//private:

};

/**
 * @brief chapter7
 */
void chapter7(void);

#endif // CHAPTER7

