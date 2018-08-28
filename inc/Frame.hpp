#pragma once

class Frame
{
    int value_;
    bool isStrike_;
    bool isSpare_;
public:
    Frame();
    int getValue() const;
    void addValue(int value);
    bool isStrike() const;
    void setIsStrike();
    bool isSpare() const;
    void setIsSpare();
};
