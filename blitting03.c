#include "librariesrequired.h"
#include "loadimage.h"
#include "blitting.h"

#define SCREEN_HEIGHT 768
#define SCREEN_WIDTH 1024
#define SCREEN_BPP 32

SDL_Surface *message = NULL;
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

  message = loadImage( "01image2.png" );

  SDL_Flip( screen );

  applySurface(0, 0, message, screen);

  SDL_Flip( screen );

  SDL_Delay( 3000 );
  
  SDL_FreeSurface( message );
  SDL_FreeSurface( screen );

  SDL_Quit();
  
  return 0;
}


