all:
	gcc -g -o foursquares main.c foursquares.c -lm

test: all
	./maintest.tcl ./foursquares

clean:
	rm foursquares
