#ifndef BEERMODEL_H
#define BEERMODEL_H

#include <QAbstractListModel>
#include "biere.h"

class BiereModel :  public QAbstractListModel
{
    Q_OBJECT
public:
    enum AnimalRoles {
        NameRole = Qt::UserRole + 1,
        TypeRole,
        VolRole,
        DensiteRole
    };
   void addBeer(Biere *biere);
   int rowCount(const QModelIndex & parent = QModelIndex()) const; QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
   bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::DisplayRole);
   Q_INVOKABLE bool removeRows(int row, int count, const QModelIndex &parent= QModelIndex());
   Q_INVOKABLE bool insertRows(int row, int count, const QModelIndex & parent = QModelIndex());


protected:
   QHash<int, QByteArray> roleNames() const;
private:
   QList<Biere*> m_bieres;

};

#endif // BEERMODEL_H
