// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6,'#'};
myScreen.move("UP");
myScreen.move("UP");
myScreen.move("UP");
myScreen.move("FORWARD");
myScreen.set('*');
    
	myScreen.display();
	cout << endl;
	return 0;
}
