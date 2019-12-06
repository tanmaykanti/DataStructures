//============================================================================
// Name        : Queue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
	cout << "!!!Hello Queue!!!" << endl; // prints !!!Hello World!!!
	Queue q(5);
	q.Dequeue();
	q.Enqueue(3);
	q.Enqueue(5);
	q.Enqueue(10);
	q.Enqueue(67);
	q.Enqueue(13);
	q.Enqueue(45);
	q.PrintQueue();
	q.Dequeue();
	q.Dequeue();
	q.PrintQueue();
	return 0;
}
