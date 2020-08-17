#include <catch2/catch.hpp>
#include <arithmetics.hpp>

TEST_CASE("sum of two integers computer", "[sum]")
{
    int x = 10;
    int y = 34;
    REQUIRE(add(x, y) == 44);
}

TEST_CASE("multipliying two integers", "[multiplication]")
{
    int x = 42;
    int y = 34;
    REQUIRE(mult(x, y) == 1428);
}

TEST_CASE("division of two integers computer", "[division]")
{
    int x = 42;
    int y = 14;
    REQUIRE(divide(x, y) == 3);
}

TEST_CASE("division by 0 throws runtime_exception", "[division]")
{
    int x = 42;
    int y = 0;
    REQUIRE_THROWS_AS(divide(x, y), std::runtime_error);
}

TEST_CASE("substracting two integers", "[sub]")
{
    int x = 42;
    int y = 19;
    REQUIRE(sub(x, y) == 23);
}
