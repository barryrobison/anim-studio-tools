/*
 * forwardLightingTest.h
 *
 *  Created on: Sep 14, 2009
 *      Author: stephane.bertout
 */

#ifndef FORWARDLIGHTINGTEST_H_
#define FORWARDLIGHTINGTEST_H_

#include <GL/glew.h>
#include <GL/glut.h>

#include <QGLWidget>
#include "genericgl.h"
#include "glSettings.h"
#include "kernel/color.h"
#include "kernel/smartPointers.h"
#include "math/Imath.h"
#include "gl/Frame.h"
#include "gl/Renderer.h"
#include "gl/RenderTarget.h"

using namespace bee;

namespace bee
{
	class Mesh;
	class Texture;
	class Program;
}

class ForwardLightingTest : public GenericGL
{
    Q_OBJECT

public:
    ForwardLightingTest(QWidget *parent = 0);
    virtual ~ForwardLightingTest();

    virtual QSize minimumSizeHint() const;
    virtual QSize sizeHint() const;

protected:
	void initializeGL();
	void paintGL();
	void resizeGL(int width, int height);

private:
	GLuint createTeapot(GLint grid, GLdouble scale, GLenum type);
	void normalizeAngle(int *angle);

	SharedPtr< Mesh > m_Mesh;
	SharedPtr< Texture > m_Texture;
	SharedPtr< Texture > m_Texture2;
	Program * m_Program;

    Colour clearColor;
    float m_NearClipPlane, m_FarClipPlane;
};

#endif /* FORWARDLIGHTINGTEST_H_ */


/***
    Copyright 2008-2012 Dr D Studios Pty Limited (ACN 127 184 954) (Dr. D Studios)

    This file is part of anim-studio-tools.

    anim-studio-tools is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    anim-studio-tools is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with anim-studio-tools.  If not, see <http://www.gnu.org/licenses/>.
***/
