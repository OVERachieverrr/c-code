#include<iostream>
using namespace std;
class DISTANCE
{
    private:
    int feet;
    int inches;

    public:
    void input_distance();
    void output_distance();
    DISTANCE Add(DISTANCE);
};
 int main()
{
    DISTANCE d1 , d2 ,sum;

    d1.input_distance();
    d2.input_distance();
    sum=d1.Add(d2);
    d1.output_distance();
    d2.output_distance();
    sum.output_distance();

    return 0;
}
void DISTANCE::input_distance()
{
    cout<<"enter the distances in ft and inch\n";
    cin>>feet>>inches;
}
void DISTANCE::output_distance()
{
    cout<<feet<<"ft  "<<inches<<"in\n";
}
DISTANCE DISTANCE::Add(DISTANCE d2)
{
    DISTANCE d3;
    d3.feet=feet+d2.feet;
    d3.inches=inches+d2.inches;
    //1ft=12 inches
    if(d3.inches>=12)
    {
        d3.feet++;
        d3.inches-=12;
    }
    return d3;
}

