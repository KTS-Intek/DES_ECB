#ifndef CIFRDESCRYPTOPP_H
#define CIFRDESCRYPTOPP_H

#include <QObject>

#define ENCRYPTION_MODE 1
#define DECRYPTION_MODE 0



typedef quint8 desInt ;
typedef QList<desInt> DesList;


class CifrDesCryptoPP : public QObject
{
    Q_OBJECT
public:
    explicit CifrDesCryptoPP(QObject *parent = 0);

    QByteArray encrypt(QByteArray inData, QByteArray key);

    QByteArray decrypt(QByteArray inData, QByteArray key);


    typedef struct {
        unsigned char k[8];
        unsigned char c[4];
        unsigned char d[4];
    } key_set;
    desHash masHash[17];


    void generate_sub_keys(DesList main_key, key_set* key_sets);
    DesList pieceOfData(const QByteArray &inData, const int &offset, const int &inDataLen);
    QByteArray process_message(DesList message_piece, key_set* key_sets, int mode);


signals:

public slots:
};

#endif // CIFRDESCRYPTOPP_H
