#ifndef BIERE_H
#define BIERE_H

#include <QObject>

class Biere : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString nom READ name WRITE setValuNom NOTIFY valueChangedNom)
    Q_PROPERTY(int densite READ densite WRITE setDensite NOTIFY densiteChanged)
    Q_PROPERTY(float vol READ vol WRITE setVol NOTIFY volChanged)
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
public:
    Biere(QString, QString, float, int);
    QString name() const;
    int densite() const;

    float vol() const;

    QString type() const;

public slots:
    void setValuNom(QString nom);
    void setDensite(int densite);
    void setVol(float vol);
    void setType(QString type);

signals:
    void valueChangedNom(QString newNom);
    void densiteChanged(int densite);
    void volChanged(float vol);
    void typeChanged(QString type);

private:


    QString m_nom;
    int m_densite;
    float m_vol;
    QString m_type;
    Q_DISABLE_COPY(Biere)

};

#endif // BIERE_H
