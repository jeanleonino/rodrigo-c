all:clean
	gcc primeiro.c -o primeiro
	./primeiro

clean:
	rm -rf *~
	rm -rf primeiro

