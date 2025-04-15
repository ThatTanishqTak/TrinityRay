#pragma once

#include <raylib.h>

namespace Engine
{
	class Physics
	{
	public:
		void Update();
		void Render();

	private:
		Vector2 m_RectPosition = { 0.0f, 0.0f };
		Vector2 m_Velocity = { 0.0f, 0.0f };
	};
}