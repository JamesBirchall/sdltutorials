test:	tester.c
	gcc tester.c -g -o sdltester -lSDL

image01:	image01.c
	gcc image01.c -g -o sdlimage01 -lSDL

clean:
	rm sdlimage01 sdltester
