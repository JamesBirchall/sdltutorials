#include "loadimage.h"

SDL_Surface *loadImage(char *filename){
  SDL_Surface* loadedImage = NULL;
  SDL_Surface* optimisedImage = NULL;

  loadedImage = SDL_LoadBMP( filename );

  if(loadedImage != NULL){
    optimisedImage = SDL_DisplayFormat( loadedImage );

    SDL_FreeSurface( loadedImage );
  }

  return optimisedImage;
}
