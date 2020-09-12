// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef BUBBLE_H
#define BUBBLE_H
#include "Sort.h"

// Header File for Bubble class. 
class Bubble : public Sort
{
	public:
		Bubble();
		// Ryan: This should be a virtual Destructor due to the method below...
		~Bubble();
		virtual void sortArray(int intArray[], int length);
};
#endif