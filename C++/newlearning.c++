// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// class Employee{

// public:
//     string Name,Post,Mail,Phone_Number,Salary;

//     void Employee_Info(){
//         cout<<endl;
//         string data[10];
//         int i;
//         data[0]=Name;data[1]=Post;
//         data[2]=Salary;data[3]=Phone_Number;

//         cout<<"Name - "<<Name<<endl;
//         cout<<"Post - "<<Post<<endl;
//         cout<<"Salary - $"<<Salary<<endl;
//         cout<<"Phone Number - "<<Phone_Number<<endl;
//         cout<<"Mail -"<<Mail<<endl;

//         ofstream MyFile("test.csv");
//         for(i=0;i<4;i++){
//             MyFile<<data[i]<<"\n"<<endl;
//         }
//         MyFile.close();
//     }
// };
// int main(){
//     Employee Details;
//     cout<<"Name"<<endl;cin>>Details.Name;
//     cout<<"Post"<<endl;cin>>Details.Post;
//     cout<<"Salary"<<endl;cin>>Details.Salary;
//     cout<<"Phone Number"<<endl;cin>>Details.Phone_Number;
//     cout<<"Mail"<<endl;cin>>Details.Mail;
//     Details.Employee_Info();
// }



// #include <iostream>
// using namespace std;
// class Retangle{
//     private:
//         int length,breadth;
//     public:
//         void setDimensions(){
//             cout<<"Lenght "<<endl;cin>>length;
//             cout<<"Breadth "<<endl;cin>>breadth;
//         }
//         int getArea(){
//             return length*breadth;
//         }
// };

// int main(){
//     Retangle p;
//     p.setDimensions();
//     cout<<"Area "<<p.getArea()<<endl;
//     return 0;
// }


// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     fstream new_file;
//     new_file.open("testingfile.txt",ios::out);
//     if(!new_file){
//         cout<<"File Creation Failed";
//     }
//     else{
//         cout<<"New File Created";
//         new_file<<"Hello ng";
//         new_file.close();
//     }
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     fstream new_file;
//     new_file.open("testingfile.txt", ios::in | ios::trunc);
//     if(!new_file){
//         cout<<"No Such File";
//     }
//     else{
//         char ch;
//         while (!new_file.eof()){
//             new_file>>ch;
//             cout<<ch;
//         }
//         new_file.close();
//     }
//     return 0;
// }


// #include <iostream>
// #include <fstream>

// using namespace std;

// int main()
// {
//     string strReplace = "CEO";
//     string strNew = "OEC";
//     ifstream filein("test.txt");
//     ofstream fileout("testout.txt");
//     if(!filein || !fileout)
//     {
//         cout << "Error opening files!" << endl;
//         return 1;
//     }

//     string strTemp;
//     while(filein >> strTemp)
//     {
//         if(strTemp == strReplace){
//             strTemp = strNew;
//         }
//         strTemp += "\n";
//         fileout << strTemp;
//     }
//     return 0;
// }

// #include <iostream>
// #include "f.c++"
// using namespace std;
// int main(){
//     cout<<f(1,2)<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a = 2;
//     int b = 6;
//     while(a < 10)
//         for(int b = 0; b < 4; ++b)
//         {
//         cout << a << " " << b << " ";
//         ++a;
//         }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     double Celsius,Fahrenheit;
//     cout<<"Enter Celsius"<<endl;cin>>Celsius;
//     Fahrenheit = (9.0/5)*Celsius+32;
//     cout<<"Converted Value Of Celsius "<<Celsius<<" Is "<<Fahrenheit<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     float meter,feet;int i;
//     for(i=1;i<11;i++){
//         cout<<"Feet "<<i*3<<" Meter "<<(i*3)*3.28<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int y[7] = {1,2,3,4,5,6,7};

//     cout << left << "YEAR\t" << left 
//     << "DEPRECIATION\t" << left 
//     << "END-OF-YEAR-VALUE\t" << left 
//     << "ACCUMULATED DEPRECIATION" << endl;
//     int cal = 24000;
//     int cal1 = 4000;

//     for (int i = 0; i < 7; i++)
//     {
//         cout << left << y[i]
//         <<"\t    " << left 
//         << "4000\t\t"
//         << left << cal << "\t\t\t"
//         << left << cal1 << endl;
//         cal = cal-4000;
//         cal1 = cal1+4000;
//     }
//     return 0;
// }

