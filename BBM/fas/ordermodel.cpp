#include "header/ordermodel.h"

OrderModel::OrderModel(QObject *parent)
    : QAbstractListModel(parent)
{

}

void OrderModel::addOrder(Order *order)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_order << order;
    endInsertRows();
}

int OrderModel::rowCount(const QModelIndex &parent) const
{
    return m_order.count();
}

QVariant OrderModel::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= m_order.count())
        return QVariant();

    Order * order = m_order[index.row()];

    switch (role) {
    case TimeRole:
        return order->time();
    case BeerRole:
        return QVariant::fromValue(order->beer());



    }
    return QVariant();


}

bool OrderModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.row() < 0 || index.row() >= m_order.count())
        return false;

    if(data(index,role)==value)
        return true;

    Order *order = m_order[index.row()];

    switch (role) {
    case TimeRole:
        order->setTime(value.toInt());
        break;
    case BeerRole:
        order->setBeer(qvariant_cast<Beer *>(value));
        break;

    }
    QVector<int> roles;
    roles.append(role);

    QModelIndex topLeft=index.sibling(0,0);
    QModelIndex bottomRight=index.sibling(m_order.count()-1,0);

    emit dataChanged(topLeft,bottomRight,roles);

    return true;

}

bool OrderModel::removeRows(int row, int count, const QModelIndex &parent)
{
    if (row < 0 || row+count >= m_order.count())
        return false;

    beginRemoveRows(parent,row,row+count-1);
    for (int nb = 0; nb < count; ++nb)
        m_order.removeAt(row);

    endRemoveRows();
    return true;

}

bool OrderModel::insertRows(int row, int count, const QModelIndex &parent)
{
    for (int nb = 0; nb < count; ++nb)
        m_order.insert(row, new Order(new Beer("biere de base",10,10,10,10),10));

    endInsertRows();
    return true;

}

void OrderModel::refresh()
{

}

Order *OrderModel::getOrder(int row)
{
    return m_order[row];
}

QHash<int, QByteArray> OrderModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[TimeRole] = "time";
    roles[BeerRole] = "beer";
    return roles;
}
