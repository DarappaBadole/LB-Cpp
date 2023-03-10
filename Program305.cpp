
//swapping of two numbers: call by value

#include<iostream>
using namespace std;

void swap(int x , int y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;


}

int main()
{
    int a=11 , b=10;

    cout<<"Value of a  "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    swap(a,b);

    cout<<"Value of a  "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";











    return 0;
}