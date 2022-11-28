#include "Config.hpp"

#include <typeinfo>
Config::Config(std::string config_path) {
    try {
        table = toml::parse_file(config_path);

    } catch (const toml::parse_error& err) {
        std::cerr << "Parsing failed:\n" << err << "\n";
    }
}

const char* Config::DllPath() { return table["dll_path"].value_or(""); }
const char* Config::ExeName() { return table["exe_name"].value_or(""); }
const char* Config::ExePath() { return table["exe_path"].value_or(""); }