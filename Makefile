all:
	gcc main.c -o unixtodos

install:
	cp unixtodos /bin/unixtodos
clean:
	rm unixtodos