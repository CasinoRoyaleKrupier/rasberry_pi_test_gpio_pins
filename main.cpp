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
		digitalWrite(pin, HIGH);
		cout << "Pin " << pin << ", status HIGH, " << i << "/10" << endl;
		delay(1000);
		system("clear");
		digitalWrite(pin, LOW);
		cout << "Pin " << pin << ", status LOW" << i << "/10" endl;
		delay(1000);
		system("clear");
	}

	return 0;
}
