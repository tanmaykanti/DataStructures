/*
 * PriorityQueue.h
 *
 *  Created on: 06-Dec-2019
 *      Author: tanmay
 */

#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_
struct pQueue{
	int data;
	int priority;
};
class PriorityQueue {
	const int SIZE;
	pQueue* array;
	int count;
	bool isEmpty();
	bool isFull();
public:
	PriorityQueue(int size);
	void Enqueue(int data,int prior);
	pQueue Dequeue();
	void PrintQueue();
	virtual ~PriorityQueue();
};

#endif /* PRIORITYQUEUE_H_ */
