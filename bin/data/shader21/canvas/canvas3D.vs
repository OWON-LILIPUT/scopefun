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









uniform mat4 gVSFinalMatrix;

#ifdef TEXTURE
	varying vec2 Tex;
#else
	#ifdef NORMAL
		varying vec4 Normal;		
	#endif
	
	#ifdef COLOR
		varying vec4 WorldPosition;
	#endif
#endif

void main()
{
	gl_Position = gVSFinalMatrix*gl_Vertex;
	#ifdef TEXTURE
		Tex = gl_MultiTexCoord0.st;
	#else
		#ifdef NORMAL
			Normal        = gl_Normal.xyzz;			
		#endif
		
		#ifdef COLOR
			WorldPosition = gl_Vertex;
		#endif		
	#endif
}