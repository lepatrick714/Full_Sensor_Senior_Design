CC=g++ -std=c++11 

all:
	mkdir -p ./bin
	$(CC) ./src/main.cpp -o ./bin/Permutations

clean: 
	rm -rf ./bin
