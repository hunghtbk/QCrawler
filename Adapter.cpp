#include <QDebug>
#include "Adapter.h"

Adapter::Adapter()
{
}

void Adapter::setQObject(QObject *object)
{
    m_object = object;
}

void Adapter::initData()
{
    QObject *childObject = m_object->findChild<QObject*>("hunght");
    if (childObject) {
        qDebug() << "find";
    }
}

void Adapter::updateData()
{

}
