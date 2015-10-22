#include <iostream>
#include "move.h"
using namespace std;

int main()
{
// sets x, y to a, b
	Move m1(1, 2);


	// shows current x, y values
	m1.showmove();


	// this function adds x of m to x of invoking object to get new x,
	// adds y of m to y of invoking object to get new y, creates a new
	// move object initialized to new x, y values and returns it
	Move m2(3, 4);
	m1=m1.add(m2);/// x=4   y=6
	m1.showmove();


	// resets x,y to a, b
	m1.reset(1, 2);/// x=1   y=2
	m1.showmove();



    return 0;
}
