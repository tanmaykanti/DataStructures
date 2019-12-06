/*
 * Queue.h
 *
 *  Created on: 06-Dec-2019
 *      Author: tanmay
 */

#ifndef QUEUE_H_
#define QUEUE_H_

class Queue {
	const int SIZE;
	int* array;
	int count;
	bool isEmpty();
	bool isFull();
public:
	Queue(int);
	void Enqueue(int data);
	int Dequeue();
	void PrintQueue();
	virtual ~Queue();
};

#endif /* QUEUE_H_ */
