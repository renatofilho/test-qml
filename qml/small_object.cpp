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
    qDebug() << "Metaobject called";
    return QObject::metaObject();
};

