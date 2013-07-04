// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string username;
	string password;
	bool success;

	cout << "\tGame Designer's Network\n";

	do
	{
		cout << "\nUsername: ";
		cin >> username;

		if (username=="Meier" && password=="civilization")
		{
			cout << "\nHey, Sid.";
			success = true;
		}

		else if (username=="Miyamoto" && password=="mariobros")
		{
			cout << "\nWhat's up, Shigeru?";
			success=true;
		}

		else if (username== "Wright" && password=="thesims")
		{
			cout << "\nHow goes it, Will?";
			success=true;
		}

		else if (username=="guest" || password== "guest")
		{
			cout << "\nWelcome, guest.";
			success=true;
		}

		else 
		{
			cout << "\nYour login failed.";
			success=false;
		}

	} while(!success);

	return 0;
}

