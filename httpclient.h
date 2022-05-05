#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>

class HttpClient : public QObject
{
    Q_OBJECT
public:
    explicit HttpClient(QString& host, QObject *parent = nullptr);

public slots:
    void connected();
    void readyRead();

private:
    QTcpSocket *m_socket;
    QString m_hostname;
};

#endif
