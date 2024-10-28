# Target to compile the object file
Source: Source.o
	g++ Source.o -o Source.exe

# Target to compile the C++ program
Source.o: Source.cpp
	g++ -c Source.cpp -o Source.o

# Target to run the program (interactively)
run: Source
	./Source.exe

# Target to compile the object Test file
test: test.o
	g++ test.o -o test.exe

# Target to compile the C++ Test program
test.o: test.cpp
	g++ -c test.cpp -o test.o

# Target to run the Test program
test: test
	./test.exe

# Target to clean up compiled files
clean:
	rm -f Source.o test.o Source.exe test.exe
