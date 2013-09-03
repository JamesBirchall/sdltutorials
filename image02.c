#include "librariesrequired.h"

#define SCREENHEIGHT 768
#define SCREENWIDTH 1024

int main(int argc, char **argv){

  SDL_Surface* image = NULL;	//for my image
  SDL_Surface* image2 = NULL;
  SDL_Surface* screen = NULL;	//whats visible on screen

  SDL_Init( SDL_INIT_EVERYTHING );

  SDL_WM_SetCaption( "Herberts magical images", NULL);

  screen = SDL_SetVideoMode(SCREENWIDTH, SCREENHEIGHT, 32, SDL_HWSURFACE);

  image = SDL_LoadBMP("01image.bmp");
  image2 = SDL_LoadBMP("01image2.bmp");

  SDL_BlitSurface( image, NULL, screen, NULL);

  SDL_Flip(screen);

  SDL_Delay( 4000 );

  SDL_BlitSurface( image2, NULL, screen, NULL);
  
  SDL_Flip(screen);

  SDL_Delay( 4000 );

  SDL_FreeSurface( image );
  SDL_FreeSurface( image2 );
  SDL_FreeSurface( screen );

  SDL_Quit();

  return 0;
}
