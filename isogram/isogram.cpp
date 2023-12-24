#include "isogram.hpp"
#include <set>
#include <locale>

// Для фукнций std::isalpha и std::toupper используйте эту локаль
std::locale locale{""};
auto is_isogram(std::string const& word) -> bool {
    std::set<char> letters;
    for (auto ch : word) {
        if (std::isalpha(ch, locale)) {
            ch = std::tolower(ch, locale);
            if (letters.find(ch) != letters.end())
                return false;
            letters.insert(ch);
        }
    }
    return true;
}
