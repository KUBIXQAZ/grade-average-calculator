// made my kubixqaz https://github.com/KUBIXQAZ //
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float sum = 0;
	int i = 0;

	while (true) {
		cout << "type your grade number " + to_string((i + 1)) + " or type 10 to see the results, your grade average:" << endl;

		float answer;
		cin >> answer;
		if (answer >= 1.00 && answer <= 6.00) {
			sum += answer;
			i++;
		}
		else if (answer == 10) {
			float average = sum / i;
			cout << "your result is: " + to_string(average) << endl;
			cout << "do you want to calculate your grade average again? then type yes everything else will exit program." << endl;
			string a;
			cin >> a;
			if (a == "yes") { system("cls"); main(); }
			else return 3;
		}
		else {
			cout << "you have to type number between 1.00 and 6.00 included 1, 6." << endl;
			cout << "!!!IF YOU WANT TO STOP / VIEW RESULTS TYPE 10!!!" << endl;
			continue;
		}
	}
}