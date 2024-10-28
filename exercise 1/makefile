# Target to compile the object file
source: source.o
	g++ source.o -o source.exe

# Target to compile the C++ program
source.o: source.cpp
	g++ -c source.cpp -o source.o

# Target to run the program (interactively)
run: source
	./source.exe

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
	rm -f source.o test.o source.exe test.exe
