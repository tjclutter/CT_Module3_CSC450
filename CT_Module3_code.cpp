
#include <iostream>
using namespace std;

int main() {
	//declare variables for three integers
	int num1;
	int num2;
	int num3;

	//prompt user for the integers and store in variables
	cout << "Enter number one: ";
	cin >> num1;
	cout << "Enter number two:";
	cin >> num2;
	cout << "Enter number three: ";
	cin >> num3;

	//declare three new pointer and assign them to
	//the corresponding integer variable
	int *num1Pointer = new int(num1);
	int *num2Pointer = new int(num2);
	int *num3Pointer = new int(num3);

	cout << "Value First number pointer is referencing after delete: " << &num1Pointer << endl;
		cout << "Value second number pointer is referencing after delete: " << &num2Pointer << endl;
		cout << "Value third number pointer is referencing after delete: " << &num3Pointer << endl;

	//display contents of num1pointer address, the value its referencing
	//and the value of the original num1 variable.
	cout << endl;
	cout << "First number pointer address: " << num1Pointer << endl;
	cout << "Value First number pointer is referencing: " << *num1Pointer << endl;
	cout << "First number value: " << num1 << endl;

	//display contents of num2pointer address, the value its referencing
	//and the value of the original num2 variable.
	cout << endl;
	cout << "Second number pointer address: " << num2Pointer << endl;
	cout << "Value second number pointer is referencing: " << *num2Pointer << endl;
	cout << "Second number value: " << num2 << endl;

	//display contents of num3pointer address, the value its referencing
	//and the value of the original num3 variable.
	cout << endl;
	cout << "Third number pointer address: " << num3Pointer << endl;
	cout << "Value third number pointer is referencing: " << *num3Pointer << endl;
	cout << "Third number value: " << num3 << endl;

	//delete pointers
	delete[] num1Pointer;
	delete[] num2Pointer;
	delete[] num3Pointer;

	cout << "Value First number pointer is referencing after delete: " << &num1Pointer << endl;
	cout << "Value second number pointer is referencing after delete: " << &num2Pointer << endl;
	cout << "Value third number pointer is referencing after delete: " << &num3Pointer << endl;


}
