/***************************************************************************
  coordinatereferencesystemutils.h - CoordinateReferenceSystemUtils

 ---------------------
 begin                : 28.05.2022
 copyright            : (C) 2022 by Mathieu Pellerin
 email                : mathieu at opengis dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef COORDINATEREFERENCESYSTEMUTILS_H
#define COORDINATEREFERENCESYSTEMUTILS_H

#include "qfield_core_export.h"

#include <QObject>
#include <qgscoordinatereferencesystem.h>
#include <qgscoordinatetransformcontext.h>

class QFIELD_CORE_EXPORT CoordinateReferenceSystemUtils : public QObject
{
    Q_OBJECT

  public:
    explicit CoordinateReferenceSystemUtils( QObject *parent = nullptr );

    //! Returns an invalid CRS
    static Q_INVOKABLE QgsCoordinateReferenceSystem invalidCrs() { return QgsCoordinateReferenceSystem(); }

    //! Returns an empty transform context
    static Q_INVOKABLE QgsCoordinateTransformContext emptyTransformContext() { return QgsCoordinateTransformContext(); }
};

#endif // COORDINATEREFERENCESYSTEMUTILS_H
