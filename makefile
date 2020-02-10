objects = main.o numlib.o strmath.o

main: $(objects)
	gcc -o main $(objects)

main.o: main.c numlib.h strmath.h
	gcc -c -g main.c

numlib.o: numlib.h
	gcc -c -g numlib.c

strmath.o: strmath.h
	gcc -c -g strmath.c

clean:
	rm main $(objects)
