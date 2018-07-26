#include <iostream>
#include "StopWatch.h"

using namespace std;
int main()
{
	StopWatch myStopWatch;
   double timeTaken = myStopWatch.getProcessTime();
        // The section of the code we want to check the time is given here
        for ( int i = 0; i < 1000; i++)
            cout << "M" << endl;
    timeTaken = myStopWatch.getProcessTime() - timeTaken;
    
    cout << "Time taken to run a code: " << timeTaken << endl;
    
	return 0;
}
