# Downloading and installing VS Code, (Hello World and Calculator Program).

Aim -> (A) To print hello world command. (B) To make a calculator.

Theory -> C++ is a high level object-oriented programming language. It is also known as "C with class".
It was developed by Bjarne Stroustrup in 1979.<br>
It implements all the OOPs concepts.<br>
It is a compiled language.<br>
(A) To print an output in C++ we use cout command.<br>
Syntax: cout<<value_to_print<<value_to_print;<br>
(B) Basic arithematic operations like addition, subtravtion, multiplication and division can be performed.
To take input from the user, we use "cin" command.<br>

#Code A:
// NAME - SHIVENDRA DWIVEDI
// PRN - 23070123122
// EXPERIMENT - 1(A) 

#include<iostream>
using namespace std;
int main()
{
    cout<<"HELLO WORLD!";     //Output - HELLO WORLD!
    return 0;
}

#Code B:
//Name - Shivendra Dwivedi 
//PRN - 2307123122 
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

Output (A)
![Output_1A (1)](https://github.com/user-attachments/assets/59488706-5af1-4792-bfa8-13a0187bbbf0)


Output (B)
![Output_1B (1)](https://github.com/user-attachments/assets/814d3fba-e7bb-45b9-a4b4-e6646ae4481d)


Syntax: cin>>value_to_be_entered;

Conclusion -> In this experiment, I learnt about C++ programming lnguage, its basic commands and also made a program for calculator.
