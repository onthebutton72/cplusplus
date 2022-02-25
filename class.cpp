#include <iostream>
using std::endl;
using std::string;
using std::cin;
using std::cout;

int adventurers;
int vanquished;
int survivors;
int gold = 900;
string lName;

int main () {
	cout << "Welcome to Lost Fortune" << endl;
	cout << "\nPlease enter the following for your personalized adventure" << endl;
	cout << "Enter a number: ";
	cin >> adventurers;
	cout << "\nEnter a number smaller than the first: ";
	cin >> vanquished;
	survivors = adventurers - vanquished;
	cout << "\nEnter your last name: ";
	cin >> lName;
	cout << "\nA brave group of " << adventurers << " set out on a quest -- in search";
	cout << " of the lost treasure of the ancient dwarves.  \nThe group was led by the";
	cout << " legendary rogue, " << lName << "." << endl;
	cout << "\nAlong the way, a band of marauding ogres ambushed the party.  All fought";
	cout << "\nbravely under the command of " << lName << " and the ogres were defeated, ";
	cout << "\nbut at a cost.  Of the adventurers, " << vanquished << " were vanquished, ";
	cout << "\nleaving just " << survivors << " in the group." << endl;
	cout << "\nThe party was about to give up all hopes.  But while leaving the deceased ";
	cout << "\nto rest, they stumbled upon a buried fortune, so the adventureres split ";
	cout << gold << " pieces. " << endl;
	cout << lName << " held on to the extra " << (gold % survivors);
	cout << " pieces to keep things fair of course.\n" << endl;
	return 0;
}