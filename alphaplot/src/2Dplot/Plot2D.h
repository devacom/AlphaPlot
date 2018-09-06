/* This file is part of AlphaPlot.
   Copyright 2016, Arun Narayanankutty <n.arun.lifescience@gmail.com>

   AlphaPlot is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   AlphaPlot is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with AlphaPlot.  If not, see <http://www.gnu.org/licenses/>.

   Description : Plot2D top level stuff */

#ifndef PLOT2D_H
#define PLOT2D_H

#include "../3rdparty/qcustomplot/qcustomplot.h"
#include "Axis2D.h"
#include "Grid2D.h"

class Plot2D : public QCustomPlot {
  Q_OBJECT
 public:
  explicit Plot2D(QWidget *parent = nullptr);
  ~Plot2D();

  void setBackgroundColor(const QBrush &brush);
  QBrush getBackgroundColor() const;

 private:
  QBrush canvasBrush_;
};

#endif  // PLOT2D_H
