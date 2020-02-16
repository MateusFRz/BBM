#ifndef EVENT_H
#define EVENT_H

#include <QObject>

class Event : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
private:
    QString m_name;

public:
    explicit Event(QObject *parent = nullptr);



    QString name() const;

signals:



    void nameChanged(QString name);

public slots:
void setName(QString name);
};

#endif // EVENT_H
