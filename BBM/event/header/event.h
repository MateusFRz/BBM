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
    explicit Event(QString name);

    QString name() const;
    virtual void applyEvent();
    virtual void applyEvent(int time);

signals:

    void nameChanged(QString name);

public slots:
    void setName(QString name);
};

#endif // EVENT_H
