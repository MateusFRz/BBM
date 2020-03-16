#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCloseEvent>

#include "metier/header/modelBeer.h"

class Notebook : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
public:
    Notebook();
    ~Notebook();
    Notebook(QQmlContext *m_context);
    void init();

    Q_INVOKABLE void createBeer();
    Q_INVOKABLE void startNotebook();
    Q_INVOKABLE void deleteBeer(int index);
    Q_INVOKABLE void updateBeer(QString beerName,
                                int beerAlcoholLevels,
                                int beerIBU,
                                int beerDensity,
                                QString beerColor,
                                QString beerType,
                                QString houblons,
                                QString malts,
                                int index);

signals:

public slots:

private:

    bool isRunning;
    QQmlApplicationEngine m_context;
    ModelBeer *m_modelBeer;
};

#endif // Notebook_H
