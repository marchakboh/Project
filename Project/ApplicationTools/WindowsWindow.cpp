#include "pch.h"
#include "WindowsWindow.h"

WindowsWindow::WindowsWindow()
{
	this->parseConfigFile("windowConfigurations.json");
}

WindowsWindow::~WindowsWindow()
{

}

void WindowsWindow::start()
{

}

void WindowsWindow::parseConfigFile(const std::string path)
{
	Json::Value root;
	Json::Reader reader;

	std::ifstream configFile(path);
	configFile >> root;
	if (!reader.parse(configFile, root, true))
	{
		std::cout << "Failed to parse configuration\n " << reader.getFormattedErrorMessages();
	}
	int width = root["WindowWidth"].asInt();
	int height = root["WindowHeight"].asInt();

	configFile.close();
}