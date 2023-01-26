#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
}

void Addition(float A, float B) {
	cout << "\n" << A << " + " << B << " = " << A + B << endl;
}
void Subtraction(float A, float B) {
	cout << "\n" << A << " - " << B << " = " << A - B << endl;
}
void Multiplication(float A, float B) {
	cout << "\n" << A << " * " << B << " = " << A * B << endl;
}
void Division(float A, float B) {
	cout << "\n" << A << " / " << B << " = " << A / B << endl;
}

int main() {
	int choice;
	float A;
	float B;

	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) {
		Addition(A, B);
	}
	if (choice == 2) {
		Subtraction(A, B);
	}
	if (choice == 3) {
		Multiplication(A, B);
	}
	if (choice == 4) {
		Division(A, B);
	}

	return 0;
}