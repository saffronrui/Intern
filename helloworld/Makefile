
hello: helloworld.o app.o
	gcc helloworld.o app.o -o hello
helloworld.o: helloworld.c app.h
	gcc	-c helloworld.c -o helloworld.o
app.o: app.c app.h
	gcc -c app.c -o app.o
clean:
	rm -rf helloworld.o app.o

