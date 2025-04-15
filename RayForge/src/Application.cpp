#include "Application.h"
#include <raylib.h>

void Application::Run()
{
	while (!WindowShouldClose())
	{
		// Update

		BeginDrawing();
		ClearBackground(BLACK);

		// Render

		EndDrawing();
	}
}