#include<iostream>
using namespace std;
template<class T>
T Addition(T Arr[],int iSize)
{
    int iCnt=0;
    T iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];

    }
    return iSum;
}

int main()
{


 int Data[] = {10,20,30,40};

 int iRet=Addition(Data,4);
 cout<<"Addition is:"<<iRet<<"\n";

 float Dataf[] = {90.2f,9.23f,89.90f,67.90f,23.78f};
 float fRet=Addition(Dataf,5);
 cout<<"Addition is:"<<fRet<<"\n";

 







    return 0;

}