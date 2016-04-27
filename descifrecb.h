#ifndef DESCIFRECB_H
#define DESCIFRECB_H

#include <QObject>

# include <stdio.h>
# include <fstream>
# include <string.h>
# include <iostream>
# include <stdlib.h>


class DEScifrECB : public QObject
{
    Q_OBJECT
public:
    explicit DEScifrECB(QObject *parent = 0);


    int key[64]=
    {
        0,0,0,0, 0,0,0,1, // 0 1
        0,0,1,0, 0,0,1,1, // 2 3
        0,1,0,0, 0,1,0,1, // 4 5
        0,1,1,0, 0,1,1,1, // 6 7
        1,0,0,0, 1,0,0,1,  // 8 9
        1,0,1,0, 1,0,1,1,  // 10 11
        1,1,0,0, 1,1,0,1,  // 12 13
        1,1,1,0, 1,1,1,1  // 14 15
    };

    int keyi[16][48],
        total[64],
        left[32],
        right[32],
        ck[28],
        dk[28],
        expansion[48],
        z[48],
        xor1[48],
        sub[32],
        p[32],
        xor2[32],
        temp[64],
        pc1[56],
        ip[64],
        inv[8][8];

    char final[1000];
    QList<quint8> lFinal;

    void IP();
    void PermChoice1();
    void PermChoice2();
    void Expansion();
    void inverse();
    void xor_two();
    void xor_oneE(int round);
    void xor_oneD(int round);
    void substitution();
    void permutation();
    void keygen(const QByteArray &arrKey);
    QByteArray desEncrypt(QByteArray inData, QByteArray arrKey );
    QByteArray desDecrypt(QByteArray inData, QByteArray arrKey);

    QBitArray byteArrayToBitArray(const QByteArray &byteArr);

signals:

public slots:
};

#endif // DESCIFRECB_H
