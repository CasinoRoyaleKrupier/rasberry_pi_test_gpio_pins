#include <iostream>
#include <stdlib.h>
#include <wiringPi.h>

using namespace std;

int main() {
	wiringPiSetupGpio();
	int pin, frequency, quantity;

	system("clear");
	cout << "GPIO pin: ";	cin >> pin;
	cout << "Frequency: ";	cin >> frequency;
	cout << "Quantity: ";	cin >> quantity;
	cout << endl;

	pinMode(pin, OUTPUT);
	system("clear");

	for(int i = 1; i <= quantity; i++) {
		cout << "--------------------------------------------------" << endl;
		digitalWrite(pin, HIGH);
		cout << "> Pin: " << pin << endl;
		cout << "> Frequency: " << frequency << endl;
		cout << "> Status: HIGH,	" << i << "/" << quantity << endl;
		cout << "--------------------------------------------------" << endl;
		delay(frequency);
		system("clear");
		cout << "--------------------------------------------------" << endl;
		digitalWrite(pin, LOW);
		cout << "> Pin: " << pin << endl;
		cout << "> Frequency: " << frequency << endl;
        	cout << "> Status: LOW,	" << i << "/" << quantity << endl;
		cout << "--------------------------------------------------" << endl;
		delay(frequency);
		system("clear");
	}

	return 0;
}
