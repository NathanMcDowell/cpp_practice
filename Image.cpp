//
// Created by natha on 2/23/2026.
//

#include "Image.h"


Image::Image() {
  _imageStrings =
    { "  ,,,  ",
      " (-.-) ",
    R"(  /|\  )",
    R"( / | \ )",
      "   |   ",
    R"(  / \  )",
    R"( /   \ )"};
}

std::vector<std::string> Image::getImage() {
  return _imageStrings;
}

