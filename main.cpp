#include <iostream>
#include <stdlib.h>
#include <wiringPi.h>

using namespace std;

int main() {
	wiringPiSetupGpio();
	int pin;

	system("clear");
	cout << "GPIO pin: ";
	cin >> pin;
	cout << endl;

	pinMode(pin, OUTPUT);
	system("clear");

	for(int i = 1; i <= 10; i++) {
		cout << "--------------------------------------------------" << endl;
		digitalWrite(pin, HIGH);
		cout << "> Pin " << pin << endl;
		cout << "> Status HIGH,	" << i << "/10" << endl;
		cout << "--------------------------------------------------" << endl;
		delay(1000);
		system("clear");
		cout << "--------------------------------------------------" << endl;
		digitalWrite(pin, LOW);
		cout << "> Pin " << pin << endl;
                cout << "> Status LOW,	" << i << "/10" << endl;
		cout << "--------------------------------------------------" << endl;
		delay(1000);
		system("clear");
	}

	return 0;
}
