#include<iostream>
#include<cstring>
using namespace std;
class employee
{
    private:
    static int count1,count2,count3;
    int employee_id;
    char employee_name[30], designation[30];
    public:
    void get_dATA()
    {
        cout<<"enter the employee id:";
        cin>>employee_id;
        cout<<"enter the employee name:";
        cin>>employee_name;
        cout<<"enter the designation:";
        cin>>designation;
    }
    void compute()
    {
        char string[9]= {'e','n','g','i','n','e','e','r'};
        char string1[7]= {'m','a','n','a','g','e','r'};
        if(strcmp(string,designation)==0)
        {
            ++count1;
        }
        if else(strcmp(string1,designation)==0)
        {
            ++count2;
        }
        else
        {
            ++count3;

        }
    }
    
    void display()
    {
        cout<<"manager: "<<count2<<endl<<"engineer:  "<<count1<<endl<<"others:  "<<count3<<"total employee: "<<count1+count2+count3<<endl;
    }
};
int employee::count1;
int employee::count2;
int main()
{
    employee e[30],e1;
    int n;
    cout<<"enter the the number of employee:  ";
    cin>>n;
    for (int i = 0;i<n;i++)
    {
        e[i].get_dATA();
    }
    for (int i = 0;i<n;i++)
    {
        e[i].compute();
    }
    
        e1.display();
    
    return 0;
}