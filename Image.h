//
// Created by natha on 2/23/2026.
//

#ifndef CPP_PRACTICE_IMAGE_H
#define CPP_PRACTICE_IMAGE_H
#include <string>
#include <vector>

class Image {
    private:
        std::vector<std::string> _imageStrings;

    public:
        Image();
        std::vector<std::string> getImage();
};


#endif //CPP_PRACTICE_IMAGE_H