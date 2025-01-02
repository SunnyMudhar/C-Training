#pragma once
#include <iostream>

class Log
{
public:
	enum LOG_TYPE
	{
		LOG,
		WARN,
		ERR,
	};
public:
	void printLog(const char* message);

	void printWarn(const char* message);

	void printErr(const char* message);

	void log(LOG_TYPE type, const char* message);
};