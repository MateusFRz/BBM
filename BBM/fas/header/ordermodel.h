#ifndef ORDERMODEL_H
#define ORDERMODEL_H

#include "order.h"

#include <QAbstractListModel>

class OrderModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum OrderRole {
        TimeRole = Qt::UserRole + 1,
        BeerRole
    };

    explicit OrderModel(QObject *parent = nullptr);
    void addOrder(Order *order);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::DisplayRole);
    Q_INVOKABLE bool removeRows(int row, int count, const QModelIndex &parent= QModelIndex());
    Q_INVOKABLE bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex());

    Q_INVOKABLE void refresh();
    Q_INVOKABLE Order *getOrder(int row);
protected:
    QHash<int, QByteArray> roleNames() const;
private:
    QList<Order *> m_order;


};

#endif // ORDERMODEL_H
