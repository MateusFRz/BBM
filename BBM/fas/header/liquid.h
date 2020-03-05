#ifndef LIQUID_H
#define LIQUID_H

#include <QObject>

class Liquid : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int quantity READ quantity NOTIFY quantityChanged)
    Q_PROPERTY(int quotient READ quotient WRITE setQuotient NOTIFY quotientChanged)

public:
    explicit Liquid(QObject *parent = nullptr);

    int quantity() const;
    int quotient() const;
    void updateQuantity();

public slots:

    void setQuotient(int quotient);

signals:
    void quantityChanged(int quantity);
    void quotientChanged(int quotient);

private:
    int m_quantity;
    int m_quotient;
};

#endif // LIQUID_H
