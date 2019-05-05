#ifndef GAMEWINDOW_HPP
#define GAMEWINDOW_HPP

#include <SFML/Graphics.hpp>

using namespace sf;

struct gameCell
{
    int position; // позиция на поле [1 - 16]
    int number; // номер пятнашки (пустая пятнашка - 0)
    Sprite sprite;
};

class Gamewindow
{
private:
    // ПЕРЕМЕННЫЕ
    Font font;
int y_null = 3, x_null = 3;//координаты пустой клетки
    Text exitButton;
    Text timerText;
    Text gameTimeText;

    Clock gameTimeClock;

    Texture gameBoardBigTexture;
    gameCell puzzle[4][4];

    //МЕТОДЫ
    void colorExitButton(RenderWindow &window);
    void colorPuzzles(Vector2i mousePosition, int gameDifficulty);
    void drawBoard(RenderWindow &window, int gameDifficulty);
    void movePuzzle(Vector2i mousePosition,  RenderWindow &window, int gameDifficulty);
public:
    Gamewindow();

    int draw(RenderWindow &window, int gameDifficulty, int gameImage);
};

#endif // GAMEWINDOW_HPP