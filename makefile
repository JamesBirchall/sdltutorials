test:	tester.c
	gcc tester.c -g -o sdltester -lSDL

image01:	image01.c
	gcc image01.c -g -o sdlimage01 -lSDL

blitting02:	blitting02.c
	gcc blitting02.c loadimage.c blitting.c -Wall -g -o sdlblitting02 -lSDL

clean:
	rm -f sdlimage01 sdltester sdlblitting02
