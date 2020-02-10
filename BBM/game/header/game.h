#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

class Game : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
public:
    Game();
    ~Game();

    void init(int argc, char *argv[]);

    int launchViewApp(int argc, char *argv[]);

    void test();


    QString name() const;

signals:

    void nameChanged(QString name);

public slots:

void setName(QString name);

private:
bool isRunning;
QString m_name;
};

#endif // GAME_H
