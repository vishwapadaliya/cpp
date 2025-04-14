#include <iostream>
#include <string>
using namespace std;

class manageInventory
{
    long item_id;
    string item_name;
    float item_price;
    double available_stock;

public:

    manageInventory(string name, long id, float price, double quantity )
    {
        item_name = name;
        item_id = id;
        item_price = price;
        available_stock = quantity;
    }

    void new_shipments()
    {
        double add_stock;
        cout << "Enter the quantity you want to add for " << item_name << ": ";
        cin >> add_stock;

        if (add_stock > 0)
        {
            available_stock += add_stock;
            cout << "New stock quantity for " << item_name << ": " << available_stock << endl;
        }
        else
        {
            cout << "Invalid quantity entered." << endl;
        }
    }

    void sell_item()
    {
        double sold_item;
        cout << "\nEnter the quantity of sold item for " << item_name << ": ";
        cin >> sold_item;

        if (sold_item > 0 && sold_item <= available_stock)
        {
            available_stock -= sold_item;
            cout << "Now available stock for " << item_name << ": " << available_stock << endl;
        }
        else
        {
            cout << "Not enough stock available for: " << item_name << endl;
        }
    }


    void getdetails()
    {
        cout << "\nName of the product: " << item_name << endl;
        cout << "Product ID: " << item_id << endl;
        cout << "Price: Rs. " << item_price << endl;
        cout << "Available Stock: " << available_stock << endl;
    }
};

int main()
{
    const int size = 3;
    manageInventory p[size] =
    {
        manageInventory("Chocolate", 250236, 25.50, 20),
        manageInventory("Ice-cream", 250224, 50.00, 45),
        manageInventory("Milkshake", 250641, 35.00, 30)
    };

    for (int i = 0; i < size; i++)
    {
        p[i].getdetails();
    }

    for (int i = 0; i < size; i++)
    {
        p[i].sell_item();
        p[i].new_shipments();
    }

    cout<<"\n-----Updated stock------"<<endl;
    for (int i = 0; i < size; i++)
    {
        p[i].getdetails();
    }

    return 0;
}
