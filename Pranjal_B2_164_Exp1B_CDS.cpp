//Name - Pranjal Panwar 
//PRN - 23070123164 
//EXPERIMENT- 1(B)

#include<iostream>
using namespace std;
int main() {
    int n1, n2, sum=0, sub, prod, div;
    cout<<"Enter first number.";           //Output - Enter first number.25
    cin>>n1;
    cout<<"Enter second number.";          //Enter second number.5
    cin>>n2;
    sum=n1+n2;
    cout<<"Sum of the numbers is: "<<sum<<"\n";    //Sum of the numbers is: 30
    sub=n1-n2;
    cout<<"Difference of the numbers is: "<<sub<<"\n";  //Difference of the numbers is: 20
    prod=n1*n2;
    cout<<"Product of the numbers is: "<<prod<<"\n";        //Product of the numbers is: 125 
    div=n1/n2;
    cout<<"Quotient is: "<<div<<"\n";                      //Quotient is: 5
    return 0;
}
