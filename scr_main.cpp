// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{10,10,'-'};
myScreen.draw_square(5,5,5);
	myScreen.display();
	cout << endl;
	return 0;
}
