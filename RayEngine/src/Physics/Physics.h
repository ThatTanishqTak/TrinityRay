#pragma once

#include <raylib.h>
#include <list>

namespace Engine
{
	class Physics
	{
	public:
		void Update();
		void Render();

	private:
		const float m_Gravity = 9.81f;
		const float m_Multiplier = 5.0f;

		int m_count = 0;

		Vector2 m_RectPosition = { 0.0f, 0.0f };
		Vector2 m_Velocity = { 0.0f, 0.0f };

		std::list<Rectangle> m_Rectangles;

	private:
		void AddRectangle();
	};
}