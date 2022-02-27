#pragma once

#include <fstream>


class IngredientsLogger {
 public:
  IngredientsLogger(IngredientsLogger& other) = delete;
  void operator=(const IngredientsLogger&) = delete;

  static IngredientsLogger& GetInstance();
  void Log(std::string message);
 ~IngredientsLogger();

 private:
  IngredientsLogger();

 private:
  static IngredientsLogger logger_;
  std::ofstream file_;
};
