#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Product
{
    int product_id;
    string product_name;
    int product_price;
    int total_price;
    int quantity;

public:

    void display_detail()
    {
        cout << left << setw(15) << product_name
             << right << setw(10) << product_price
             << setw(10) << quantity
             << setw(15) << total_price << endl;
    }


    int search_product(int id)
    {
        if (id == product_id)
            return 1;
        return 0;
    }


    void add_quantity()
    {
        quantity++;
        total_price = product_price * quantity;
        cout << "Product ID " << product_id << " found! Added to your basket. New quantity: "
             << quantity << "  Total Price: " << total_price << endl;
    }

    // Function to add a new product
    void add_product(int id)
    {
        cout << "New Product Found!!" << endl
             << "Enter product name: ";
        cin >> product_name;
        cout << "Enter product price: ";
        cin >> product_price;
        product_id = id;
        quantity = 1;
        total_price = product_price;
    }


    int get_total_price()
    {
        return total_price;
    }
};

int main()
{
    Product product_list[50];
    int num_products = 0, product_id, grand_total = 0;
    char choice;

menu:
    cout << "Enter product ID: ";
    cin >> product_id;


    for (int i = 0; i < num_products; i++)
    {
        if (product_list[i].search_product(product_id) == 1)
        {
            product_list[i].add_quantity();
            goto continue_shopping;
        }
    }


    product_list[num_products].add_product(product_id);
    num_products++;

continue_shopping:
    cout << "If you want to add another item press y else n: ";
    cin >> choice;
    if (choice == 'y')
    {
        goto menu;
    }
    else
    {
        system("CLS");
        cout << "|--------------------- VMart ---------------------------------|" << endl;
        cout << endl << "Final Bill:" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << left << setw(15) << "Name"
             << right << setw(10) << "Price"
             << setw(10) << "Quantity"
             << setw(15) << "Total Price" << endl;
        cout << "---------------------------------------------------" << endl;

        for (int i = 0; i < num_products; i++)
        {
            product_list[i].display_detail();
            grand_total += product_list[i].get_total_price();
        }

        cout << "---------------------------------------------------" << endl;
        cout << left << setw(35) << "Grand Total:" << grand_total << endl;
        cout << endl << "          --x-- Thanks For Visiting --x--         " << endl;
        cout << endl << "Vishwa padaliya" << " " << "ID No: 24CE068" << endl;
    }
    return 0;
}
