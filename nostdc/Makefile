CXXFLAGS = -nodefaultlibs -lc -fno-exceptions

TARGETS = hello auto decltype foreach namespace defaultargs newdelete reference static_cast template lambda

all: $(TARGETS)

hello: wrapper.o hello.o
	g++ $(CXXFLAGS) -o hello hello.o wrapper.o

newdelete: wrapper.o newdelete.o
	g++ $(CXXFLAGS) -o newdelete newdelete.o wrapper.o

%: %.o
	g++ $(CXXFLAGS) -o $@ $^

clean:
	rm $(TARGETS) *.o
