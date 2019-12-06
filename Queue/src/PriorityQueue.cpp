/*
 * PriorityQueue.cpp
 *
 *  Created on: 06-Dec-2019
 *      Author: tanmay
 */
#include <iostream>
#include "PriorityQueue.h"
using namespace std;
PriorityQueue::PriorityQueue(int size):SIZE(size) {
	// TODO Auto-generated constructor stub
	count=0;
	array=new pQueue[size];
	for(int i=0;i<size;i++)
	{
		array[i]={0};
	}
}
bool PriorityQueue::isEmpty()
{
	return count==0;
}
bool PriorityQueue::isFull()
{
	return count==SIZE;
}
void PriorityQueue::Enqueue(int data,int prior)
{
	if(isFull())
	{
		cout<<"Priority Queue FULL"<<endl;
	}
	else
	{
		array[count].data=data;
		array[count].priority=prior;
		count++;
	}
}
pQueue PriorityQueue::Dequeue()
{
	if(isEmpty())
	{
		cout<<"Priority Queue EMPTY"<<endl;
	}
	else
	{
		int tempPriority=array[0].priority;
		int index=0;
		for(int i=1;i<count;i++)
		{

			if(array[i].priority<tempPriority)
			{
				tempPriority=array[i].priority;
				index=i;
			}
		}
		pQueue temp=array[index];
		for(int i=index;i<count-1;i++)
		{
			array[i]=array[i+1];
		}
		count--;
		return temp;
	}
}
void PriorityQueue::PrintQueue(){
	for(int i=0;i<count;i++)
	{
		cout<<array[i].data<<" "<<array[i].priority<<endl;
	}
	cout<<endl;
}
PriorityQueue::~PriorityQueue() {
	// TODO Auto-generated destructor stub
	delete []array;
	cout<<"Memory freed"<<endl;
}

