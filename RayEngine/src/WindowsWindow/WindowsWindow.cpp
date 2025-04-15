#include "WindowsWindow.h"

namespace Engine
{
	WindowsWindow::WindowsWindow(int width, int height, const char* title) : m_Width(width), m_Height(height), m_Title(title)
	{
		SetConfigFlags(FLAG_WINDOW_RESIZABLE);
		InitWindow(m_Width, m_Height, m_Title);
		SetTargetFPS(60);
		InitAudioDevice();
	}

	WindowsWindow::~WindowsWindow()
	{
		CloseAudioDevice();
		CloseWindow();
	}
}