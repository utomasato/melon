#include "DrawPad.hpp"
#include <math.h>

void DrawMain()
{
    Clear(kColorBlack);

    FillCircle(0, 100, 50, kColorRed);
    
    //大石
    FillCircle(100, 100, 50, kColorWhite);
    FillCircle(100, 100, 30, kColorBlack);
    
    //加藤
    FillCircle(-100, -100, 50, kColorBlue);
}

