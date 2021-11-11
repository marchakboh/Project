#pragma once
#define OS_WINDOWS

#include <string>
#include <json/json.h>
#include <fstream>
#include <iostream>

#include "ApplicationTools/Application.h"
#ifdef OS_WINDOWS

#include <Windows.h>
#include "ApplicationTools/WindowsWindow.h"

#endif // OS_WINDOWS