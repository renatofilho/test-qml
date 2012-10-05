#include "plugin.h"
#include "small_object.h"

#include <QtQml>

void SmallQmlPlugin::registerTypes(const char *uri)
{
    qmlRegisterType<SmallObject>(uri, 1, 0, "SmallObject");
}
