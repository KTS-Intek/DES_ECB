#include <QCoreApplication>
#include "descifrecb.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DEScifrECB des;

    qDebug() << des.desEncrypt(QByteArray::fromHex("01 02 03 04 05 06 07 08 01 02 03 04 05 06 07 08 01 02 03 04 05 06 07 08"), QByteArray::fromHex("0123456789abcdef")).toHex();
    qDebug() << des.desEncrypt(QByteArray("12345678"), QByteArray("23456789")).toHex();

    qDebug() << des.desDecrypt(QByteArray::fromHex("2b bf 90 04 47 2c 65 8c"), "password").toHex();

//    return a.exec();
    return 0;
}
