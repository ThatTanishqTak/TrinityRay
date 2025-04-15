#include "Physics.h"
#include <iostream>

namespace Engine
{
	void Physics::Update()
	{
		const float gravity = 9.81f;

		m_Velocity.y += gravity * GetFrameTime();
		m_RectPosition.y += m_Velocity.y * GetFrameTime();

		// Collision with ground
		if (m_RectPosition.y >= GetScreenHeight())
		{
			m_RectPosition.y = 0.0f;
		}
	}

	void Physics::Render()
	{
		DrawRectanglePro({ m_RectPosition.x, m_RectPosition.y, 100.0f, 100.0f }, { 0.0f, 100.0f }, 0.0f, RED);
	}
}