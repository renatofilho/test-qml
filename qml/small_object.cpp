#include "small_object.h"

#include <QObject>
#include <QDebug>

SmallObject::SmallObject(QObject *parent)
    : QObject(parent)
{
}

SmallObject::~SmallObject()
{
}

const QMetaObject *SmallObject::metaObject() const
{
    // This function will credate a dynamic metaobject and will return it with new properties
    qDebug() << "Metaobject called";
    return QObject::metaObject();
};

