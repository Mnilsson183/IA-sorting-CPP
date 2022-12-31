CXX=g++
CXXFLAGS:= -Wall -Wextra -pedantic-errors -std=c++0x
OUT=sorting
OBJS=build/generate.o build/merge.o build/bubble.o build/insertion.o build/sorting.o 

$(OUT): build/generate.o build/merge.o build/bubble.o build/insertion.o build/sorting.o
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(OUT)

build/generate.o: util/generate.cpp
	$(CXX) $(CXXFLAGS) -c util/generate.cpp -o build/generate.o

build/sorting.o: sorting.cpp
	$(CXX) $(CXXFLAGS) -c sorting.cpp -o build/sorting.o

build/merge.o: sort/merge.cpp
	$(CXX) $(CXXFLAGS) -c sort/merge.cpp -o build/merge.o

build/bubble.o: sort/bubble.cpp
	$(CXX) $(CXXFLAGS) -c sort/bubble.cpp -o build/bubble.o

build/insertion.o: sort/insertion.cpp
	$(CXX) $(CXXFLAGS) -c sort/insertion.cpp -o build/insertion.o
.PHONY:clean

clean:
	rm -rf build/*.o $(OUT)