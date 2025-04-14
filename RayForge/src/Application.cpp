#include "Application.h"

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