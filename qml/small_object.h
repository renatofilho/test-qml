#include <QObject>


class SmallObject : public QObject
{
    public:
        SmallObject(QObject *paren = 0);
        ~SmallObject();

        const QMetaObject *metaObject() const;
};

