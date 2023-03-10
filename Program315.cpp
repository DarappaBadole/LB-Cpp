#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int i);
    

    void Accept();
   
    void Display();
    
};

/*
returnvalue class name ::functionName()
{

}
*/

   ArrayX :: ArrayX(int i)
    {
        iSize=i;
        Arr = new int [iSize];
    }

     void ArrayX :: Accept()
    {
        cout<<"Enter the elements :"<<"\n";
        for(int i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }

    }

        void ArrayX :: Display()
    {
        cout<<"elements of array are :"<<"\n";
        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<"\n";
        }

    }



int main()
{
   ArrayX obj(5);
   
   obj.Accept();
   obj.Display();









    return 0;
}