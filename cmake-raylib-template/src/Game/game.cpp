#include <iostream>
#include "Game/game.h"
#include "Engine/window.h"
#include "logs.h"

Window window;

int s_width = 800;
int s_height = 600;

static void OnStart()
{
	window.CreateWindow(s_width, s_height, "Raylib Starter Template", 60);
	Log(info, "Raylib Template Started Successfully !");
}

static void OnUpdate()
{
	window.SetBackgroundColor(SKYBLUE);
	DrawRectangle(s_width / 2 - 50, s_height / 2 - 50, 100, 100, RED);
}

static void OnShutdown()
{
	Log(info, "Raylib Template Shutdown Successfully !");
}

void Game::Init()
{
	window.Start(OnStart);
	window.Update(OnUpdate);
	window.Shutdown(OnShutdown);
}