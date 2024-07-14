#include "Example.h"
#include "ANSI-color-codes.h"
#include <QtWidgets/QApplication>
#include <QtGui/QFont>
#include <QtGui/QFontDatabase>
#include <stdio.h>

int main(int argc, char* argv[]) {

    QApplication a(argc, argv);

    QFont fixedFont = QFontDatabase::systemFont(QFontDatabase::FixedFont);

    Example w;
    w.setFont(fixedFont);
    w.show();

    // A buffer to print to.
    char buffer[500];

    sprintf(buffer, BRED "Hey this is the color red, and it's bold! \n" CRESET);
    w.setAnsiText(buffer);

    sprintf(buffer, RED "If " BLU "you " YEL "are " GRN "bored " CYN "do " MAG "this!\n" CRESET);
    w.appendAnsiText(buffer);

    sprintf(buffer, BRED "If " BBLU "you " BYEL "are " BGRN "bored " BCYN "do " BMAG "this!\n" CRESET);
    w.appendAnsiText(buffer);

    sprintf(buffer, URED "If " UBLU "you " UYEL "are " UGRN "bored " UCYN "do " UMAG "this!\n" CRESET);
    w.appendAnsiText(buffer);


    return a.exec();
}

