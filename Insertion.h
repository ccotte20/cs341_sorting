// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#ifndef INSERTION_H
#define INSERTION_H
#include "Sort.h"
// Header File for Insertion class. 
class Insertion : public Sort
{
    // Public Constructors/Destructors/Member Methods
    public:
		Insertion();
		// Ryan: We want this to be a virtual Destructor because of the below method...
		~Insertion();
        virtual void sortArray(int intArray[], int length);
};
#endif