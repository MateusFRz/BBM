#include "biere.h"

Biere::Biere(QString nom, QString type, float vol, int densite)
    : m_nom(nom), m_type(type), m_vol(vol), m_densite(densite)
{
}

int Biere::densite() const
{
    return m_densite;
}

float Biere::vol() const
{
    return m_vol;
}

QString Biere::type() const
{
    return m_type;
}

void Biere::setValuNom(QString nom){
    if (this->m_nom != nom){
        this->m_nom = nom;
        emit valueChangedNom(nom);
    }
}

void Biere::setDensite(int densite)
{
    if (m_densite == densite)
        return;

    m_densite = densite;
    emit densiteChanged(m_densite);
}

void Biere::setVol(float vol)
{
    qWarning("Floating point comparison needs context sanity check");
    if (qFuzzyCompare(m_vol, vol))
        return;

    m_vol = vol;
    emit volChanged(m_vol);
}

void Biere::setType(QString type)
{
    if (m_type == type)
        return;

    m_type = type;
    emit typeChanged(m_type);
}



QString Biere::name()const{
    return this->m_nom;
}
