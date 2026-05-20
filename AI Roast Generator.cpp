#include <iostream>
#include <vector>
#include <random>

int main() {
    std::string name;
    std::cout << "Enter your name to get roasted: ";
    std::getline(std::cin, name);

    if (name.empty() || name.find_first_not_of(' ') == std::string::npos) {
        std::cout << "Nice try, anonymous! Give me a real name.\n";
        return 0;
    }
    std::vector<std::string> roasts = {
        " writes code so slow that even a turtle switched to Python.",
        " if procrastination were an Olympic sport, you would have a gold medal.",
        "'s debugging style is basically staring at the screen until the bug gets embarrassed.",
        "'s code runs so slowly that even dial-up internet feels fast.",
        " if laziness had a brand ambassador, it would be you.",
        " doesn't debug code — they negotiate with bugs.",
        ", the only thing more unstable than the production server is your sleep schedule.",
        " git clone? More like Git put your code out of its misery.",
        " thinks 'Big O notation' is a type of cheerleading chant.",
        " if you had a dollar for every error message, you'd fund space missions."
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, roasts.size() - 1);
    std::cout << "\n🔥 ROAST: " << name << roasts[distr(gen)] << "\n";

    return 0;
}
