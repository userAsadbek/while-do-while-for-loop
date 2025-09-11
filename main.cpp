#include <iostream>
#include <iomanip>
using namespace  std;
int main() {
 char a;
    int last,num; //while loop
    cout<<"Enter a character:"<<endl;
    cout<<" 1.Y 2.y 3.N 4.n";
    cin>>a;
while (a !='Y' && a!='y' && a !='N' && a!='n')
    { cout<<"Please enter one of the given choice";
    cin>>a;
}
    cout<<"This program will dislay a table of integer\n";
    cout<<"numbers and their squares, starting with 1\n";
    cout<<"What should be last number\n";
    cout<<"Enter integar between 2 and 10\n";
    cin>>last;
    while (last<2||last>10) {
        cout<<"Please enter an integer between 2 and 10\n";
        cin>>last;
    }
cout<<"\n Number square\n";
    cout<<"------------"<<endl;
    num=1;
    while (num<=last) {
        cout<<setw(4)<<num<<setw(7)<<num*num<<endl;
        num++;
    }


    return 0;
}