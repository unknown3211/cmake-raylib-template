#include "Engine/window.h"

void Window::Start(void(*start)())
{
	start();
}

void Window::CreateWindow(int width, int height, char* title, int fps)
{
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(width, height, title);
	SetTargetFPS(fps);
	InitAudioDevice();
}

void Window::Update(void(*update)())
{
	while (!WindowShouldClose())
	{
		BeginDrawing();
		update();
		DrawFPS(10, 10);
		EndDrawing();
	}
}

void Window::Shutdown(void(*shutdown)())
{
	shutdown();
	CloseAudioDevice();
	CloseWindow();
}

void Window::SetBackgroundColor(Color colour)
{
	ClearBackground(colour);
}