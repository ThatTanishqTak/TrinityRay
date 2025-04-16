#include "Physics.h"
#include <iostream>

namespace Engine
{
	void Physics::Update()
	{
		for (Rectangle& rect : m_Rectangles)
		{
			rect.y += m_Gravity * m_Multiplier * GetFrameTime();

			std::cout << "Rectangle " << m_count << ": " << rect.x << " " << rect.y << std::endl;

			// Collision with ground
			if (rect.y >= GetScreenHeight())
			{
				rect.y = 0.0f;
			}
		}

		AddRectangle();
	}

	void Physics::Render()
	{
		for (Rectangle& rect : m_Rectangles)
		{
			DrawRectanglePro(rect, { 0.0f, 0.0f }, 0.0f, RED);
		}
	}

	void Physics::AddRectangle()
	{
		if (IsKeyPressed(KEY_R))
		{
			m_count++;
			
			int l_RandomPosX = rand() % GetScreenWidth();
			Rectangle l_Rect = { (float)l_RandomPosX, 0.0f, 50.0f, 50.0f };

			m_Rectangles.push_back(l_Rect);
		}
	}
}