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
        println("Input size of row and column.");
        print("> ");
        std::pair ab = readIntPair();
        Sheet sheet = Sheet{ab.first, ab.second};

        int input;
        do {
            println("");
            println("Empty Spreadsheet");
            println("0. quit");
            println("1. write value");
            println("2. read value");
            print("> ");
            input = readInt();

            if (input == 1) {
                println("Input target row and column number.");
                print("> ");
                std::pair rc = readIntPair();
                println("Input target value");
                print("> ");
                std::string value = readLine();

                sheet.set(rc.first, rc.second, value);
            } else if (input == 2) {
                println("Input target row and column number.");
                print("> ");
                std::pair rc = readIntPair();

                std::string value = sheet[rc.first][rc.second].get();
                println(value);
            }
        } while (input != 0);
    } else {
        println("Unknown command. Terminating...");
        return 0;
    }
}
