#include "QAnsiTextEdit.h"

QAnsiTextEdit::QAnsiTextEdit (QWidget* parent) : QTextEdit(parent) {
}

QAnsiTextEdit::QAnsiTextEdit (const QString& text, QWidget* parent) : QTextEdit(text, parent) {
}

QAnsiTextEdit::~QAnsiTextEdit () {
}

