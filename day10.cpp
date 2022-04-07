#include <iostream>
using namespace std;

int main()
{
   int data[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}

#include<iostream>
using namespace std;

void cyclicSwap(int *a, int *b, int *c);

int main()
{
    int a, b, c;

    cout << "Enter value of a, b and c respectively: ";
    cin >> a >> b >> c;

    cout << "Value before swapping: " << endl;
    cout << "a, b and c respectively are: " << a << ", " << b << ", " << c << endl;

    cyclicSwap(&a, &b, &c);

    cout << "Value after swapping numbers in cycle: " << endl;
    cout << "a, b and c respectively are: " << a << ", " << b << ", " << c << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    string str = "C++ Programming is awesome";
    char checkCharacter = 'a';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

    return 0;
}


