// main.cpp
// main program file
// programmer: alex
// Nov 9 2016


#include <iostream>
using namespace std;

// display array function
void show_array(int arr, int arr_size);

int main() {

	// write some code!



	return 0;
}

void show_array(string arr, int arr_size) {

	cout << "Array Values: \r";

	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\r";

}