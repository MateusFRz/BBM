#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game : public QObject
{
    Q_OBJECT
public:
    Game();
    ~Game();

    void init(int argc, char *argv[]);

    int lauchApp(int argc, char *argv[]);



signals:

public slots:

private:
    bool isRunning;
};

#endif // GAME_H
