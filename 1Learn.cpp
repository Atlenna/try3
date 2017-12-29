// 1Learn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int ctr = 0;


struct node
{  int data;
    node* next;
    string name;
};

int main()
{
     node* head=NULL;
     node* temp=NULL;
     node* tail=NULL;
    int choice, repeat =1, item;
        string name;

	  cout<<"*******************************************************************************"<<endl;
	  cout<<"*                                                                             *"<<endl;
	  cout<<"*                            CUSTOMER DATA                                    *"<<endl;
      cout<<"*                                                                             *"<<endl;
	  cout<<"*******************************************************************************"<<endl;
  
do  {
      cout <<"1. ADD CUSTOMER DATA\n";
      cout << "2. DELETE CUSTOMER DATA\n";
      cout << "3. DISPLAY PCUSTOMER DATA\n";
      cout << "4. SEARCH CUSTOMER DATA\n";
      cout << "5. SORT CUSTOMER DATA\n";
      cout<< "\nWhich do you choose: ";
      cin >> choice;
    switch(choice)        
{
        case 1:
                temp=new node;
                cout << "\nEnter customer number to be inserted into list: ";
                cin >> item;
                         cout << "\nEnter customer name to be inserted into list: ";
                cin >> name;
                        temp->data = item;
                        temp->name = name;
                temp->next = NULL;

                 if (head==NULL)
                    {   head=temp; 
                        tail=temp;      } 

                 else 
                     {     tail->next =temp ;
                           tail = temp;  } 
          break;

        case 2:

               if (head==NULL)
                   cout << "The data list is empty!\n";

               else
              {      temp = head; 

                      if (head==tail) 
                      {     head = NULL;
                            tail = NULL;    } 

                      else
                          head = head->next;  
                          cout << temp->data << "  Name on the first number has been deleted.\n\n";
               }   
              break;

case 3: 
           node *current;
           current=head; 

           if (head==NULL)
                   cout << "The customer name in the list is empty!\n";

           else
               {   cout << "\n\nThe customer name in the list : \n";

           while (current != NULL) 
                       {   cout << current->data << " is " ;
                           cout << current->name <<endl;
                           current=current->next ; 
			     } 
                 }
            cout<<endl<<endl;
            break;

case 4:
                        node *current1;
                        current1=head;
                        bool found;
                        found = false;
                        int search;

                        cout <<"\nYou can enter the customer number :";
                        cin >> search;

                        while (current1 != NULL && found==false)

                        if (current1->data==search)
                            found = true;

                        else
                           {
                             current1=current1->next;
                             found = false;
                           }
                                
						if (found)
                          {
                            cout<<current1->data;
                            cout<<current1->name;
                          }

                        else
                           {
                             cout<<search<<"NAME NOT FOUND"<<endl <<endl <<endl;
                           }
case 5:
        {
 string name[7];
 int grade[7];
 int index[7];
 int i, j;


 for(i=0;i<=6;i++)
 {
  cout << "Please enter customer name: ";
  cin >> name[i];
  cout << "Please enter number: ";
  cin >> grade[i];
 }


 for(i=0;i<=6;i++)
 {
  index[i]=i;
 }


 for(i=0;i<=5;i++)
 {
  for(j=i+1;j<=6;j++)
  {
   int temp;
   
   if(name[index[i]] > name[index[j]])
   {
    temp = index[i];
    index[i] = index[j];
    index[j] = temp;
   }
  }
 }
 cout << endl;


 for(i=0;i<=6;i++)
 { 
  cout << name[index[i]] << "        "
   << grade[index[i]] << endl;
 }

 cin.ignore();
 cin.get();

}

default:
repeat = 0;
}
} while (repeat ==1);
system("PAUSE");
return 0;
}
