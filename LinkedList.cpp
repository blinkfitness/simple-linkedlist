#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList(){  //default constructor
     head = NULL;   //no ListNode object created when LinkedList obj instantiated
}


void LinkedList::add(double x){
     if(head == NULL)  //test for empty list
          head = new ListNode(x); //adds new node directly
     else{
          ListNode * previousNodePtr = head; //save address of what will become 2nd node from head
          head = new ListNode(x, previousNodePtr); //new node, starting from front, will point to previous node
     }
     this->display(); //displays changes to list when addition completed
     return;
}

bool LinkedList::isMember(double test){
     this->display();
     if(head == NULL)
          return false; //list is empty
     if(head->x == test)
          return true; //value is in first node
     else{
          ListNode * nodePtr = head;
          do{             //have already tested for value in first node
               nodePtr = nodePtr->next; //traverse thru list
               if(nodePtr->x == test)
                    return true;
          }while(nodePtr->next != NULL); //until end of list
          return false;
     }
}

//simple list display function
void LinkedList::display() const {
     cout << "My list is: ";
     ListNode * nodePtr = head; //start at head
     while(nodePtr){            //!= NULL
          cout << nodePtr->x << "   ";
          nodePtr= nodePtr->next;
     }
     cout << endl;
}
