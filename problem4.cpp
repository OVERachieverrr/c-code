#include<iostream>
using namespace std;
class EMPLOYEE
{
    private:
     char employee_name[30];
     int employee_number;
     float basic ,DA ,IT ,net_salary;//DA=daily allowance
     public:
      void get_info();
      void compute_And_show();

};
int main()
{
    EMPLOYEE E[50];
    int n;
    cout<<"enter the number of employee:";
    cin>>n;
    for (int i=0;i<n;i++)
    {
         E[i].get_info();
    }
    for(int i=0;i<n;i++)
    {
        E[i].compute_And_show();
    }

    return 0;
    
}

void EMPLOYEE::get_info(){
    cout<<"enter the name of employee:  ";
    cin>>employee_name;
    cout<<"enter employee id:  ";
    cin>>employee_number;
    cout<<"enter the basic salary of employee:  ";
    cin>>basic;
}

void EMPLOYEE::compute_And_show()
{
    DA=0.52*basic;
    float gross_salary=basic+DA;
    IT=0.3*gross_salary;
    net_salary=gross_salary-IT;

    cout<<endl<<endl<<endl;

    cout<<"Name of employee="<<employee_name<<endl;
    cout<<"ID of employee="<<employee_number<<endl;
    cout<<"Basic salary of employee="<<basic<<endl;
    cout<<"Daily allowance of employee="<<DA<<endl;
    cout<<"Incometax of employee="<<IT<<endl;
    cout<<"Net salary of employee="<<net_salary<<endl;
}
