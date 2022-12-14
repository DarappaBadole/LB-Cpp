//       template for problems on N numbers:

#include<iostream>
using namespace std;

class ArrayX
{
 public:
    int *Arr;    // int Arr[];
    int iSize;

    ArrayX(int i)
    {
       iSize = i;
       Arr = new int[iSize]  ;   ///   Arr = (int*)malloc(iSize* sizeof(int));
    }
  
  ~ArrayX()
  {
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
 ArrayX obj(5);    //   static and hardcoaded.
 
 obj.Accept();
 obj.Display();





    return 0;
}