#include "GLWindow.h"

#define WinWidth 600
#define WinHeight 600

GLWindow::GLWindow()
{
}

void GLWindow::init(int windowId)
{
    WindowFlags = SDL_WINDOW_OPENGL;
    Window = SDL_CreateWindow("OpenGL Test", 0, 0, WinWidth, WinHeight, WindowFlags);
    assert(Window);
    Context = SDL_GL_CreateContext(Window);
    if (Context == NULL)
    {
        printf("Failed to obtain GL context on window %d\n.", windowId);
    }
    Running = 1;
    FullScreen = 0;

    winId = windowId;
}

void GLWindow::draw()
{
    SDL_GL_MakeCurrent(Window, Context);
    glViewport(0, 0, WinWidth, WinHeight);
    if (winId < 1)
        glClearColor(1.f, 0.5f, 0.f, 0.f);
    else
        glClearColor(0.f, 0.5f, 1.f, 0.f);
    glClear(GL_COLOR_BUFFER_BIT);

    SDL_GL_SwapWindow(Window);
}
