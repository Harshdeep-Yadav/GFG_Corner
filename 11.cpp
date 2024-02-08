#include <iostream>
#include <string>
#include <vector>
#include <sstream>

void split_text(const std::string& text, int n) {
    std::vector<std::string> lines;
    std::istringstream iss(text);
    std::string word;
    std::string line = "";

    while (iss >> word) {
        if (line.length() + 1 + word.length() > n) {
            lines.push_back(line);
            line = word;
        } else {
            if (line.length() > 0) {
                line += " ";
            }
            line += word;
        }
    }

    if (line.length() > 0) {
        lines.push_back(line);
    }

    for (const auto& l : lines) {
        std::cout << l << std::endl;
    }
}

int main() {
    int n;
    std::string input;

    std::cin >> n;
    std::getline(std::cin >> std::ws, input);

    split_text(input, n);

    return 0;
}
