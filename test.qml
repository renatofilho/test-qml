import QtQuick 2.0
import qml 1.0

Item {
  SmallObject {
    id: obj
  }
  Component.onCompleted: {
      console.debug("Dynamic property value: " + obj.dproperty)
  }
}
