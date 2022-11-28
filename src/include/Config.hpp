#include <toml++/toml.h>

#include <iostream>
class Config {
   public:
    Config(std::string config_path);
    const char* DllPath();
    const char* ExeName();
    const char* ExePath();

   private:
    toml::table table;
};