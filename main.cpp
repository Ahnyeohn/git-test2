// main.cpp
#include <iostream>
#include "logger-lib/logger.hpp"

int main() {
    logger::log_info("Program started.");
    logger::log_debug("Debugging some values...");
    logger::log_error("Something went wrong!");

    return 0;
}
