#include <raylib.h>

namespace Engine
{
	class WindowsWindow
	{
	public:
		WindowsWindow(int width, int height, const char* title);
		~WindowsWindow();

	public:


	private:
		int m_Width;
		int m_Height;
		const char* m_Title;

	private:

	};
}