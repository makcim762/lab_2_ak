#include <iostream>
#include <getopt.h>
#include <set>
#include <string>

int main(int argc, char* argv[]) {
    std::set<std::string> args;

    const option long_opts[] = {
        {"help",    no_argument,       nullptr, 'h'},
        {"list",    no_argument,       nullptr, 'l'},
        {"version", no_argument,       nullptr, 'v'},
        {"value",   required_argument, nullptr, 'V'},
        {"numbers", required_argument, nullptr, 'L'},
        {nullptr, 0, nullptr, 0}
    };

    int opt;
    while ((opt = getopt_long(argc, argv, "hlvV:L:", long_opts, nullptr)) != -1) {
        switch (opt) {
            case 'h': args.insert("Help"); break;
            case 'l': args.insert("List"); break;
            case 'v': args.insert("Version"); break;
            case 'V': args.insert("Value = " + std::string(optarg)); break;
            case 'L': args.insert("Numbers = " + std::string(optarg)); break;
            case '?':
                std::cerr << "Warning: unknown argument\n";
                break;
        }
    }

    for (const auto& a : args)
        std::cout << "Arg: " << a << std::endl;

    return 0;
}
