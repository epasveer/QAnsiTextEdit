#pragma once

#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>
#include <QtCore/QString>

class QAnsiTextEdit : public QPlainTextEdit {

    Q_OBJECT

    public:
        explicit QAnsiTextEdit(QWidget* parent = 0);
        explicit QAnsiTextEdit(const QString& text, QWidget* parent = 0);
       ~QAnsiTextEdit();

    private:

};

