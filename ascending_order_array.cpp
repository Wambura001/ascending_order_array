// ascending_order_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr auto MAX = 100;
int main()
{
   //array declaration
	int arr[MAX];
	int n, i, j;
	int temp;

	//read total number of elements 
	cout << "Enter total number of elements to read: ";
	cin >> n;

	// check bound 
	if (n < 0 || n > MAX)
	{
		cout << "Input valid range!!!" << endl;
		return -1;
	}

	//read n elements
	for (i = 0; i < n; i++)
	{
		cout << "Enter element[" << i + 1 << "]";
		cin >> arr[i];
	}

	//print input elements 
	cout << "Unsorted Array elements:" << endl;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// sorting - ASCENDING ORDER
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr [j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//print sorted array elements 
	cout << "Sorted (Ascending Order) Array elements: " << endl;
	for (i = 0; i < n, i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
