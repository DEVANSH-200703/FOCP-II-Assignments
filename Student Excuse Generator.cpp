#include <iostream>
#include <vector>
#include <random>
int main() {
    std::string name;
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);
    if (name.empty() || name.find_first_not_of(' ') == std::string::npos) {
        std::cout << "\n Error: Please enter a valid student name to generate an excuse.\n";
        return 0;
    }
    std::vector<std::string> excuses = {
        " couldn't finish the assignment because the laptop decided to install updates for six hours.",
        " was about to complete the homework when the Wi-Fi mysteriously disappeared.",
        " tried finishing the assignment, but the computer keyboard suddenly stopped cooperating.",
        " couldn't complete the assignment because the laptop battery died unexpectedly.",
        " tried finishing the homework, but the local internet service provider went down.",
        " was ready to submit the assignment when the project file corrupted itself.",
        "'s cloud drive storage ran out exactly three seconds before hitting submit.",
        " wrote an amazing assignment, but the anti-virus software flagged it as a virus and deleted it.",
        " had the code ready, but a rogue Windows update restarted the PC without saving.",
        " finished the homework, but the compiler threw a syntax error that broke the space-time continuum."
    };

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, excuses.size() - 1);

    std::cout << "\n EXCUSE: " << name << excuses[distr(gen)] << "\n";

    return 0;
}
