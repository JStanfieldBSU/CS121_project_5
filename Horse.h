#ifndef HORSE_H
#define HORSE_H

class Horse
{
private:
    int position;
    int id;
    int trackLength;

public:
    Horse();
    void init(int id, int trackLength);
    void advance();
    void printLane();
    bool isWinner();
};

#endif