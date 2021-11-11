#pragma once

class WindowsWindow : public Application
{
public:
	WindowsWindow();
	WindowsWindow(const WindowsWindow&) = delete;
	WindowsWindow& operator=(const WindowsWindow&) = delete;
	~WindowsWindow();

public:
	virtual void start() override;

private:
	virtual void parseConfigFile(const std::string) override;
};