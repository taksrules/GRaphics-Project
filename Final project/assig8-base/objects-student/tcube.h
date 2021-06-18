// =========================================================================================
// KXC354 - Computer Graphics & Animation - 2013
// Assignment 1 & 2
// 3D Engine Code
// =========================================================================================
//
// Author: Tony Gray
//
// tcube.h
//
// This file declares the class for textured cubes


#ifndef _tcube_H
#define _tcube_H





// -----------------------------------------------------------------------------------------
// application includes
// -----------------------------------------------------------------------------------------
#include "object3d.h"




// -----------------------------------------------------------------------------------------
// class declaration
// -----------------------------------------------------------------------------------------
class tcube : public object3d
{
	public:
							tcube();							// default constructor

		virtual void		privateDraw(bool drawMode);
};



#endif // _tcube_H


