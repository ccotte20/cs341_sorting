# Honor Pledge:
# I pledge that I have neither given nor 
# received any help on this assignment.
# Clark Otte
A1.exe: Driver.o Bubble.o Insertion.o 
	g++ Driver.o Bubble.o Insertion.o -o A1.exe

Driver.o: Driver.cpp
	g++ -c Driver.cpp -o Driver.o

Bubble.o: Bubble.cpp
	g++ -c Bubble.cpp -o Bubble.o

Insertion.o: Insertion.cpp
	g++ -c Insertion.cpp -o Insertion.o
	
clean:
	rm -f Driver.o Bubble.o Insertion.o A1.exe