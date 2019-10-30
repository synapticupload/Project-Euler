objects = main.o numlib.o

main: $(objects)
	gcc -o main $(objects)

main.o: main.c numlib.h
	gcc -c -g main.c

numlib.o: numlib.h
	gcc -c -g numlib.c

clean:
	rm main $(objects)
