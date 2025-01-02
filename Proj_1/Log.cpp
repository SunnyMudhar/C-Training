#include <iostream>
#include "Log.h"

void Log::printLog(const char* message)
{
	std::cout << "[LOG]: " << message << std::endl;
}

void Log::printWarn(const char* message)
{
	std::cout << "[WARN]: " << message << std::endl;
}

void Log::printErr(const char* message)
{
	std::cout << "[ERR]: " << message << std::endl;
}

void Log::log(Log::LOG_TYPE type, const char* message)
{
	switch (type)
	{
	case Log::LOG:
		printLog(message);
		break;
	case Log::WARN:
		printWarn(message);
		break;
	case Log::ERR:
		printErr(message);
		break;
	default:
		std::cout << "[UNKNOWN]: " << message << std::endl;
		break;
	}
}