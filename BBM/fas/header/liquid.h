#ifndef LIQUID_H
#define LIQUID_H

#include <QObject>

class Liquid : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double quantity READ quantity NOTIFY quantityChanged)
    Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)

public:
    explicit Liquid(QObject *parent = nullptr);

    double quantity() const;
    double quotient() const;
    void updateQuantity();
    void setQte(double qte);

    QString color() const;

public slots:
    void setQuotient(double quotient);
    void setColor(QString color);

signals:
    void quantityChanged(double quantity);
    void colorChanged(QString color);

private:
    double m_quantity;
    double m_quotient;
    QString m_color;
};

#endif // LIQUID_H
