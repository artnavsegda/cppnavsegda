CXXFLAGS = -nodefaultlibs -lc -fno-exceptions

TARGETS = hello auto decltype foreach namespace defaultargs

all: $(TARGETS)

hello: wrapper.o hello.o
	g++ $(CXXFLAGS) -o hello hello.o wrapper.o

%: %.o
	g++ $(CXXFLAGS) -o $@ $^

clean:
	rm $(TARGETS) *.o
