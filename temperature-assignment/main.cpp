#include <iostream> 

using namespace std;

int main()
{

	cout << "Hello, World!\n";
	char my_char;
	int start_num;
	int stop_num;
	int step_num;
	double cel;

	cout << "enter :";
	cin >> start_num;
	cout << "enter :";
	cin >> stop_num;
	cout << "enter :";
	cin >> step_num;
	
	for (int fah = start_num; fah <= stop_num; fah += step_num)
	{
		cel = 5.0 * (fah - 32) / 9;
		cout << fah << "celsius is " << cel;
	}
	cout << my_char << endl;
	

	return 0;
}

