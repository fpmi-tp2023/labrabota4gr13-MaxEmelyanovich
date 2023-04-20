bin/program: obj/main.o obj/server.o
	gcc -o bin/program obj/main.o obj/server.o -lsqlite3

obj/main.o: src/main.c
	gcc -c -o obj/main.o src/main.c

obj/server.o: src/server.c
	gcc -c -o obj/server.o src/server.c

clean:
	rm -rf obj/*.o bin/program
