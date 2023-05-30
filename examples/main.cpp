#include "../include/logger.h"

int main(){
	Logger::setLogLevel(INFO);
	Logger::info("This is a info program");
	Logger::warn("This is a warning program");
	Logger::error("This is a error program");

	Logger::setLogLevel(ERR);
	Logger::info("Hi!");

	return 0;
}