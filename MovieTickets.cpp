#include <iostream>
#include <unordered_map>
#include <unordered_set>
class MovieTicket {
    std::unordered_map<int, int> movie_bookings;
    std::unordered_map<int, std::unordered_set<int>> customer_bookings;

public:
    bool book(int x, int y) {
        if (customer_bookings[x].count(y) || movie_bookings[y] >= 100) return false;
        customer_bookings[x].insert(y);
        movie_bookings[y]++;
        return true;
    }

    bool cancel(int x, int y) {
        if (!customer_bookings[x].count(y)) return false;
        customer_bookings[x].erase(y);
        movie_bookings[y]--;
        return true;
    }

    bool is_booked(int x, int y) {
        return customer_bookings[x].count(y);
    }

    int available_tickets(int y) {
        return 100 - movie_bookings[y];
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int q;
    if (!(std::cin >> q)) return 0;
    
    MovieTicket system;
    std::string type;
    int x, y;

    while (q--) {
        std::cin >> type;
        if (type == "BOOK") {
            std::cin >> x >> y;
            std::cout << (system.book(x, y) ? "true\n" : "false\n");
        } else if (type == "CANCEL") {
            std::cin >> x >> y;
            std::cout << (system.cancel(x, y) ? "true\n" : "false\n");
        } else if (type == "IS_BOOKED") {
            std::cin >> x >> y;
            std::cout << (system.is_booked(x, y) ? "true\n" : "false\n");
        } else if (type == "AVAILABLE_TICKETS") {
            std::cin >> y;
            std::cout << system.available_tickets(y) << "\n";
        }
    }
    return 0;
}
