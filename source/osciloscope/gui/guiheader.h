////////////////////////////////////////////////////////////////////////////////
//    ScopeFun Oscilloscope ( http://www.scopefun.com )
//    Copyright (C) 2016 - 2019 David Košenina
//
//    This file is part of ScopeFun Oscilloscope.
//
//    ScopeFun Oscilloscope is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    ScopeFun Oscilloscope is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this ScopeFun Oscilloscope.  If not, see <http://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __GUI_HEADER__
#define __GUI_HEADER__

// forward
class OsciloskopStorage;
class OsciloskopConnection;
class OsciloskopMeasure;
class OsciloskopDebug;
class OsciloskopInfo;
class OsciloskopDisplay;
class OsciloskopThermal;
class OsciloskopSoftwareGenerator;
class OsciloskopHardwareGenerator;

#include "osciloscope/osciloscope.h"
extern "C" {
#include "api/scopefunapi.h"
}

#include <wx/filedlg.h>
#include <wx/app.h>
#include <wx/aui/auibook.h>
#include <wx/dcbuffer.h>
#include <wx/stdpaths.h>

#endif
//////////////////////////////////////////////////////////////////////////////////////
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////
