#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
    struct node*prev;
};

typedef struct node NODE;
typedef struct node*PNODE;
// typedef struct node **PPNODE;

class DoublyCL
{
 public:
   PNODE First;
   PNODE Last;

 DoublyCL();       // Constructor

 void InsertFirst(int no);
 void InsertLast(int no);
 void InsertAtPos(int no,int ipos);

 void DeleteFirst();
 void DeleteLast();
 void DeleteAtPos(int ipos);

 void Display();
 int Count();


};

/*
Return_Value Class_Name ::Function_Name(______)
{

}
*/

DoublyCL::DoublyCL()                 // Default constructor
{
    First=NULL;
    Last=NULL;
}

void DoublyCL:: InsertFirst(int no)
{
  PNODE newn = new NODE;

  newn->next=NULL;
  newn->data=no;
  newn->prev=NULL;

  if((First==NULL)&&(Last==NULL))            //  if LL is empty
  {
    First=newn;
    Last=newn;
    

  }

  else                                   // if LL contains one or more 
  {
    newn->next=First;
    (First)->prev=newn;
    First=newn;
   
  }
   (First)->prev=Last;
   (Last)->next=First;


}

void  DoublyCL:: InsertLast(int no)
{
  PNODE newn = new NODE;

  newn->next=NULL;
  newn->data=no;
  newn->prev=NULL;

  if((First==NULL)&&(Last==NULL))            //  if LL is empty
  {
    First=newn;
    Last=newn;
    

  }

  else                                   // if LL contains one or more 
  {
    (Last)->next=newn;
    newn->prev=Last;
    Last=newn;
    
  }
  (First)->prev=Last;
  (Last)->next=First;


}

void  DoublyCL:: Display()
{
 PNODE temp=First;

 if((First==NULL)&&(Last==NULL))
 {
    cout<<"Linked list is empty"<<"\n";
    return;
 }

 cout<<"Elements of linked list are:"<<"\n";

 do
 {
    cout<<"|"<<temp->data<<" | <=>";
    temp=temp->next;
 } while (temp!=Last->next);
 cout<<"\n";
 

}

int DoublyCL:: Count()
{
    PNODE temp=First;
    int iCnt=0;

 do
 {
    iCnt++;
   
    temp=temp->next;
 } while (temp!=Last->next);
return iCnt;
 



}

void  DoublyCL::DeleteFirst()
{
 if((First==NULL)&&(Last==NULL))   //  LL Is empty
 {
    return;

 }

 else if(First==Last)      // LL contains one elements
 {
    delete First;
    First=NULL;
    Last=NULL;
 }

 else                             // LL contains multiple nodes:
 {
   (First)=(First)->next;
   delete (Last)->next;                 //    free(*First)->prev;

   (First)->prev=Last;
  (Last)->next=First;
     
 }
 



}

void DoublyCL:: DeleteLast()
{
 if((First==NULL)&&(Last==NULL))   //  LL Is empty
 {
    return;

 }

 else if(First==Last)      // LL contains one elements
 {
    delete First;
    First=NULL;
    Last=NULL;
 }

 else                             // LL contains multiple nodes:
 {
   (Last)=(Last)->prev;
   free((First)->prev);       // free(*Last)->next;
    
    (First)->prev=Last;
  (Last)->next=First;
     
 }
 



}

void DoublyCL:: InsertAtPos(int no,int ipos)
{
    int iNodeCount=Count();
    PNODE newn = NULL;
    PNODE itemp=NULL;
    int iCnt=0;

 if((ipos<1)&&(ipos>iNodeCount+1))
 {
    cout<<"Invalid Position"<<"\n";
    return;

 }

 if(ipos==1)
 {
  InsertFirst(no);
 }

 else if(ipos==iNodeCount+1)
 {
    InsertLast(no);
 }

 else
 {
    newn = new NODE;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    itemp=First;

    for(iCnt=1;iCnt<ipos-1;iCnt++)
    {
        itemp=itemp->next;

    }newn->next=itemp->next;
    itemp->next->prev=newn;

    itemp->next=newn;
    newn->prev=itemp;



    
 }


}

void  DoublyCL::DeleteAtPos(int ipos)
{
    int iNodeCount=Count();
    
    PNODE itemp=NULL;
    int iCnt=0;

 if((ipos<1)&&(ipos>iNodeCount))
 {
    cout<<"Invalid Position"<<"\n";
    return;

 }

 if(ipos==1)
 {
  DeleteFirst();
 }

 else if(ipos==iNodeCount+1)
 {
    DeleteLast();
 }

 else
 {
    
    itemp=First;

    for(iCnt=1;iCnt<ipos-1;iCnt++)
    {
        itemp=itemp->next;

    }
    itemp->next=itemp->next->next;
    delete itemp->next->prev;
    itemp->next->prev=itemp;



    
 }


}



int main()
{

 DoublyCL obj;

 int iRet=0;

 obj.InsertFirst(51);
 obj.InsertFirst(21);
 obj.InsertFirst(11);
 obj.Display();
 iRet=obj.Count();
 cout<<"Number of nodes in linked list are:"<<iRet<<"\n";

 obj.InsertLast(101);
 obj.InsertLast(111);
 obj.InsertLast(121);
 obj.Display();
 iRet=obj.Count();
  cout<<"Number of nodes in linked list are:"<<iRet<<"\n";


  obj.InsertAtPos(105,5);
  obj.Display();
 iRet=obj.Count();
 cout<<"Number of nodes in linked list are:"<<iRet<<"\n";


  obj.DeleteAtPos(5);
  obj.Display();
 iRet=obj.Count();
 cout<<"Number of nodes in linked list are:"<<iRet<<"\n";



 
 obj.DeleteFirst();
 obj.Display();
 iRet=obj.Count();
 cout<<"Number of nodes in linked list are:"<<iRet<<"\n";



 obj.DeleteLast();
 obj.Display();
 iRet=obj.Count();
 cout<<"Number of nodes in linked list are:"<<iRet<<"\n";


 




 
 

 







    return 0;
}