// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Sort.h"
#include "Insertion.h"
#include "Bubble.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

int getLength(std::string inF)
{
	// Declare variables necessary for file input/output
	std::ifstream inStream;
	std::ofstream outStream;
	
	int l(0);
	int inputInt(0);
	
	// Open file, check for errors and get the amount of values
	inStream.open(inF.c_str());
	if(inStream.fail())
	{
		std::cout<<"Input file opening failed" << std::endl;
		exit(1);
	}
	
	while(inStream>>inputInt)
	{
		l++;
	}
	inStream.close();
	
	return l;
}


// Main Function
int main()
{
	char cont;
	cont='Y';
	
	while(cont!='N')
	{
		// Get the file name for input
		std::string inputFile;
		std::cout<<"Enter input file name"<<std::endl;
		std::cin>>inputFile;
	
		// declare length variable and get length of file
		int length(0);
		length=getLength(inputFile);
	
		// Declare array and file variables, open file, check for errors, and place values in array
		int intArray[length];
		int inputInt(0);
		std::ifstream inStream;
		std::ofstream outStream;
	
		inStream.open(inputFile.c_str());
		if(inStream.fail())
		{
			std::cout<<"Input file opening failed" << std::endl;
			exit(1);
		}
	
		int x(0);
		while(inStream>>inputInt)
		{
			intArray[x]=inputInt;
			x++;
		}
		inStream.close();
	
		// Get the type of sort wanted from user
		int choice(0);
	
		while(choice!=1 && choice!=2)
		{
			std::cout<<"Press 1 for Bubble Sort, 2 for Insertion Sort"<<std::endl;
			std::cin>>choice;
			if(choice!=1 && choice!=2)
				std::cout<<"Invalid option"<<std::endl;
		}
	
		// Do sort chosen
		if(choice==1)
		{
			Bubble bub;
			bub.sortArray(intArray, length);
		}
		else if(choice==2)
		{
			Insertion ins;
			ins.sortArray(intArray, length);
		}
	
		// Get file name for output
		std::string outputFile;
		std::cout<<"Enter output file name"<<std::endl;
		std::cin>>outputFile;
	
		// Open file, check for errors, and write sorted array
		outStream.open(outputFile.c_str());
	
		if(outStream.fail())
		{
			std::cout<<"Output file opening failed" << std::endl;
			exit(1);
		}
	
		for(int i=0; i<length; i++)
		{
			outStream<<intArray[i]<<" ";
		}
		outStream.close();
		
		// Ask to continue, with error checking
		char tempcont;
		tempcont=' ';
		while(tempcont!='Y' && tempcont!='N')
		{
			std::cout<<"Continue? Y or N"<<std::endl;
			std::cin>>cont;
			tempcont=cont;
			if(cont!='Y' && cont!='N')
				std::cout<<"Invalid Option"<<std::endl;
		}
	}
	
    return 0;
}
