#include "board.hpp"

Board::Board() {

}

Board::~Board() {

}

void Board::zero() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            setval(i, j, 0);
        }
    }
}

bool Board::verify() {
    return false;
}

uint8_t Board::getval(uint8_t x, uint8_t y) {
    if ((x >= BOARD_SIZE) || (y >= BOARD_SIZE)) {
        return 0xff;
    } else {
        return this->values[x][y];
    }
}

uint8_t Board::setval(uint8_t x, uint8_t y, uint8_t a) {
    if ((x >= BOARD_SIZE) || (y >= BOARD_SIZE)) {
        return 0xff;
    } else {
        this->values[x][y] = a;
    }
}

uint8_t Board::randval(uint8_t low, uint8_t high) {
    return 0xff;
}