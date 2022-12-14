/*
  Input : 789567     597768
  output : numbers are anagram
*/

#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1,int iNo2)
{
    int Frequency1[10] = {0};
    int Frequency2[10] = {0};
    bool flag = true;

    while(iNo1!=0)
    {
        Frequency1[(iNo1 % 10)]++;
        iNo1= iNo1 / 10;

    }
    
     while(iNo2!=0)
    {
        Frequency2[(iNo2 % 10)]++;
        iNo2= iNo2 / 10;

    }
    for(int iCnt=0; iCnt<10;iCnt++)
    {
        if(Frequency1[iCnt] != Frequency2[iCnt])
        {
            flag = false;
            break;
        }
    }
    return flag;

}

int main()
{
    int iValue1=0 , iValue2=0;
    bool bRet = false;
    
    cout<<"Enter first number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second number :"<<"\n";
    cin>>iValue2;
    
    bRet=CheckAnagram(iValue1,iValue2);

    if(bRet==true)
    {
        cout<<"Numbers are anagram\n";
    }

    else
    {
        cout<<"numbers are not anaram\n";
    }







    return 0;
}