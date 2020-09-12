// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Insertion.h"

// Ryan: Some comments in this file might be helpful.

Insertion::Insertion() { }

Insertion::~Insertion() { }

void Insertion::sortArray(int intArray[], int length)
{
	// Ryan: Always initialize all variables.
	int outside, inside, toCompare;
	for(outside=1; outside<length; outside++)
	{
		toCompare = intArray[outside];
		inside=outside-1;
		while(inside>=0 && toCompare>intArray[inside])
		{
			intArray[inside+1]=intArray[inside];
			inside--;
		}
		intArray[inside+1]=toCompare;
	}
}
