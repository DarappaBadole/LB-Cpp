// singly circular linked list:

#include<iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
 public:
    PNODE First;
    PNODE Last;

     SinglyCL();

     void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no,int ipos);
    
    
    void DeleteFirst();
    void  DeleteLast();
    void DeleteAtPos(int ipos);

    void Display();
    int Count();




};
/*
return_value class name :: Function_name()
{

}
*/


void SinglyCL :: InsertFirst( int no)
{
    //PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void SinglyCL ::InsertLast( int no)
{
   // PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        (*Last) -> next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void SinglyCL :: Display()
{
    cout<<"Elements of Linked list are :"<<"\n";

    do
    {
        cout<<"| "<<First->data<<"|->";
        First = First -> next;
    }while(First != Last->next);
    cout<<"\n";
}

int SinglyCL :: Count()
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

void SinglyCL :: DeleteFirst()
{
     PNODE itemp = *First;
 if((*First==NULL)&&(*Last==NULL))        // LL Is empty
 {
   return ;

 }
 else if(*First==*Last)    // LL contains atleast one element
 {
    // free(*First);
    delete *First;
    *First=NULL;
    *Last=NULL;
 }
 else             // LL contains more than one elements  // using itemp 
 {
  *First =(*First)->next;
    //free(itemp);
    delete temp;
    (*Last)->next = *First;
                        
 } }


 void SinglyCL :: DeleteLast()
 {
    PNODE itemp = *First;
    if((*First==NULL)&&(*Last==NULL))     // LL is empty
 {
   return ;

 }
 else if(*First==*Last)    // LL contains one node
 {
    //free(*First);
    delete *First;
    *First=NULL;
    *Last=NULL;
 }
 else         // LL contains more than one node
 {       
    while(itemp->next!=(*Last))
    {
        itemp = itemp->next;

    }
    //free(itemp->next);    // free(*Last);
    delete itemp->next;

    *Last = itemp;
    (*Last)->next = *First;
    
 }

 }

 void SinglyCL :: InsertAtPos(int no,int ipos)
 {
    int iNodeCnt=0 , iCnt=0;

    iNodeCnt= Count();
    PNODE newn=NULL;
    PNODE temp=*First;

  if((ipos<1)||(ipos>iNodeCnt+1))
  {
  cout<<"Invalid Position"<<"\n";
  return;

  }
   if(ipos==1)
  {
    InsertFirst(no);
  }

  else if(ipos==iNodeCnt+1)
  {
   InsertLast( no);
  }
  else
  {
    //  newn = (PNODE)malloc(sizeof(NODE));
     newn = new NODE;

    newn->next=NULL;
    newn->data=no;

    for(iCnt=1; iCnt<ipos-1;iCnt++)
    {
        temp = temp->next;
    }
    newn->next = temp->next;
    temp->next = newn;
  }
 }


 void SinglyCL :: DeleteAtPos(int ipos)
 {
    int iNodeCnt=0, iCnt=0;

    iNodeCnt= Count();
    PNODE temp1=NULL;
    PNODE temp2 = NULL;
  if((ipos<1)||(ipos>iNodeCnt))
  {
  cout<<"Invalid Position"<<"\n";
  }
   if(ipos==1)
  {
    DeleteFirst();
  }

  else if(ipos = iNodeCnt)
  {
   DeleteLast();
  }
  else
  {
     for(iCnt=1; iCnt<ipos-1;iCnt++)
    {
        temp1 = temp1->next;
    }temp2= temp1->next;
    temp1->next = temp2->next;
    //free(temp2);
    delete temp2;
  }

 }


int main()
{
    SinglyCL obj;

    int iRet = 0;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.Display();
    iRet = obj.Count();
   cout<<"Number of elements are:"<<iRet<<"\n";


    obj. InsertAtPos(105,5);
    obj. Display();
    iRet = obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";


    obj. DeleteAtPos(5);
    obj. Display();
    iRet = obj. Count();
    cout<<"Number of elements are:"<<iRet<<"\n";



    obj. DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";


    
    obj. DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are:"<<iRet<<"\n";



    



    return 0;
}