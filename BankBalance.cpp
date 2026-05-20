#include <iostream>
#include <unordered_map>
class Bank {
    std::unordered_map<int, int> accounts;
public:
    bool create(int x, int y) {
        if (accounts.count(x)) {
            accounts[x] += y;
            return false;
        }
        accounts[x] = y;
        return true;
    }

    bool debit(int x, int y) {
        if (!accounts.count(x) || accounts[x] < y) return false;
        accounts[x] -= y;
        return true;
    }

    bool credit(int x, int y) {
        if (!accounts.count(x)) return false;
        accounts[x] += y;
        return true;
    }

    int balance(int x) {
        return accounts.count(x) ? accounts[x] : -1;
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int q;
    if (!(std::cin >> q)) return 0;

    Bank system;
    std::string type;
    int x, y;

    while (q--) {
        std::cin >> type;
        if (type == "CREATE") {
            std::cin >> x >> y;
            std::cout << (system.create(x, y) ? "true\n" : "false\n");
        } else if (type == "DEBIT") {
            std::cin >> x >> y;
            std::cout << (system.debit(x, y) ? "true\n" : "false\n");
        } else if (type == "CREDIT") {
            std::cin >> x >> y;
            std::cout << (system.credit(x, y) ? "true\n" : "false\n");
        } else if (type == "BALANCE") {
            std::cin >> x;
            std::cout << system.balance(x) << "\n";
        }
    }
    return 0;
}
