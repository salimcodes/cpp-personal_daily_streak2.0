

#include <iostream>
using namespace std;

struct Person
{
  char Name[50];
  bool IsTall;
    
}Me;
int main()
{
    cout << " It has been a while since I last wrote C++" << endl;
    Me.Name = "Salim Oyinlola";
    Me.IsTall = false;
    cout << Me.Name << " is my name." << endl;
    cout << Me.IsTall << " for how tall I am." << endl;
    
}
