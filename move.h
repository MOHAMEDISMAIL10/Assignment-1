#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

#include <iostream>
using namespace std;
//#pragma once
class Move
{
private:
	double x;
	double y;

public:
	Move(double a = 0, double b = 0)// sets x, y to a, b
	{
		x = a;
		y = b;
	};

    void	showmove()// shows current x, y values
	{
		cout << "x is : " << x << "\n" << "y is : " << y << "\n" << "\n";
	} ;

	Move add(const Move & m) 	// this function adds x of m to x of invoking object to get new x,
	{							// adds y of m to y of invoking object to get new y, creates a new
		Move temp;				// move object initialized to new x, y values and returns it
		temp.x = x + m.x;
		temp.y = y + m.y;

		return temp;
	};

	void reset(double a = 0, double b = 0)// resets x,y to a, b
	{
		x = a;
		y = b;
	};
};


#endif // MOVE_H_INCLUDED
