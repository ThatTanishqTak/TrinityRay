#include "WindowsWindow.h"

namespace Engine
{
	WindowsWindow::WindowsWindow(int width, int height, const char* title) : m_Width(width), m_Height(height), m_Title(title)
	{
		InitWindow(m_Width, m_Height, m_Title);
		SetTargetFPS(60);
	}

	WindowsWindow::~WindowsWindow()
	{
		CloseWindow();
	}
}