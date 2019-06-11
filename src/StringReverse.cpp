#include "StringReverse.h"

using namespace CPPLondonUni;

StringReverse::StringReverse(const std::string& str)
    : revStr{str.rbegin(), str.rend()}
{}

bool StringReverse::empty() const noexcept {
    return revStr.empty();
}

bool StringReverse::operator==(const std::string& other) const noexcept {
    return revStr == other;
}

StringReverse::operator std::string() const & {
    return revStr;
}

StringReverse::operator std::string() && {
    return std::move(revStr);
}