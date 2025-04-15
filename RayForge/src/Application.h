#include "WindowsWindow/WindowsWindow.h"
#include "Physics/Physics.h"

class Application
{
public:
	void Run();

private:
	int m_Width = 1920;
	int m_Height = 1080;
	const char* m_Title = "RayForge";

private:
	Engine::WindowsWindow m_WindowsWindow{ m_Width, m_Height, m_Title };
	Engine::Physics m_Physics;
};