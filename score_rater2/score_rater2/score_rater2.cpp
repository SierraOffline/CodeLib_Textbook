//Score Rater 2.0
//Demonstrates an else clause

#include <iostream>
using namespace std;

int main()
{
	int score;
	cout << "Enter your score:";
	cin >> score;

	if (score >= 1000)
	{
		cout << "You scored " << score << ". Impressive!\n";
	}
	else
	{
		cout << "You scored " << score << ". Try harder.\n";
	}

	return 0;
}