#include "pch.h"

int main(int argc, char* argv[])
{
	Application* applicationWindow;

#ifdef OS_WINDOWS
	applicationWindow = new WindowsWindow();
#elif OS_LINUX
	applicationWindow = new LinuxWindow();
#elif OS_OSX
	applicationWindow = new MacWindow();
#endif // OS_WINDOWS

	applicationWindow->start();

	return 0;
}