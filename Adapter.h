#ifndef ADAPTER_H
#define ADAPTER_H

#include <QObject>

class Adapter : public QObject
{
    Q_OBJECT
public:
    Adapter();
    void setQObject(QObject *object);
    void initData();
    void updateData();
private:
    QObject *m_object;
};

#endif // ADAPTER_H
