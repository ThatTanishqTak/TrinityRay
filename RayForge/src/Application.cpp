#include "Application.h"

void Application::Run()
{
	while (!WindowShouldClose())
	{
		// Update
		m_Physics.Update();

		BeginDrawing();
		ClearBackground(BLACK);
		
		// Render
		m_Physics.Render();
		
		EndDrawing();
	}
}