// LAB07.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printArray(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}
	cout << endl;
}
void swapValue(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sortDescending(int* p, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (*(p + j) < *(p + j + 1)) {
				swapValue((p + j), (p + j + 1));
			}
		}
	}
}
int main() {
	int arr[] = { 6, 8, 1, 1, 1, 3, 0, 0, 5, 8 };
	int size = 10;
	printArray(arr, size);
	sortDescending(arr, size);
	printArray(arr, size);
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
