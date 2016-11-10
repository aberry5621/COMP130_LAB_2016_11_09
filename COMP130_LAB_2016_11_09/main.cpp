// main.cpp
// main program file
// programmer: alex
// Nov 9 2016


#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// display array function
void show_array(int arr, int arr_size);

int main() {

	// write some code!
	string text("GDP is commonly used as an indicator of the economic health of a country, as well as a gauge of a country's standard of living. For example, from 2004 to 2014 France’s GDP increased by 53.1%, while Japan’s increased by 6.9% during the same period");
	stringstream ss(text);

	
	// readout
	string word;

	cout << "The words:" << endl;

	while (!ss.eof()) {
		ss >> word;

		cout << "----------------------------"<< endl;
		cout << "operating on word: " << word << endl;

		// remove all but alphas
		char first = static_cast<int>(word.at(0));

		if ((first > 47) && (first < 58)) {
			cout << "found a number at word: " << word << endl;
			word = "";
		}

		// do not include single letters: "I", "a", etc
		if (word.length() == 1)
		{
			cout << "single alpha, whack it: " << word << endl;
			word = "";
		}

		// find and remove all "'s" and "U.S."
		// 's
		int apos_s_idx = word.find("’s", 0);
		cout << "word: " << word << endl;
		if (apos_s_idx > 0) {
			cout << "’s found" << endl;
			word.erase(apos_s_idx, 2);
			cout << "removed ’s from word: " << word << endl;
		}
		// remove ,
		int comma_idx = word.find(",", 0);
		if (comma_idx > 0) {
			cout << "comma found" << endl;
			word.erase(comma_idx, 2);
			cout << "removed comma from word: " << word << endl;
		}
		// remove .
		int period_idx = word.find(".", 0);
		if (period_idx > 0) {
			cout << "period found" << endl;
			word.erase(period_idx, 2);
			cout << "removed period from word: " << word << endl;
		}



		cout << "post-op result word: " << word << endl;

	}

	
	// convert all letters to lower case
	
	// sort and display array and word occurrence

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