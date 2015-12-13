#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

class LinkedList
{
     private:
          struct ListNode    //none instantiated atm
          {
               double x;
               ListNode * next;
               ListNode(double x, ListNode * next1 = NULL){  //ListNode constructor
                    this->x = x;
                    next = next1;
               }
          };
          ListNode * head; //list head pointer
     public:
          LinkedList(); //default constructor
          void add(double x);  //adds node to front of list
          bool isMember(double x);  //list member test
          void display() const;
};
#endif
