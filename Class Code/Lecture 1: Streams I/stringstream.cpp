#include <sstream>
#include <iostream>

using namespace std;

int main() {
	ostringstream oss("Ito En Greem Tea ");

	oss << 16.9 << string(" Ounce ");

	oss << "(Pack of " << 12 << ")";

	cout << oss.str() << endl;
	
	istringstream iss(oss.str());
	double amount;
	string unit;

	iss >> amount >> unit;

	cout << "Now each bottle is sold as: " << amount/2 << " " << unit;

	return 0;
}
