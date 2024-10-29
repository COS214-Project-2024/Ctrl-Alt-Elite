main:
	g++ -g -std=c++11 *cpp -o main

run:
	./main

debug: main
	gdb ./main

clean:
	rm -f *o main

clear:
	clear

valgrind: main
	valgrind --leak-check=full --show-leak-kinds=all ./main