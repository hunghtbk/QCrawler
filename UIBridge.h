#ifndef UIBRIDGE_H
#define UIBRIDGE_H

#include <QObject>

class UIBridge : public QObject
{
    Q_OBJECT
public:
    explicit UIBridge(QObject *parent = 0);
    Q_INVOKABLE QString getString();
signals:

public slots:

};

#endif // UIBRIDGE_H
