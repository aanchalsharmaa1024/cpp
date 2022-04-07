#include <iostream>
using namespace std;

int main() {
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
 return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalNum /= 10;
    }
if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
	    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

  int i, n;
  float arr[100];

  cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;
// Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {

    // Change < to > if you want to find the smallest element
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}

