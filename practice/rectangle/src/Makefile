# declare variables
# declare compiler
CC=g++

CFLAGS=-c -Wall

#LDFLAGS=-L/System/Library/Frameworks/Accelerate.framework/Versions/Current/Frameworks/vecLib.framework/Versions/Current/Headers/
#CPPFLAGS=-I/System/Library/Frameworks/Accelerate.framework/Versions/Current/Frameworks/vecLib.framework/Versions/Current/Headers/

#LDFLAGS=-L/usr/local/opt/openblas/lib
#CPPFLAGS=-I/usr/local/opt/openblas/include
all: run

run: main.o rectangle.o
	$(CC) main.o rectangle.o -o run

main.o: main.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) main.cpp $(LDFLAGS)

rectangle.o: rectangle.cpp
	$(CC) $(CFLAGS) rectangle.cpp

clean:
	rm -rf *o run
