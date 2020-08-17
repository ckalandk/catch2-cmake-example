#ifndef STRING_UTILS_HPP_
#define STRING_UTILS_HPP_

#include <algorithm>
#include <cctype>
#include <string>

std::string upper(std::string str)
{
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return std::toupper(c);
    });
    return str;
}

std::string lower(std::string str)
{
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    return str;
}

std::string lstrip(std::string str, const char* delim = " \t\r\n")
{
    auto const pos = str.find_first_not_of(delim);
    return str.substr(pos);
}

std::string rstrip(std::string str, const char* delim = " \t\r\n")
{
    auto const pos = str.find_last_not_of(delim);
    return str.substr(0, pos + 1);
}

std::string strip(std::string str, const char* delim = " \t\r\n")
{
    auto const a = str.find_first_not_of(delim);
    auto const b = str.find_last_not_of(delim);
    return str.substr(a, b - a + 1);
}

void replace(std::string& str, std::string const& old, std::string const& new_)
{
    size_t pos = 0;
    while ((pos = str.find_first_of(old)) != std::string::npos) {
        str.replace(pos, old.size(), new_);
        pos += old.size();
    }
}

#endif
