CXXFLAGS = -nodefaultlibs -lc

hello: wrapper.o hello.o
	g++ -o hello hello.o wrapper.o

clean:
	rm hello
