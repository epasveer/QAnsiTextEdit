#include "QAnsiTextEdit.h"

QAnsiTextEdit::QAnsiTextEdit (QWidget* parent) : QPlainTextEdit(parent) {
}

QAnsiTextEdit::QAnsiTextEdit (const QString& text, QWidget* parent) : QPlainTextEdit(text, parent) {
}

QAnsiTextEdit::~QAnsiTextEdit () {
}

