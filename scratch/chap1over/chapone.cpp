//doing the assignment in the book
//get 3 game scores from user and display average

#include <iostream>
using namespace std;

int main()
{
	int age, dreams, fingers;

	// get numbers
	cout << "Welcome to Useless Averages!\n\n";
	
	cout << "How old are you? ";
	cin >> age;

	cout << "How old do you wish you were? ";
	cin >> dreams;

	cout << "How many fingers do you have? ";
	cin >> fingers;

	//do the math

	cout << "\n\nYour useless average is: " << (age + dreams + fingers)/3 << endl;

	cout << "Awesome!" << endl;

	return 0;

}