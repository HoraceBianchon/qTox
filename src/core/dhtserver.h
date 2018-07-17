/*
    Copyright © 2017-2018 by The qTox Project Contributors

    This file is part of qTox, a Qt-based graphical interface for Tox.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qTox is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qTox.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DHT_SERVER_H
#define DHT_SERVER_H

#include <QString>

struct DhtServer
{
    QString name;
    QString userId;
    QString address;
    quint16 port;

    bool operator==(const DhtServer& other) const;
    bool operator!=(const DhtServer& other) const;
};

#endif // DHT_SERVER_H
