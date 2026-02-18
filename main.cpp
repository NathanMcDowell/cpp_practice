#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";


    std::vector<std::string> testStrings =
        { "  ,,,  ",
          " (-.-) ",
        R"(  /|\  )",
        R"( / | \ )",
          "   |   ",
        R"(  / \  )",
        R"( /   \ )"};
    int waterHeight = 0;
    int manHeight = testStrings.size();
    char userInput = ' ';
    while (userInput != '0') {
        std::cin >> userInput;
        std::cout << "Hello" << std::endl;
        waterHeight++;
        for (int i = 0; i < waterHeight; ++i) {
            // std::string test_string = testStrings.at(manHeight - (i+1));
            std::replace(testStrings.at(manHeight - (i+1)).begin(), testStrings.at(manHeight - (i+1)).end(), ' ', '0');

        }

        for (auto test_string: testStrings) {

            std::cout << test_string << std::endl;
        }
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
///  ,,,
/// (-.-)
///  /|\
/// / | \
///   |
///  / \
/// /   \
