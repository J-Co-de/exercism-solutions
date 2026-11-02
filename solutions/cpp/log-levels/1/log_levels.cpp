#include <string>
#include <iostream>
namespace log_line {
std::string message(std::string line) {
    int start = line.find(" ") + 1;
    return  line.substr(start);
}

std::string log_level(std::string line) {
    int end = line.find("]");
    std::cout << "Debugging line: " << line.substr(1,end-1) << std::endl;
    return  line.substr(1,end-1);
}

std::string reformat(std::string line) {
    return log_line::message(line) + " (" + log_line::log_level(line) + ")";
}
}  // namespace log_line
