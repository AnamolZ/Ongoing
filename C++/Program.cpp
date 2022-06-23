#include <iostream>
using namespace std;
int main(){
    char a[10];
    int i;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    cout<<"Reverse"<<endl;
    for(i=0;i<3;i++){
        cout<<a[2-i]<<endl;
    }
    for(i=0;i<3;i++){
        cout<<addressof(a[i])<<endl;
    }
}