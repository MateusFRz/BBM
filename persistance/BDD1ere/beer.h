#ifndef BEER_H
#define BEER_H

#include <QObject>

class Beer : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int alcoholeLevels READ alcoholeLevels WRITE setAlcoholeLevels NOTIFY alcoholeLevelsChanged)
    Q_PROPERTY(int IBU READ IBU WRITE setIBU NOTIFY IBUChanged)
    Q_PROPERTY(int density READ density WRITE setDensity NOTIFY densityChanged)
    Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)

private:

    QString m_name;
    int m_alcoholeLevels;
    int m_IBU;
    int m_density;
    QString m_color;
    QString m_type;


public:

    Beer(QString beerName, int beerAlcoholLevels, int beerIBU, int beerDensity, QString beerColor, QString beerType /*, Recipe beerRecipe*/);

    QString name() const;
    int alcoholeLevels() const;
    int IBU() const;
    int density() const;
    QString color() const;
    QString type() const;
    QString toString();

public slots:

    void setName(QString name);
    void setAlcoholeLevels(int alcoholeLevels);
    void setIBU(int IBU);
    void setDensity(int density);
    void setColor(QString color);
    void setType(QString type);

signals:

    void nameChanged(QString name);
    void alcoholeLevelsChanged(int alcoholeLevels);
    void IBUChanged(int IBU);
    void densityChanged(int density);
    void colorChanged(QString color);
    void typeChanged(QString type);
};

#endif // BEER_H
