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

calculator: calculator.o calculatorlib.o
	gcc -o calculator.out calculator.o calculatorlib.o -lm
	./calculator.out

fileOperations: fileOperations.o calculatorlib.o
	gcc -o fileOperations.out fileOperations.o calculatorlib.o -lm
	./fileOperations.out

fileTriangle: fileTriangle.o
	gcc -o fileTriangle.out fileTriangle.o
	./fileTriangle.out

vector: vector.o calculatorlib.o
	gcc -o vector.out vector.o calculatorlib.o -lm
	./vector.out

matrix: matrix.o
	gcc -o matrix.out matrix.o
	./matrix.out

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

calculator.o: calculator/main.c
	gcc -c calculator/main.c -o calculator.o

fileOperations.o: fileOperations/main.c
	gcc -c fileOperations/main.c -o fileOperations.o

fileTriangle.o: fileTriangle/main.c
	gcc -c fileTriangle/main.c -o fileTriangle.o

vector.o: vector/main.c
	gcc -c vector/main.c -o vector.o

matrix.o: matrix/main.c
	gcc -c matrix/main.c -o matrix.o

factorial.o: lib/factorial.c
	gcc -c lib/factorial.c

utils.o: lib/utils.c
	gcc -c lib/utils.c

calculatorlib.o: calculator/calculator.c
	gcc -o calculatorlib.o -c calculator/calculator.c
