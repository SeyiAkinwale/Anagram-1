#include <iostream>
using namespace std;

void printRecur(int count)
{
  if (count<0) return;
  cout<<"Printing recursively";
  cout<<" stack size is: " <<count;
}
int main() {
  printRecur(0);
}