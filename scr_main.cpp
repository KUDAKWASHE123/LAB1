// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6,' '};
     
for(int i=1;i<=6;i++)
{
myScreen.move(i,1);
myScreen.set('*');
}
myScreen.move(1,6);
myScreen.set('*');
myScreen.move(6,6);
myScreen.set('*');
myScreen.move(2,4);
myScreen.set('*');
myScreen.move(3,2);
myScreen.set('*');
myScreen.move(5,4);
myScreen.set('*');
myScreen.move(4,2);
myScreen.set('*');
    
	myScreen.display();
	cout << endl;
	return 0;
}
