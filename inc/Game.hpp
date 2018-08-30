#pragma once
#include <string>
#include "Frame.hpp"

class Game
{
    std::string name_;
    Frame frame_[12];
public:
    explicit Game(const std::string & name = "");
    std::string getName() const;
    int score() const;
};