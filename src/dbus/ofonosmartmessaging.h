/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OfonoSmartMessaging -p ofonosmartmessaging -N ofono_smart_messaging.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OFONOSMARTMESSAGING_H_1358100870
#define OFONOSMARTMESSAGING_H_1358100870

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.ofono.SmartMessaging
 */
class OfonoSmartMessaging: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.SmartMessaging"; }

public:
    OfonoSmartMessaging(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OfonoSmartMessaging();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> RegisterAgent(const QDBusObjectPath &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("RegisterAgent"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> SendAppointment(const QString &in0, const QByteArray &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("SendAppointment"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> SendBusinessCard(const QString &in0, const QByteArray &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("SendBusinessCard"), argumentList);
    }

    inline QDBusPendingReply<> UnregisterAgent(const QDBusObjectPath &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("UnregisterAgent"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
