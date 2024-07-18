#include<iostream>
using namespace std;
class number
{
    private:
    int a , b , c,maximum,minimum;

    public:
    void input()
    {
        cout<<"enter the three numbers\n";
        cin>>a>>b>>c;
    }
    int max()
    {
         maximum=a;
        if(maximum<b)
        {
            maximum=b;
        }
        if(maximum<c)
        {
            maximum=c;
        }
        return  maximum;
    }
    int min()
    {
         minimum=a;
        if(minimum>b)
        {
            minimum=b;
        }
        if(minimum>c)
        {
            minimum=c;
        }
        return  minimum;
    }
    void output()
    {
        cout<<"the maximum among "<<a<<" , "<<b<<" and "<<c<<" is :"<<maximum<<"\n ";
        cout<<"minimum is :  "<<minimum;
    }
};
int main()
{
    number n1 ;
    n1.input();
    n1.max();
    n1.min();
    n1.output();
    return 0;

}