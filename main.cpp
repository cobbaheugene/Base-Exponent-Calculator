#include <iostream>
using namespace std;

int main() {
	int variableB;
	float variableA, solution;
	int i; //i is for the position. an incremental value
	int power = 1;

	cout << "Enter value of the base: ";
	cin >> variableA;
	cout << "Enter value of the exponent: ";
	cin >> variableB;

	//we use the for loop here to derive the answer for the
	//function of the integer and real number, since the steps of the computation will be repeated
	for (i = 1; i <= variableB; i++) {
		power *= variableA; //
	}

	solution = power;
	cout << "Your answer is = " << solution << endl;

	cout<<"I am a girl"<<endl;
	system("pause>0");
	return 0;
}
