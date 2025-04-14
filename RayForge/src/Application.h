#include "WindowsWindow/WindowsWindow.h"

class Application
{
public:
	void Run();

private:
	Engine::WindowsWindow m_WindowsWindow{ 1920, 1080, "RayForge" };
};