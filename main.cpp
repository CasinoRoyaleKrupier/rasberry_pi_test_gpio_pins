#include <iostream>
#include <stdlib.h>
#include <wiringPi.h>

using namespace std;

int main() {
	wiringPiSetupGpio();
	int pin, frequency;

	system("clear");
	cout << "GPIO pin: ";
	cin >> pin;
	cout << endl << "Frequency: ";
	cin >> frequency;
	cout << endl;

	pinMode(pin, OUTPUT);
	system("clear");

	for(int i = 1; i <= 10; i++) {
		cout << "--------------------------------------------------" << endl;
		digitalWrite(pin, HIGH);
		cout << "> Pin: " << pin << endl;
		cout << "> Frequency: " << frequency << endl;
		cout << "> Status: HIGH,	" << i << "/10" << endl;
		cout << "--------------------------------------------------" << endl;
		delay(frequency);
		system("clear");
		cout << "--------------------------------------------------" << endl;
		digitalWrite(pin, LOW);
		cout << "> Pin " << pin << endl;
		cout << "> Frequency: " << frequency << endl;
        cout << "> Status LOW,	" << i << "/10" << endl;
		cout << "--------------------------------------------------" << endl;
		delay(frequency);
		system("clear");
	}

	return 0;
}
