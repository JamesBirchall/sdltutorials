#include "librariesrequired.h"
#include "loadimage.h"
#include "blitting.h"

#define SCREEN_HEIGHT 768
#define SCREEN_WIDTH 1024
#define SCREEN_BPP 32

SDL_Surface *message = NULL;
SDL_Surface *background1 = NULL;
SDL_Surface *background2 = NULL;
SDL_Surface *background3 = NULL;
SDL_Surface *background4 = NULL;
SDL_Surface *screen = NULL;

int main(int argc, char **argv){

  if( SDL_Init( SDL_INIT_EVERYTHING ) == -1){
    printf("error: could not init\n");
    return 1;
  }

  screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );

  if( screen == NULL ){
    printf("error: setting video mode to surface\n");
    return 1;
  }

  SDL_WM_SetCaption("Guls and Truls...", NULL);

  message = loadImage( "hello.bmp" );
  background1 = loadImage( "blittingimage01.bmp" );
  background2 = loadImage( "blittingimage02.bmp" );
  background3 = loadImage( "blittingimage03.bmp" );
  background4 = loadImage( "blittingimage04.bmp" );

  applySurface(0, 0, background1, screen);
  applySurface(512, 0, background2, screen);
  applySurface(0, 384, background3, screen);
  applySurface(512, 384, background4, screen);

  SDL_Flip( screen );

  applySurface(412, 334, message, screen);

  SDL_Flip( screen );

  SDL_Delay( 3000 );
  
  SDL_FreeSurface( message );
  SDL_FreeSurface( background1 );
  SDL_FreeSurface( background2 );
  SDL_FreeSurface( background3 );
  SDL_FreeSurface( background4 );
  SDL_FreeSurface( screen );

  SDL_Quit();
  
  return 0;
}


