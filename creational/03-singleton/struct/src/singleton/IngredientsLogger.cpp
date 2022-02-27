#include <iostream>

#include "IngredientsLogger.hpp"

#ifndef INGREDIENTS_LOG_PATH
#define INGREDIENTS_LOG_PATH "ingredients_log.txt"
#endif


IngredientsLogger IngredientsLogger::logger_;

IngredientsLogger& IngredientsLogger::GetInstance() {
  return logger_;
}

void IngredientsLogger::Log(std::string message) {
  file_ << message << std::endl;
}

IngredientsLogger::IngredientsLogger() 
  : file_{INGREDIENTS_LOG_PATH, file_.app | file_.out} {
}

IngredientsLogger::~IngredientsLogger() {
  std::cout << "free" << std::endl;
}
