// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef SORT_H
#define SORT_H

// Header File for Sort class. 
class Sort
{
    // Public Constructors/Destructors/Member Methods
    public:   
		// Ryan: We should always include the default Constructor - just in case.
    	virtual ~Sort() {}
		// Member Methods
        virtual void sortArray(int intArray[], int length) = 0;
};
#endif
