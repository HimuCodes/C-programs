#include <iostream>
using namespace std;
int main()
{
    int tax = 95000;
    float state_tax = 0.04;
    float county_tax = 0.02;
    double total_tax = tax / (state_tax + county_tax);
    double net_revenue = tax - total_tax;
    std :: cout << total_tax << endl
                << net_revenue;
}
