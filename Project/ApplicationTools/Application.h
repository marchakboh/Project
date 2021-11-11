#pragma once

class Application
{
public:
	virtual void start() = 0;
private:
	virtual void parseConfigFile(const std::string) = 0;
};