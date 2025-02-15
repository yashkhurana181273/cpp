#include <iostream>
using namespace std;
class shop
{
private:
    int item_number[100];
    int price[100];
    int counter;

public:
    void setprice(void);
    void display(void);
    void initprice(void) { counter = 0; }
};
void shop::setprice(void)
{
    cout << "Enter the id for item no" << counter + 1 << ":" << endl;
    cin >> item_number[counter];
    cout << "Enter the price of this item :" << endl;
    cin >> price[counter];
    counter++;
}
void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item id " << item_number[i] << " is " << price[i] << endl;
    }
}
int main()
{
    shop laxmi_emporium;
    laxmi_emporium.initprice();
    laxmi_emporium.setprice();
    laxmi_emporium.setprice();
    laxmi_emporium.setprice();
    laxmi_emporium.display();

    return 0;
}