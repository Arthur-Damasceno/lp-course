clean:
	rm *.out *.o

quadratic: quadratic.o utils.o
	gcc -o quadratic.out quadratic.o utils.o
	./quadratic.out

cosine: cosine.o factorial.o utils.o
	gcc -o cosine.out cosine.o factorial.o utils.o
	./cosine.out

contest: contest.o
	gcc -o contest.out contest.o
	./contest.out

fibonacci: fibonacci.o
	gcc -o fibonacci.out fibonacci.o
	./fibonacci.out

temperature: temperature.o
	gcc -o temperature.out temperature.o
	./temperature.out

menu: menu.o factorial.o utils.o
	gcc -o menu.out menu.o factorial.o utils.o
	./menu.out

quadratic.o: quadratic/main.c
	gcc -c quadratic/main.c -o quadratic.o

cosine.o: cosine/main.c
	gcc -c cosine/main.c -o cosine.o

contest.o: contest/main.c
	gcc -c contest/main.c -o contest.o

fibonacci.o: fibonacci/main.c
	gcc -c fibonacci/main.c -o fibonacci.o

temperature.o: temperature/main.c
	gcc -c temperature/main.c -o temperature.o

menu.o: menu/main.c
	gcc -c menu/main.c -o menu.o

factorial.o: lib/factorial.c
	gcc -c lib/factorial.c

utils.o: lib/utils.c
	gcc -c lib/utils.c
