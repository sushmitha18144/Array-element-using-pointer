#include <iostream>
using namespace std;

int main()
{
   int data[7];
   cout << "Enter elements: ";

   for(int i = 0; i < 7; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 7; ++i)
      cout << endl << *(data + i);

   return 0;
}
