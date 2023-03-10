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
  SinglyLL <int> iobj;

  iobj.InsertFirst(101);
  iobj.InsertFirst(51);
  iobj.InsertFirst(21);
  iobj.InsertFirst(11);
  iobj.Display();
  int iRet= iobj.Count();
  cout<<"Number of nodes in LL are:"<<iRet<<"\n";
  

  SinglyLL <char> cobj;
  cobj.InsertFirst('d');
  cobj.InsertFirst('c');
  cobj.InsertFirst('b');
  cobj.InsertFirst('a');
  cobj.Display();
  iRet= iobj.Count();
  cout<<"Number of nodes in LL are:"<<iRet<<"\n";

   SinglyLL <float> fobj;
  fobj.InsertFirst(40.3f);
  fobj.InsertFirst(30.2f);
  fobj.InsertFirst(20.2f);
  fobj.InsertFirst(10.5f);
  fobj.Display();
  iRet= fobj.Count();
  cout<<"Number of nodes in LL are:"<<iRet<<"\n";

   SinglyLL <double> dobj;
  dobj.InsertFirst(40.365);
  dobj.InsertFirst(30.254);
  dobj.InsertFirst(20.365);
  dobj.InsertFirst(10.258);
  dobj.Display();
  iRet= dobj.Count();
  cout<<"Number of nodes in LL are:"<<iRet<<"\n";




  













    return 0;
}