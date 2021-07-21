#include <algorithm>
#include <filesystem>
#include <iostream>
#include <ostream>
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
            std::filesystem::path p_src = std::filesystem::current_path() / src;
            std::filesystem::path p_dest = std::filesystem::current_path() / dest;
            try {
                std::filesystem::rename(src, dest);
                std::cout << "'" << src << "'"
                      << "\033[1;33m"
                      << "\t->\t"
                      << "\033[0m" << dest << std::endl;

            } catch (std::filesystem::filesystem_error const& e) {

                std::cout << "'" << src << "':" 
                      << "\033[1;33m"
                      << "\t->\t"
                      << "\033[0m" << std::endl;


                std::cout << e.code().message() <<" "<< e.path1() << std::endl;
            }
        }
    }
}
