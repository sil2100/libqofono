/****************************************************************************
**
** Copyright (C) 2013 Jolla Ltd.
** Contact: lorn.potter@jollamobile.com
**
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QOFONOTextTelephony_H
#define QOFONOTextTelephony_H

#include <QObject>
#include <QDBusVariant>
#include "qofono_global.h"
class QOfonoTextTelephonyPrivate;
class QOFONOSHARED_EXPORT QOfonoTextTelephony : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString modemPath READ modemPath WRITE setModemPath)
    Q_PROPERTY(bool ttyEnabled READ ttyEnabled WRITE setTtyEnabled NOTIFY ttyEnabledChanged)

public:
    explicit QOfonoTextTelephony(QObject *parent = 0);
    ~QOfonoTextTelephony();

    QString modemPath() const;
    void setModemPath(const QString &path);


    bool ttyEnabled() const;
    void setTtyEnabled(bool enabled);

Q_SIGNALS:

    void ttyEnabledChanged(bool);

public slots:
    
private:
    QOfonoTextTelephonyPrivate *d_ptr;
private slots:
    void propertyChanged(const QString &property,const QDBusVariant &value);
};

#endif // QOFONOTextTelephony_H