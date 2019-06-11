#pragma once

#include <string>

namespace CPPLondonUni {
    class StringReverse {
    public:
        StringReverse() = default;

        explicit StringReverse(const std::string& str);

        bool empty() const noexcept;

        bool operator==(const std::string& other) const noexcept;

        operator std::string() const &;

        operator std::string() &&;
    private:
        std::string revStr;
    };
}
