#include<iostream>
using namespace std;
class pharmacy
{
private:
    int order_quantity, store_quantity;
public:
void input();
void check();
};
int main()
{
    pharmacy p1;
    p1.input();
    p1.check();
}

void pharmacy::input()
{
    cout<<"Enter the store quantity:";
    cin>>store_quantity;
    cout<<"Enter the order quantity:";
    cin>>order_quantity;
}
void pharmacy::check()
{
    if(order_quantity>store_quantity)
    {
        cout<<"No enough quantity";
    }
    else
    {
        if(order_quantity>16&&store_quantity<40)
        {
            cout<<"You cannot order than more than 16 item";
        }
        else
        {
            cout<<"You order is accepted";
        }
    }
}
