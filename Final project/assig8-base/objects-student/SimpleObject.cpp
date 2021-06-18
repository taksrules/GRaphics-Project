// =========================================================================================
// KXC354 - Computer Graphics & Animation, 2018
// Assignment 1 & 2
// 3D Engine Code
// =========================================================================================
//
// Author: HXP
//
// Simpleobject.cpp
//
// This file defines the class for Simpleobject objects



// -----------------------------------------------------------------------------------------
// application includes
// -----------------------------------------------------------------------------------------
#include "prefix.h"
#include "Simpleobject.h"
#include "utility.h"
#include "pyramid.h"
#include "tcube.h"


// -----------------------------------------------------------------------------------------
// globals
// -----------------------------------------------------------------------------------------
extern unsigned long	gPolygonCount;			// counts how many polygons get displayed each frame
extern bool             gWireFrameOnly;         // solid or wireframe drawing mode
extern vector<object3d*> gShapeVector;



// -----------------------------------------------------------------------------------------
// constructor
// -----------------------------------------------------------------------------------------
//cube *footlf,*footrf,*footrb,*footlb
Simpleobject::Simpleobject()
{
	setName("Simpleobject composite");
	//Face
	face = new sphere(200);
	face->setParent(this);
	face->setDeformation(1.5, 1.5, 1);

	//Left Eye
	eyeL = new sphere(200);
	eyeL->setColour(0, 0, 0);
	eyeL->setPosition(-0.9, 0, 0.7);
	eyeL->setScale(0.2);
	eyeL->setDeformation(1.5, 1.5, 1);
	eyeL->setParent(face);

	//Right Eye
	eyeR = new sphere(200);
	eyeR->setColour(1, 1, 1);
	eyeR->setPosition(0.9, 0, 0.7);
	eyeR->setScale(0.2);
	eyeR->setDeformation(1.5, 1.5, 1);
	eyeR->setParent(face);

	//Neck
	neck=new cube;
	neck->setScale(0.5);
	neck->setPosition(0,-1.6, 0);
	neck->setDeformation(0.5, 2, 1);
	neck->setParent(face);
	
	//Body
	body=new tcube;
	body->setColour(1, 1, 1);
	body->setScale(2);
	body->setPosition(0,-5,0);
	body->setRotation('y',90);
	body->setDeformation(0.7, 2, 1);
	body->setParent(neck);

	//Left Foot
	footlb=new cube;
	footlb->setScale(0.4);
	footlb->setPosition(-0.5,-4.5, 0);
	footlb->setDeformation(1, 5, 0.5);
	footlb->setParent(body);
	
	//Right Foot
	footrb=new cube;
	footrb->setScale(0.4);
	footrb->setPosition(0.5,-4.5, 0);
	footrb->setDeformation(1, 5, 0.5);
	footrb->setParent(body);
	
	//Nose
	nose=new sphere(20);
	nose->setColour(1.0,1.0,0.0);
	nose->setParent(body);
	nose->setDeformation(1.0,0.2,0.2);
	nose->setPosition(0, 0, 1.5);
	nose->setRotation('y',95);
	nose->setParent(face);
	nose->setParent(face);



	// put the shape onto the shapeVector so it gets draw messages
	gShapeVector.push_back(this);

}

void Simpleobject::hide()
{
	face->hide();
	neck->hide();
	body->hide();
	footlb->hide();
	footrb->hide();
	nose->hide();
	
}

void Simpleobject::show()
{
	face->show();
	neck->show();
	body->show();
	footlb->show();
	footrb->show();
	nose->show();
	
}

