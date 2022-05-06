#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;

int main()
{
	vector<string> names(5);

	names.at(0) = "Jon";
	names.at(1) = "Sondra";
	names.at(2) = "Ava";
	names.at(3) = "Grayson";
	names.at(4) = "Jeff";

	for (string name : names)
	{
		cout << name << endl;
	}

	// exception?
	try
	{
		names.at(5) = "Nicole";
	}
	catch (const out_of_range & err)
	{
		cout << err.what() << endl;
	}

	return 0;
}