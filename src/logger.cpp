#include <iostream>
#include <logger/logger.hpp>
#include <console_utils/colors.hpp>
#include <console_utils/time.hpp>

using namespace ConsoleUtils::Colors;
using namespace ConsoleUtils::Time;

std::vector<LogEntry> Logger::messages;

LogEntry::LogEntry(LogLevel l, const std::string &m)
  : level(l),  message(m) {}

void Logger::info(const std::string &message) {
  std::cout << getCurrentTimestamp() << " - " << fg::green << "[INFO]" 
            << fg::reset << ": " << message << std::endl;

  messages.emplace_back(LogLevel::INFO, message);
}

void Logger::warn(const std::string &message) {
  std::cout << getCurrentTimestamp() << " - " << fg::yellow << "[WARN]" 
            << fg::reset << ": " << message << std::endl;

  messages.emplace_back(LogLevel::WARN, message);
}

void Logger::error(const std::string &message) {
  std::cout << getCurrentTimestamp() << " - " << fg::red << "[ ERR]" 
            << fg::reset << ": " << message << std::endl;

  messages.emplace_back(LogLevel::ERR, message);
}

void Logger::critical(const std::string &message) {
  std::cout << getCurrentTimestamp() << " - " << bg::red <<style::bold
            << "[CRIT]" << bg::reset << ": " << message << style::reset << std::endl;

  messages.emplace_back(LogLevel::ERR, message);
}

