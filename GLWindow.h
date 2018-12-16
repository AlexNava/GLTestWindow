#ifndef UNTITLED1_H
#define UNTITLED1_H

#include "GLWindow_global.h"
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <GL/gl.h>

typedef int32_t i32;
typedef uint32_t u32;
typedef int32_t b32;

class UNTITLED1SHARED_EXPORT GLWindow
{

public:
    GLWindow();

    void init(int windowId);

    void draw();

private:
    u32 WindowFlags;
    SDL_Window *Window;

    SDL_GLContext Context;

    b32 Running;
    b32 FullScreen;

    int winId;
};

#endif // UNTITLED1_H
