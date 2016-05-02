#include <QCoreApplication>
//#include "descifrecb.h"
#include "cifrdescryptopp.h"
//#include "cifrdes.h"// хуня якась(((
//#include "cifrdesfromperl.h" // хуня якась(((
#include <QDebug>

QByteArray prettyHex(QByteArray inArr)
{
    QByteArray retArr;
    for(int i = 0, iMax = inArr.size(); i < iMax; i++)
        retArr.append(inArr.mid(i,1).toHex() + " ");

    retArr.chop(1);
    return retArr;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CifrDesCryptoPP des;
        qDebug() << 1111 << prettyHex(des.encrypt(QByteArray::fromHex("5C 32 07 73 87 28 00 00"), QByteArray("password")));  // QByteArray("password")));
//fb	2d	5a	9c	3d	e3	aa	1d
        //704998d8e373d602
        qDebug() << 1111 << prettyHex(des.decrypt(QByteArray::fromHex("86 04 6f f5 3e e9 19 3c"), QByteArray("password")));  // QByteArray("password")));


    qDebug() << 1 << prettyHex(des.encrypt(QByteArray::fromHex("4D 2F 08 22 3C 60 4D FA "), QByteArray("password")));
    //повинно бути    57 50 09 75 58 43 7f f2
    //4D 2F 08 22 3C 60 4D FA   - 2B BF 90 04 47 2C 65 8C
    qDebug() << 111 << prettyHex(des.decrypt(QByteArray::fromHex("2b bf 90 04 47 2c 65 8c"), QByteArray("password")));


    qDebug() << 2 << prettyHex(des.encrypt(QByteArray::fromHex("5C 32 07 73 87 28 00 00"), QByteArray("password")));
     //повинно бути    86 04 6F F5 3E E9 19 3C


//    qDebug() << 3 << prettyHex(des.encrypt(QByteArray::fromHex("34 38 38 09 30 23 45 76"),  QByteArray::fromHex("0123456789abcdef")));  //QByteArray::fromHex("ffffffffffffffff")));
//    34	08	82	94	4d	f6	83	c3


//    qDebug() << 3 << prettyHex(des.desEncrypt(QByteArray::fromHex("4D 2F 08 22 3C 60 4D FA"), QByteArray("password")));  // QByteArray::fromHex("ffffffffffffffff")));
//    54ef718400036a39

    qDebug() << 4 << prettyHex(des.encrypt(QByteArray("hellowor"),  QByteArray("password")));
//e5	4e	c7	99	bb	b1	ba	03


//    qDebug() << 1110 << prettyHex(des.desDecrypt(QByteArray::fromHex("e68f791bab16d4e6"), QByteArray::fromHex("0123456789abcdef")));  // QByteArray("password")));

//    qDebug() << 111 << prettyHex(des.desDecrypt(QByteArray::fromHex("16 fa bb 5e 04 db c2 56"), QByteArray::fromHex("0123456789abcdef")));  // QByteArray("password")));

//    qDebug() << 333 << prettyHex(des.desDecrypt(QByteArray::fromHex("39 B0 97 0F 61 6A F4 3a"), QByteArray("password")));  // QByteArray("password")));

//    qDebug() << 444 << des.desDecrypt(QByteArray::fromHex("8a 90 ab 45 1d 2e 4f fe"), QByteArray::fromHex("0123456789abcdef"));  // QByteArray("password"));

    qDebug() << prettyHex(des.encrypt(QByteArray("This is the message to encrypt!! "),  QByteArray("12345678")));

//    qDebug() << des.desDecrypt(QByteArray::fromHex("39 B0 97 0F 61 6A F4 3a"), QByteArray::fromHex("ffffffffffffffff")).toHex();
//    qDebug() << des.desDecrypt(QByteArray::fromHex("54ef718400036a39"), QByteArray::fromHex("ffffffffffffffff")).toHex();

//    qDebug() << des.desDecrypt(QByteArray::fromHex("e54ec799bbb1ba03"), QByteArray("password"));



//bd79a4f687a24974



//    CifrDES des;


//    return a.exec();
    return 0;
}


