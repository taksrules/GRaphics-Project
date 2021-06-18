// =========================================================================================
// KXC354 - Computer Graphics & Animation, 2018
// Assignment 1 & 2
// 3D Engine Code
// =========================================================================================
//
// Author: HXP
//
// Simpleobject.h
//
// This file declares the class for Simpleobject objects, based on the
// generic 3D object


#ifndef _Simpleobject_H
#define _Simpleobject_H



// -----------------------------------------------------------------------------------------
// application includes
// -----------------------------------------------------------------------------------------
#include "face.h"
#include "object3d.h"
#include "pyramid.h"
#include "cube.h"
#include "sphere.h"
#include "torus.h"
#include "tcube.h"
// -----------------------------------------------------------------------------------------
// class declaration
// -----------------------------------------------------------------------------------------

class Simpleobject : public object3d
{
	public:
						Simpleobject();
		virtual void show();
		virtual void hide();
		

private:
	
	tcube *body;
	cube	*neck,*footrb,*footlb, *field;
	sphere *face, *eyeL, *eyeR, *nose;
	
};


#endif // _Simpleobject_H

