test:	tester.c
	gcc tester.c -g -o sdltester -lSDL

image01:	image01.c
	gcc image01.c -g -o sdlimage01 -lSDL

blitting02:	blitting02.c
	gcc blitting02.c loadimage.c blitting.c -Wall -g -o sdlblitting02 -lSDL

blitting03:	blitting03.c
	gcc blitting03.c loadimage2.c blitting.c -Wall -g -o sdlimage02 -lSDL -lSDL_image
	
clean:
	rm -f sdlimage01 sdltester sdlblitting02
