#include <iostream> 

using namespace std;

int main()
{

//	cout << "Hello, World!\n";
/* variables */
	char my_char;
	int start_num;
	int stop_num;
	int step_num;
	double cel;
	double fah;
// # prompt
// input Fahrenheit start, stop, and step values
	cout << "enter start Fahrenheit: ";
	cin >> start_num;
	cout << "enter stop Fahrenheit: ";
	cin >> stop_num;
	cout << "enter step: ";
	cin >> step_num;
	
	cout << "fah" << "	" << "cel" << endl;
	cout << "---" << "	" << "---" << endl;
	
// * set precision command

// ## display loop
	for (fah = start_num; fah <= stop_num; fah += step_num)
	{
// ## conversion formula
		cel = 5.0 * (fah - 32) / 9;
// ## display formatted fah and cel values
		cout << fah << "	" << cel << endl;
	}
	cout << my_char << endl;
	

	return 0;
}

