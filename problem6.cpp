#include<iostream>
using namespace std;
class NUMBERS
{
    private:
    int a,b,sum;
    public:
    
    NUMBERS(int c, int d)
    {
       a=c;
       b=d;
    }
    friend int ADD(NUMBERS& );
};
int main()
{    int a,b;
    cout<<"enter the values:   ";
    cin>>a>>b;
    NUMBERS n1(a,b);
    int sum=ADD(n1);
    cout<<"sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
}

int ADD(NUMBERS& n1)
{
    n1.sum=n1.a+n1.b;
    return n1.sum;
}
