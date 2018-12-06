#include <iostream>
#include <stdlib.h>
#include <wiringPi.h>

int main() {
	wiringPiSetupGpio();
	int pin;

	system("clear");
	cout << "GPIO pin: " << endl;
	cin >> pin;

	pinMode(pin, OUTPUT);
	system("clear");

	for(;;) {
		digitalWrite(pin, HIGH);
		cout << "Pin " << pin << ", status HIGH" << endl;
		delay(1000);
		system("clear");
		digitalWrite(pin, LOW);
		cout << "Pin " << pin << ", status LOW" << endl;
		delay(1000);
		system("clear");
	}

	return 0;
}
