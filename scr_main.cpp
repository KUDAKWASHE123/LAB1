// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
//We can not modify  a class’s interface because most of the time they are close sources 
//however we are able to perform imlementation because we might need to perform a function that is 
//different from the given functions 
	auto myScreen = Screen{10,10,'-'};
myScreen.draw_square(5,5,5);
	myScreen.display();
	cout << endl;
	return 0;
}
