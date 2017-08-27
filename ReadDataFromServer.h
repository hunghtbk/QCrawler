#ifndef READDATAFROMSERVER_H
#define READDATAFROMSERVER_H

#include <QObject>

class ReadDataFromServer : public QObject
{
    Q_OBJECT
public:
    explicit ReadDataFromServer(QObject *parent = nullptr);
    QString getData();
private:
    // Em lấy ví dụ là link này, vì trong link này có content là như này:
    // {"created_at":"2015-12-19T11:26:59Z","entry_id":488,"field1":"25.145113",
    // "field2":"55.224450"}
    // sau e hy vọng lấy đc cái QString = "created_at":"........."field2":"55.224450"
    QString m_Url = "https://api.thingspeak.com/channels/67451/feed/last.json";
    QString m_data;
signals:

public slots:
};

#endif // READDATAFROMSERVER_H
