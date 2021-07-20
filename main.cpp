#include <algorithm>
#include <iostream>
#include <string>
int main(int argc, char* argv[])
{

    for (int i = 1; i < argc; i++) {
        std::string dest = std::string(argv[i]);
        std::string src = dest;
        dest.erase(std::remove_if(dest.begin(), dest.end(), ::isspace), dest.end());

        if (src == dest) {
            //nothing to do
            std::cout << src << "\033[1;33m"
                      << "\t->\t"
                      << "[nothing to do...]"
                      << "\033[0m" << std::endl;

        } else {
            std::cout << "'" << src << "'"
                      << "\033[1;33m"
                      << "\t->\t"
                      << "\033[0m" << dest << std::endl;
            std::string command = "mv '" + src + "' " + dest;
            std::system(command.c_str());
        }
    }
}
