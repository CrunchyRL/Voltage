#pragma once
#include "../Extensions/Filesystem.hpp"
#include <Windows.h>
#include <unordered_map>
#include <map>
#include <iostream>
#include <iomanip>
#include <functional>
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <string>
#include <string_view>
#include <cmath>
#include <inttypes.h>


// Base class for all components.
// Stores it's name, formatted name, and description for retrieving later on.
class Component
{
private:
	std::string Name;
	std::string FormattedName;
	std::string Description;

public:
	Component(const std::string& name, const std::string& description);
	~Component();

public:
	std::string GetName() const;
	std::string GetNameFormatted() const;
	std::string GetDescription() const;
};