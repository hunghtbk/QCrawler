#include "UIBridge.h"

UIBridge::UIBridge(QObject *parent) :
    QObject(parent)
{
}

QString UIBridge::getString()
{
    return "hunght";
}
