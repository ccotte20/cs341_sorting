// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Bubble.h"

Bubble::Bubble() { }

Bubble::~Bubble() { }

void Bubble::sortArray(int intArray[], int length)
{
    bool done;
	done=false;
	while(!done)
	{
		done=true;
		for(int i=0; i+1<length; i++)
		{
			if(intArray[i]<intArray[i+1])
			{
				int temp;
				temp=intArray[i];
				intArray[i]=intArray[i+1];
				intArray[i+1]=temp;
				done=false;
			}
		}
	}
}
