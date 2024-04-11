clean:
	rm *.out *.o

quadratic: quadratic.o
	gcc -o quadratic.out quadratic.o -lm
	./quadratic.out

cosine: cosine.o factorial.o
	gcc -o cosine.out cosine.o factorial.o -lm
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

factorial.o: lib/factorial.c
	gcc -c lib/factorial.c
