//============================================================================
// Name        : CSC450_Week2_CriticalThinking.cpp
// Author      : Jacob Sullivan
//============================================================================

#include <iostream>
using namespace std;

string get_user_input_string() {

	//local variable
	string user_input = "";

	//output message to screen and recieve user input
	cout << "Enter word here: ";
	cin >> user_input;

	return user_input;
}

int main() {

	//variables
	string user_input_1 = "";
	string user_input_2 = "";
	string joined_string_1 = "";
	string joined_string_2 = "";
	string joined_string_3 = "";

	//gather first 2 string inputs and join them
	user_input_1 = get_user_input_string();
	user_input_2 = get_user_input_string();

	joined_string_1 = user_input_1 + " " + user_input_2;

	//output first set of joined sentances
	cout << "First two words joined togeather is: " << joined_string_1 << endl;

	//gather third and forth string inputs and join them
	user_input_1 = get_user_input_string();
	user_input_2 = get_user_input_string();

	joined_string_2 = user_input_1 + " " + user_input_2;

	//output 2nd set of joined sentances
	cout << "Next set of words joined togeather is: " << joined_string_2 << endl;

	//gather fith and six string inputs and join them
	user_input_1 = get_user_input_string();
	user_input_2 = get_user_input_string();

	joined_string_3 = user_input_1 + " " + user_input_2;

	//output 3rd set of sentances
	cout << "Last set of words joined togeather is: " << joined_string_3 << endl;

	//output an end of program message
	cout << "End of program. Have a nice day.";

}
