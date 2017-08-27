#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "UIBridge.h"
#include "Adapter.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    UIBridge *uiBridge = new UIBridge();

    QQmlApplicationEngine engine;

    QQmlContext *ctx = engine.rootContext();
    ctx->setContextProperty("UIBridge", uiBridge);

    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

    Adapter *adapter = new Adapter();
    adapter->setQObject(engine.rootObjects().first());

    return app.exec();
}
