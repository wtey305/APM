#include "examples.h"
#include "ui_examples.h"
#include <QPainter>
#include <QDir>
#include <QRandomGenerator>
#include <QMessageBox>

Examples::Examples(QWidget *parent)
    : QDialog(parent), ui(new Ui::Examples)
{
    ui->setupUi(this);

    // Фиксированные размеры для отображения
    ui->showTop->setFixedSize(400, 170);
    ui->showBottom->setFixedSize(400, 230);

    // Загрузка изображений
    loadImages();

    // Подключение кнопок
    connect(ui->changeTopButton, &QPushButton::clicked, this, &Examples::onChangeTopClicked);
    connect(ui->changeBottomButton, &QPushButton::clicked, this, &Examples::onChangeBottomClicked);
}

Examples::~Examples()
{
    delete ui;
}

// Установка цветов для верхней части
void Examples::setTopColors(const QList<QColor>& colors)
{
    topColors = colors;
    updateImages();
}

// Установка цветов для нижней части
void Examples::setBottomColors(const QList<QColor>& colors)
{
    bottomColors = colors;
    updateImages();
}

// Загрузка изображений одежды
void Examples::loadImages()
{
    loadRandomTopImage();
    loadRandomBottomImage();
    updateImages();
}

// Обновление изображений с наложением цветов
void Examples::updateImages()
{
    // Верхнее изображение
    QPixmap topPixmap(400, 170);
    topPixmap.fill(Qt::transparent);

    QPainter topPainter(&topPixmap);
    topPainter.setRenderHint(QPainter::Antialiasing);

    // Рисование полос цветов
    if (!topColors.isEmpty()) {
        int stripeHeight = 170 / topColors.size();
        for (int i = 0; i < topColors.size(); ++i) {
            topPainter.fillRect(0, i * stripeHeight, 400, stripeHeight, topColors[i]);
        }
    }

    // Наложение изображения одежды
    if (!topImage.isNull()) {
        QPixmap scaledTop = topImage.scaled(400, 170, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        int x = (400 - scaledTop.width()) / 2;
        int y = (170 - scaledTop.height()) / 2;
        topPainter.drawPixmap(x, y, scaledTop);
    }
    ui->showTop->setPixmap(topPixmap);

    // Нижнее изображение
    QPixmap bottomPixmap(400, 230);
    bottomPixmap.fill(Qt::transparent);

    QPainter bottomPainter(&bottomPixmap);
    bottomPainter.setRenderHint(QPainter::Antialiasing);

    // Рисование полос цветов
    if (!bottomColors.isEmpty()) {
        int stripeHeight = 230 / bottomColors.size();
        for (int i = 0; i < bottomColors.size(); ++i) {
            bottomPainter.fillRect(0, i * stripeHeight, 400, stripeHeight, bottomColors[i]);
        }
    }

    // Наложение изображения одежды
    if (!bottomImage.isNull()) {
        QPixmap scaledBottom = bottomImage.scaled(400, 230, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        int x = (400 - scaledBottom.width()) / 2;
        int y = (230 - scaledBottom.height()) / 2;
        bottomPainter.drawPixmap(x, y, scaledBottom);
    }
    ui->showBottom->setPixmap(bottomPixmap);
}

// Загрузка случайного изображения для верхней части
void Examples::loadRandomTopImage()
{
    int attempt = 0;
    while (attempt < 10) {
        int randomNum = QRandomGenerator::global()->bounded(1, 10);
        QString imagePath = QString(":/images/Images/top%1.png").arg(randomNum);
        if (QPixmap(imagePath).isNull()) {
            attempt++;
            continue;
        }
        topImage.load(imagePath);
        return;
    }
    QMessageBox::warning(this, "Ошибка", "Не удалось загрузить верхнее изображение");
}

// Загрузка случайного изображения для нижней части
void Examples::loadRandomBottomImage()
{
    int attempt = 0;
    while (attempt < 10) {
        int randomNum = QRandomGenerator::global()->bounded(1, 8);
        QString imagePath = QString(":/images/Images/bottom%1.png").arg(randomNum);
        if (QPixmap(imagePath).isNull()) {
            attempt++;
            continue;
        }
        bottomImage.load(imagePath);
        return;
    }
    QMessageBox::warning(this, "Ошибка", "Не удалось загрузить нижнее изображение");
}

// Обработчик кнопки изменения верхнего изображения
void Examples::onChangeTopClicked()
{
    loadRandomTopImage();
    updateImages();
}

// Обработчик кнопки изменения нижнего изображения
void Examples::onChangeBottomClicked()
{
    loadRandomBottomImage();
    updateImages();
}
