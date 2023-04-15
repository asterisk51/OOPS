#include <iostream>
#include <string>

using namespace std;

class Car
{
protected:
    string name;
    int price;

public:
    void getName()
    {
        getline(cin, name);
    }
    void getPrice()
    {
        cin >> price;
    }
    virtual float discount() = 0;
    virtual int totalseats() = 0;
};
class Tata : public Car
{
public:
    float discount()
    {
        float disc;
        disc = price * 0.2;
        return disc;
    }
    int totalseats()
    {
        if (price >= 1500000)
        {
            return 7;
        }
        else
        {
            return 4;
        }
    }
};

int main()
{
    Tata model;
    cout << "Enter the model name: ";
    model.getName();
    cout << "\nEnter the price of model: ";
    model.getPrice();
    cout << "\nThe price of car after discount : " << model.discount() << endl;
    cout << "No. of seats in a car: " << model.totalseats() << endl;
}