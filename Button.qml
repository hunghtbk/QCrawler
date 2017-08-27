import QtQuick 2.2

Rectangle {
    id: btn

    property string titleBtn: ""

    width: 120
    height: 30
    border.color: "black"
    radius: 5
    color: "grey"

    Text {
        anchors.centerIn: parent
        text: titleBtn
        font.pixelSize: 18
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log(UIBridge.getString())
        }
    }
}

