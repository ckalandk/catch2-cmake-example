#include <catch2/catch.hpp>
#include <string_utils.hpp>

TEST_CASE("Upper case a string", "[upper]")
{
    std::string str{"hello world!"};
    REQUIRE(upper(str) == "HELLO WORLD!");
}

TEST_CASE("Lower case a string", "[upper]")
{
    std::string str{"HelLO wOrLd!"};
    REQUIRE(lower(str) == "hello world!");
}


TEST_CASE("Stripping white characters for the beginning of a string",
          "[lstrip]")
{
    std::string s{ "\r\t\n hello world" };
    REQUIRE(lstrip(s) == "hello world");
}

TEST_CASE("Stripping white characters for the end of a string", "[rstrip]")
{
    std::string s{ "hello world\r\n\t " };
    REQUIRE(rstrip(s) == "hello world");
}

TEST_CASE("Stripping white characters for both ends of a string", "[strip]")
{
    std::string s{ "\t\n\r   \r\t\t hello world\r\n\t    \r\n" };
    REQUIRE(strip(s) == "hello world");
}

TEST_CASE("Replace all occurence of substring in a string with other",
          "[replace]")
{
    std::string str{ "One mississippi, Two mississippi, Three mississippi" };
    replace(str, "mississippi", "colorado");
    REQUIRE(str == "One colorado, Two colorado, Three colorado");
}

