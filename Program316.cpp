#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
    T *Arr;
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
  template<class T>
   ArrayX <T> :: ArrayX(int i)
    {
        iSize=i;
        Arr = new T [iSize];
    }

 template<class T>
     void ArrayX <T> :: Accept()
    {
        cout<<"Enter the elements :"<<"\n";
        for(int i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }

    }
        template<class T>
        void ArrayX <T> :: Display()
    {
        cout<<"elements of array are :"<<"\n";
        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<"\n";
        }

    }



int main()
{
   ArrayX <int> obj1(5);
   obj1.Accept();
   obj1.Display();

   ArrayX <double>obj2(5);
   obj2.Accept();
   obj2.Display();









    return 0;
}