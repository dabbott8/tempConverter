#include <iostream>

using namespace std;



int main() 
{
	int celcTemp;
	celcTemp = 32;
	
	int farTemp;
	farTemp = 0;
	
	
	cout << "Enter tempurature in Fahrenheit:" << endl;
	cin >> farTemp;
	
	celcTemp = (farTemp - 32) /1.8;
	
	cout << "Your tempurature is " << celcTemp << " degrees celcius." << endl;
	return 0;
}
