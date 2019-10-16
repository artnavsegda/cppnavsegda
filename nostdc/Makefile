CXXFLAGS = -nodefaultlibs -lc -fno-exceptions

hello: wrapper.o hello.o
	g++ $(CXXFLAGS) -o hello hello.o wrapper.o

auto: wrapper.o auto.o
	g++ $(CXXFLAGS) -o auto auto.o wrapper.o

clean:
	rm hello auto *.o
