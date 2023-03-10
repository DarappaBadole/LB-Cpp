#include<iostream>
using namespace std;

template<class T>

void Display(T Arr[],int iSize)
{
    int iCnt;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{



 int Data[] = {10,20,30,40};

 Display(Data,4);

 char Datac[] = {'a','b','c','d','e','f'};
 Display(Datac,6);




    return 0;
}