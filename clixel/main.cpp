#include "./ui/console.h"
#include "./data/Sheet.h"

int main() {
    println("Welcome to CliXel");
    println("");
    println("Please enter command");
    println("1. Create new spreadsheet");
    print("> ");

    int command = readInt();

    if (command == 1) {
        std::pair ab = readIntPair();
        Sheet sheet = Sheet{ab.first, ab.second};
    } else {
        println("Unknown command. Terminating...");
        return 0;
    }
}
