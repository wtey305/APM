#ifndef EXAMPLES_H
#define EXAMPLES_H

#include <QDialog>
#include <QList>
#include <QColor>
#include <QPixmap>
#include <QPushButton>

namespace Ui {
class Examples;
}

class Examples : public QDialog
{
    Q_OBJECT

public:
    explicit Examples(QWidget *parent = nullptr);
    ~Examples();

    void setTopColors(const QList<QColor>& colors);
    void setBottomColors(const QList<QColor>& colors);
    void loadImages();

private slots:
    void onChangeTopClicked();
    void onChangeBottomClicked();

private:
    Ui::Examples *ui;
    QList<QColor> topColors;
    QList<QColor> bottomColors;
    QPixmap topImage;
    QPixmap bottomImage;
    QList<QPixmap> availableImages;

    void updateImages();
    void loadRandomTopImage();
    void loadRandomBottomImage();
};

#endif
