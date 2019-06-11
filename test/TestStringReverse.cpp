#include "catch.hpp"
#include "StringReverse.h"

using namespace CPPLondonUni;

TEST_CASE("A default constructed StringReverse is empty", "[stringreverse]") {
    const StringReverse s;
    CHECK(s.empty());
    REQUIRE(s == "");
}

TEST_CASE("A StringReverse constructed with 'Hello World' becomes 'dlroW olleH'", "[stringreverse]") {
    const StringReverse s{"Hello World"};
    CHECK_FALSE(s == "Hello World");
    CHECK(s == "dlroW olleH");
    CHECK_FALSE(s.empty());
}

TEST_CASE("Moving out of a StringReverse should clear the original object", "[stringreverse]") {
    StringReverse s{"Hello World"};
    std::string d = std::move(s);
    CHECK_FALSE(d.empty());
    CHECK(s.empty());
    CHECK(d == "dlroW olleH");
}