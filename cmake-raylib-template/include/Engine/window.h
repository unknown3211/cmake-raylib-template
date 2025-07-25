#ifndef WINDOW_CLASS_H
#define WINDOW_CLASS_H

#include "raylib.h"

class Window
{
public:
	int width;
	int height;
	char* title;
	int fps;

	void Start(void(*start)());
	void CreateWindow(int width, int height, char* title, int fps);
	void Update(void(*update)());
	void Shutdown(void(*shutdown)());
	void SetBackgroundColor(Color colour);
};

#endif