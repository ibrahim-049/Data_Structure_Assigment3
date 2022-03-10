#include <iostream>
#include <string>
using namespace std;
class Customer
{
public:
    string name;
    string membership;

    /*Customer(string nam, string mem)
    {
        name = nam;
        membership = mem;
    }*/

public:

    void print_info()
    {
        std::cout << "Customer Name: " << name << endl << "Membership Type: " << membership << endl;
    }

};

class Visit {
public:

    float prod;
    float serv;
};

class Discount: public Customer, public Visit
{
 public:

     Discount(string nam, string mem)
     {
         name = nam;
         membership = mem;
     }

    float calc(float serv, float prod)
    {
        float total;
        if (membership == "Platinum")
        {
            total = serv - (0.25 * serv) + prod - (0.10 * prod);
            return total;
        }

        else if (membership == "Gold")
        {
            total = serv - (0.20 * serv) + prod - (0.10 * prod);
            return total;
        }

        else if (membership == "Silver")
        {
            total = serv - (0.15 * serv) + prod - (0.10 * prod);
            return total;
        }

        else
        {
            total = (serv)+(prod);
            return total;
        }
    }
};




int main()
{

    Discount ahmed("Ahmed", "Gold");
    ahmed.print_info();

    std::cout << "Total Bill: " << ahmed.calc(100, 100) << endl;
    std::cout << "\n" << endl;



    Discount ibrahim("Ibrahim", "Platinum");
    ibrahim.print_info();

    std::cout << "Total Bill: " << ibrahim.calc(100, 100) << endl;
    std::cout << "\n" << endl;



    Discount gamal("Gamal", "Silver");
    gamal.print_info();

    std::cout << "Total Bill: " << gamal.calc(100, 100)  << endl;
    std::cout << " \n" << endl;



    Discount mahmoud("Mahmoud", "Non");
    mahmoud.print_info();

    std::cout << "Total Bill: " << mahmoud.calc(100, 100) << endl;
}
