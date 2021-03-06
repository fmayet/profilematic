/**********************************************************************
 * Copyright 2011 Arto Jalkanen
 *
 * This file is part of ProfileMatic.
 *
 * ProfileMatic is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ProfileMatic is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ProfileMatic.  If not, see <http://www.gnu.org/licenses/>
**/
#include <QtCore/QCoreApplication>

#include "logic/testconditionmanagertime.h"
#include "logic/testconditionmanagerchain.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    int retval(0);

    retval += QTest::qExec(&TestConditionManagerTime(), argc, argv);
    retval += QTest::qExec(&TestConditionManagerChain(), argc, argv);

    qDebug("Tests exiting with return value %d", retval);
    return (retval ? 1 : 0);
}
