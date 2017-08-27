import QtQuick 2.2
import QtQuick.Window 2.1

Window {
    visible: true
    width: 640
    height: 480
    title: "QCrawler"

    Rectangle {
        id: txt_input
        width: 200
        height: 30
        x: 20
        y: 20
        border.color: "black"
        clip: true
        TextInput {
            anchors.fill: parent
            wrapMode: TextEdit.Wrap
        }
    }

    Button {
        id: btn_start
        x: 300
        y: 20
        titleBtn: "Start"
    }

    Button {
        id: btn_stop
        x: 500
        y: 20
        titleBtn: "Stop"
    }

    Rectangle {
        id: qwebView
        width: 600
        height: 200
        x: 20
        y: 70
        border.color: "black"
    }

    Rectangle {
        id: qCommandLine
        width: 600
        height: 150
        x: 20
        y: 300
        border.color: "black"
    }
    Text {
        id: nameobj
        objectName: "hunght"
        text: qsTr("text")
    }
}
