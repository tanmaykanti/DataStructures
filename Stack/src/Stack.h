/*
 * Stack.h
 *
 *  Created on: 06-Dec-2019
 *      Author: tanmay
 */

#ifndef STACK_H_
#define STACK_H_

class Stack {
	const int SIZE;
	int* array;
	int count;
	bool isEmpty();
	bool isFull();
public:
	Stack(int size);
	~Stack();
	void Push(int data);
	int Pop();
	void PrintStack();
};

#endif /* STACK_H_ */
