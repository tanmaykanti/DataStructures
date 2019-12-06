//============================================================================
// Name        : Queue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Queue.h"
#include "PriorityQueue.h"
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
	cout << "!!!Hello Priority Queue!!!" << endl;
	PriorityQueue pq(5);
	pq.Enqueue(10,5);
	pq.Enqueue(20,2);
	pq.Enqueue(30,0);
	pq.Enqueue(13,0);
	pq.Enqueue(24,6);
	pq.PrintQueue();
	pq.Dequeue();
	pq.PrintQueue();
	pq.Dequeue();
	pq.PrintQueue();
	pq.Dequeue();
	pq.PrintQueue();
	pq.Dequeue();
	pq.PrintQueue();
	return 0;
}
