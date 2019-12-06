/*
 * Queue.cpp
 *
 *  Created on: 06-Dec-2019
 *      Author: tanmay
 */
#include <iostream>
#include "Queue.h"
using namespace std;
Queue::Queue(int size):SIZE(size) {
	// TODO Auto-generated constructor stub
	count=0;
	array=new int[size];
	for(int i=0;i<size;i++)
	{
		array[i]=0;
	}
}
bool Queue::isEmpty()
{
	return count==0;
}
bool Queue::isFull()
{
	return count==SIZE;
}
void Queue::Enqueue(int data)
{
	if(isFull())
	{
		cout<<"Queue FULL"<<endl;
	}
	else
	{
		array[count++]=data;
	}
}
int Queue::Dequeue()
{
	if(isEmpty())
	{
		cout<<"Queue EMPTY"<<endl;
	}
	else
	{
		int temp=array[0];
		count--;
		for(int i=0;i<count;i++)
			array[i]=array[i+1];
		return temp;
	}
}
void Queue::PrintQueue(){
	for(int i=0;i<count;i++)
	{
		cout<<array[i]<<" "<<endl;
	}
	cout<<endl;
}
Queue::~Queue() {
	// TODO Auto-generated destructor stub
	delete []array;
}

