/*
Write a program for Employee Management System to implement Singleton concept for loggers.
*/

#include <iostream>
#include <fstream>

enum log_level {
    ERROR = 1,
    WARNING = 2,
    INFO = 3
};

class Logger {
    log_level level;
    Logger(log_level level=INFO) : level(level) {
        fout.open("D:/logfile.txt" );
    }
    static Logger* instance;
    std::ofstream fout;
public:
    static Logger* getInstance() {
        if(instance == nullptr) {
           instance = new Logger(); 
        }
        return instance;
    }
    void setLogLevel(log_level level) {
        this->level = level;
    }
    void log_msg(log_level level, std::string msg);
    std::string print_level(log_level level) {
        switch (level)
        {
        case INFO:
            return "INFO";
        case ERROR:
            return "ERROR";
        case WARNING:
            return "WARNING";
        default:
            return "DEFAULT";
        }
    }
};

Logger* Logger::instance = nullptr;

void Logger::log_msg(log_level level, std::string msg) {
    if (this->level >= level) {
        fout << print_level(level) << ": " << msg << std::endl;
    }
    
}

int main() {
    Logger* logger = Logger::getInstance();
    logger->log_msg(INFO, "Hello Log :) ");
    return 0;
}