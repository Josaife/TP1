#include "fonctions_SDL.h"

SDL_Texture* charger_image (const char* nomfichier, SDL_Renderer* renderer){
    SDL_Surface* surface =  SDL_LoadBMP(nomfichier);
    SDL_Texture* image = SDL_CreateTextureFromSurface(renderer, surface);
    return image;

}