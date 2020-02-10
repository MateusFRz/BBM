#include "bieremodel.h"

#include <QDebug>

void BiereModel::addBeer(Biere *biere){
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_bieres << biere;
    qDebug() << "Ajout de "
             << biere->name();
    endInsertRows();
}

int BiereModel::rowCount(const QModelIndex &parent) const{
    qDebug() << "Je demandende la taille "
             << m_bieres.count();
    return m_bieres.count();
}

QVariant BiereModel::data(const QModelIndex &index, int role) const{
    if (index.row() < 0 || index.row() >= m_bieres.count())
        return QVariant();

    Biere * biere = m_bieres[index.row()];;
    qDebug() << "__"  << index.row() << "  role => " << role;

    switch (role) {
    case NameRole:
        return biere->name();
    case TypeRole:
        return biere->type();
    case VolRole:
        return biere->vol();
    case DensiteRole:
        return biere->densite();
    case Qt::DisplayRole:
        return QVariant::fromValue(biere);
    }
    throw "bug";
    return QVariant();


}
bool BiereModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.row() < 0 || index.row() >= m_bieres.count())
        return false;

    if(data(index,role)==value)
        return true;

    Biere * beer = m_bieres[index.row()];
    switch (role) {
    case NameRole:
         beer->setValuNom(value.toString());
    case TypeRole:
         beer->setType(value.toString());
    case VolRole:
         beer->setVol(value.toInt());
    case DensiteRole:
         beer->setDensite(value.toFloat());
    }

    QVector<int> roles;
    roles.append(role);

    QModelIndex topLeft=index.sibling(0,0);
    QModelIndex bottomRight=index.sibling(m_bieres.count()-1,0);

    emit dataChanged(topLeft,bottomRight,roles);

    return true;


}

bool BiereModel::removeRows(int row, int count, const QModelIndex &parent)
{
    if (row < 0 || row+count >= m_bieres.count())
        return false;
    beginRemoveRows(parent,row,row+count-1);
    for (int nb = 0; nb < count; ++nb) {
        m_bieres.removeAt(row);
    }
    endRemoveRows(); return true;

}

bool BiereModel::insertRows(int row, int count, const QModelIndex &parent)
{
    beginInsertRows(parent,row,row+count-1); // !!
    for (int nb = 0; nb < count; ++nb) {
        m_bieres.insert(row, new Biere("Biere vide","Biere vide",8,8));
    }
    endInsertRows(); // !! return true;
    return true;

}

QHash<int, QByteArray> BiereModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[NameRole] = "name";
    roles[TypeRole] = "type";
    roles[VolRole] = "vol";
    roles[DensiteRole] = "densite";

    return roles;

}

