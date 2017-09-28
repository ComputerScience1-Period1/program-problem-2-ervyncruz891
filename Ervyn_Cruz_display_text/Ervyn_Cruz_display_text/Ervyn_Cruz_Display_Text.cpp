/*
Ervyn Cruz - 9/22 1st Period

Assignment Name: Display Text

Introduction into C++ IDE Visual Studios
Create New Project & Display Text to Console

*/

// Libraries 
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noobalpha
#include <conio.h> // gives access to _khbit()

// Namespaces
using namespace std; //*

					 // Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while(!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Display Text
	cout << "Ervyn Cruz 1st Period Hello World!" << endl;
	pause(); // pauses to see the displayed text
	// Variables;
	int apples;
	float oranges;
	double fruits;
	bool grapes = true; // assume everyone likes grapes
	char go;
	int calc_1, calc_2, calc_3;
	
	// User Queries
	cout << "How many apples can you eat in a day? ";
	cin >> apples; // int
	cout << "How many liters of oranges should you use in the formula? ";
	cin >> oranges; // float?
	cout << "How would you split up 8 slices of fruits between 3 people? ";
	cin >> fruits;
	cout << "Do you like grapes : Y/N";
	cin >> go;
	if (go == 'Y' || go == 'y') {
		grapes = true; // freely changes the value from false to true
	}
	
	// After questions print out stored data
	cout << "You can eat " << apples << " number of apples. \n"; // \n creates a new line
	cout << "You can use " << oranges * 1/1000 << " liters of oranges in the formula." << endl; // different type new line
	cout << "You think of splitting up " << fruits * 1/3 << " of 8 slices of fruits between 3 people." << '\n';
	cout << boolalpha << "The answer evaluation of you liking grapes is " << grapes << endl;
	
	// Change Values
	
	cout << "Enter a number :";
	cin >> calc_1;
	cout << "Enter a number another number : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;
	// Pause
	pause();
}
