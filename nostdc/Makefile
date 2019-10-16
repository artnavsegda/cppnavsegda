CXXFLAGS = -nodefaultlibs -lc -fno-exceptions

TARGETS = hello auto decltype foreach

all: $(TARGETS)

hello: wrapper.o hello.o
	g++ $(CXXFLAGS) -o hello hello.o wrapper.o

auto: wrapper.o auto.o
	g++ $(CXXFLAGS) -o auto auto.o wrapper.o

%: wrapper.o %.o
	g++ $(CXXFLAGS) -o $@ $^

clean:
	rm $(TARGETS) *.o
