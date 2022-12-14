
#include<iostream>
using namespace std;

class ArrayX
{
 public:
    int *Arr;    // int Arr[];
    int iSize;

    ArrayX(int i)
    {
        cout<<"Allocating the memory for resources..."<<"\n";
       iSize = i;
       Arr = new int[iSize]  ;   ///   Arr = (int*)malloc(iSize* sizeof(int));
    }
  
  ~ArrayX()
  { cout<<"Deallocating the memory for resources..."<<"\n";
    delete[]Arr;   // free(Arr);
  }

  void Accept()
  {
    cout<<"Enter the elements of Array:"<<"\n";
    
    for(int iCnt = 0; iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];     // scanf("%d",&Arr[i]);
    }
  }

  void Display()
  {
    cout<<"Elements of array are:"<<"\n";

    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";    // printf("%d",Arr[iCnt]);
    }
  }




};
int main()
{
 int iLength = 0;

 cout<<"Enter the size of array :"<<"\n";
 cin>>iLength;

 ArrayX * obj = new ArrayX(iLength);     // dynamic
 

 
 obj->Accept();
 obj->Display();





    return 0;
}