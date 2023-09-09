// Simple Calculator
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char ope;
    char choice;
    int f,c;
    cout<<"Enter the operation you would like to carry out (Either +,-,* or /) : ";
    cin>>ope;
    cout<<"Enter the operands, one after the other: ";
    cin>>a;
    cin>>b;
    switch(ope)
    {
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
            break;
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        default:
            cout<<"Invalid Input.";
    }
    cout<<c;
    cout<<"\nWould you like to find the absolute value? Enter Y or N: ";
    cin>>choice;
    if(choice=='Y')
    {
        f=abs(c);
        cout<<"\nThe absolute value is= "<<f;
    }
    return 0;
}
