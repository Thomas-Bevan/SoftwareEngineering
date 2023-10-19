#include <iostream>
using namespace std;

void displayBanner(string message)
{
	int stringLen = message.length();
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void displayWithinBanner(string message)
{
	displayBanner(message);
	cout << "* " << message << " *" << endl;
	displayBanner(message);
}

int main()
{
	const string message = "Welcome to Computer Science";



	//Write the banner above
	displayWithinBanner(message);

	//Tell the calling shell all is well
	return 0;
}