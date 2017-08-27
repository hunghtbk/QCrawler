#include "ReadDataFromServer.h"

ReadDataFromServer::ReadDataFromServer(QObject *parent) : QObject(parent)
{

}

/**
 * @brief ReadDataFromServer::getData
 * @return data in server
 */
QString ReadDataFromServer::getData()
{
    // handle ......


    return m_data;
}
