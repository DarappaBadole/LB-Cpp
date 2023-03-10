#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node * next;
};



template<class T>
class SinglyLL
{
    public:

    struct node<T> * First;

    SinglyLL();
    void InsertFirst(T no);
    void Display();
    int Count();
    


};

template<class T>
SinglyLL<T> :: SinglyLL()
{
    First=NULL;
}

template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
  struct node <T> *  newn = new struct node<T> ;

    newn->next=NULL;
    newn->data=no;

    if(First==NULL)
    {
        First=newn;

    }

    else
    {
        newn->next=First;
        First=newn;
    }

}

template<class T>
void SinglyLL<T> :: Display()
{
    struct node<T> * temp=First;

    while(temp!=NULL)
    {
        cout<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL\n";

}

template<class T>
int  SinglyLL<T> :: Count()
{
    int iCnt=0;
    struct node<T> * temp=First;

    while(temp!=NULL)
    {
        iCnt++;
        temp=temp->next;
    }
    return iCnt;

}

int main()
{
  SinglyLL <int> obj;

  obj.InsertFirst(101);
  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);

  obj.Display();

  int iRet= obj.Count();
  cout<<"Number of nodes in LL are:"<<iRet;


  













    return 0;
}