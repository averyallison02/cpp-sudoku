#ifndef BOARD_HPP
#define BOARD_HPP

#include <stdint.h>

#define BOARD_SIZE  9

class Board {
 public:
    Board();
    ~Board();

    // verify sudoku board
    // return result
    bool verify();

    // return value at x,y or debug value
    uint8_t getval(uint8_t x, uint8_t y);

    // set value at x,y to a
    // return a or debug value
    uint8_t setval(uint8_t x, uint8_t y, uint8_t a);

 private:
    uint8_t values[BOARD_SIZE][BOARD_SIZE];

    // zero values
    void zero();

    // return value at x,y or debug value
    uint8_t getval(uint8_t x, uint8_t y);

    // return random value between x and y (both inc.)
    uint8_t randval(uint8_t low, uint8_t high);
};

#endif
