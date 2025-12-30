// LAB07.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	int arr[] = { 10, 20, 30, 40 };
	int* p = arr;
	cout << "===Printing array elements using pointer arithmetic=== " << "\t";
	cout << endl;
	cout << *(p + 0) << "\t";
	cout << *(p + 1) << "\t";
	cout << *(p + 2) << "\t";
	cout << *(p + 3) << "\t";
	cout << "\n";
	cout << "------------------------------------------------------ " << "\t";
	cout << endl;
	cout << endl;
	cout << "==========Using loop to print array elements========== " << "\t";
	cout << endl;
	for(int i = 0; i<4; i++)
		{
		cout << *(p + i) << "\t";
	}
	cout << endl;
	cout << "------------------------------------------------------ " << "\t";
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
