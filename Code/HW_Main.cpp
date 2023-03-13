#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Variable - START
int arrSize;
int i; // to indicate an integer
float element; // numerical emplimitation of elements
vector<float> list; 

int main()
{
  cout << "Enter the number size of arrays you desire: "; //insert elemets arrays
cin >> arraySize; // character input
while (!cin)
  {
cout << "The input you inserted was not comprehendable \n" //display the message
  << "Please enter another value: "; //message when there is a error detected
cin.clear();
cin.ignore(100, '\n');
cin >> arraySize;
    }
  cout << endl;

cout << "The array: "; //inserted elements not sorted
for (int i = 0; i < list.size(); i++)
  {
cout << list.at(i) << "";
    }
cout << endl;
sort(list.begin(), list.end()); //display the arrays sorted
cout << "sorted array: ";
for (int i = 0; i < list.size(); i++)
  {
cout << list.at(i) << "";
    }
cout << endl;
return 0;
  }

