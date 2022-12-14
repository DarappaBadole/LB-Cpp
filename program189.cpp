#include<iostream>
using namespace std;

class Arithmatic
{
 public:                         //Access specifier
      int iValue1 , iValue2;           //caharacteristics
     
     Arithmatic()                     //default constructor
     {
        iValue1 = 0;
        iValue2 = 0;

     }

     Arithmatic(int A, int B)          // parameterised constructor
     {
        iValue1 = A;
        iValue2=B;

     }


     int Addition()
     {
        int iAdd =0;
        iAdd = iValue1+iValue2;

        return iAdd; 
     }

   

};

int main()
{
    int iRet = 0;
  Arithmatic obj1 ;
  Arithmatic obj2(10,11);
  Arithmatic obj3(20,21);
  
  iRet = obj1.Addition();
  cout<<"Addition is:"<<iRet <<"\n";          // 0
  
  iRet = obj2.Addition();
  cout<<"Addition is:"<<iRet <<"\n";         // 21
 
 iRet = obj3.Addition();
  cout<<"Addition is:"<<iRet <<"\n";        // 41


    return 0;
}