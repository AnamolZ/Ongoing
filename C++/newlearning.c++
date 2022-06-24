#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    string Name;
    string Post;
    int Salary;
    string Mail;
    long long int Phone_Number;

    void Employee_Info(){
        cout<<endl;
        cout<<"Name - "<<Name<<endl;
        cout<<"Post - "<<Post<<endl;
        cout<<"Salary - $"<<Salary<<endl;
        cout<<"Phone Number - "<<Phone_Number<<endl;
        cout<<"Mail -"<<Mail<<endl;
    }
};
int main(){
    Employee Details;
    cout<<"Name"<<endl;cin>>Details.Name;
    cout<<"Post"<<endl;cin>>Details.Post;
    cout<<"Salary"<<endl;cin>>Details.Salary;
    cout<<"Phone Number"<<endl;cin>>Details.Phone_Number;
    cout<<"Mail"<<endl;cin>>Details.Mail;

    Details.Employee_Info();
}
