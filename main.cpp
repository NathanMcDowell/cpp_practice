#include <algorithm>
#include <complex.h>
#include <iostream>
#include <string>
#include <vector>

#include "Image.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";
    const auto image = new Image();
    std::vector<std::string> imageStrings = image->getImage();
    int waterHeight = 0;
    int manHeight = imageStrings.size();
    char userInput = ' ';
    for (int i = 0; i < manHeight; i++) {
        std::cin >> userInput;
        if (userInput == '0') {
            break;
        }
        std::cout << "Hello" << std::endl;
        waterHeight++;
        for (int i = 1; i <= waterHeight; ++i) {
            // std::string test_string = testStrings.at(manHeight - (i+1));
            std::ranges::replace(imageStrings.at(manHeight - (i)), ' ', '0');

        }

        for (const auto& string: imageStrings) {

            std::cout << string << std::endl;
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


