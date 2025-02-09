#pragma once

#include <string>
#include <vector>

enum LogLevel {
  INFO,
  WARN,
  ERR,
  CRIT
};

struct LogEntry {
  LogLevel level;
  std::string message;

  LogEntry(LogLevel level, const std::string &message);
};

class Logger {
public:
  static std::vector<LogEntry> messages;

  static void info(const std::string &message);
  static void warn(const std::string &message);
  static void error(const std::string &message);
  static void critical(const std::string &message);
};
