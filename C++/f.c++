// int f(int a, int b){
//     return a+b;
// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee{

public:
    string Name,Post,Mail,Phone_Number,Salary;

    void Employee_Info(){
        cout<<endl;
        string data[10];
        int i;
        data[0]=Name;data[1]=Post;
        data[2]=Salary;data[3]=Phone_Number;

        cout<<"Name - "<<Name<<endl;
        cout<<"Post - "<<Post<<endl;
        cout<<"Salary - $"<<Salary<<endl;
        cout<<"Phone Number - "<<Phone_Number<<endl;
        cout<<"Mail -"<<Mail<<endl;

        ofstream MyFile("test.csv");
        for(i=0;i<4;i++){
            MyFile<<data[i]<<"\n"<<endl;
        }
        MyFile.close();
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