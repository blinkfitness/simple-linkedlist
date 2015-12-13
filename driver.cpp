#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
     LinkedList mylist;
     double val;

     cout << endl << endl;
     cout << "**Program implements simple linked list, " << endl
          << "with functions to add node to front of list (head) and "
          << " to test whether input is member of list." << endl << endl;




     cout << "Enter a number to add to list> ";
     cin >> val;
     mylist.add(val);
     cout << "Enter a number to add to list> ";
     cin >> val;
     mylist.add(val);
     cout << "Enter a number to add to list> ";
     cin >> val;
     mylist.add(val);
     cout << endl << endl;
     cout << "Enter a value to search for > ";
     cin >> val;
     if(mylist.isMember(val))
          cout << val << " is in the list." << endl;
     else
          cout << val << " is not in the list." << endl;
          cout << "Enter a value to search for > ";
     cin >> val;
     if(mylist.isMember(val))
          cout << val << " is in the list." << endl;
     else
          cout << val << " is NOT in the list." << endl;
     return 0;
}
