#pragma once

#ifndef HurtShader_hpp
#define HurtShader_hpp

#include <stdio.h>
#ifdef WIN32
#include <GL/glew.h>
#include <glfw/glfw3.h>
#else
#define GLFW_INCLUDE_GLCOREARB
#define GLFW_INCLUDE_GLEXT
#include <glfw/glfw3.h>
#endif
#include <iostream>
#include <assert.h>
#include "../../src/color.h"
#include "../../src/vector.h"
#include "../../src/matrix.h"
#include "../../src/camera.h"
#include "../../src/baseshader.h"
#include "../../src/phongshader.h"

class HurtShader : public PhongShader
{
public:
	HurtShader();
	virtual void activate(const BaseCamera& Cam) const;
protected:
	void assignLocations();
private:
	mutable float time = 0.0f;
	GLuint ShaderProgram;
	GLint ModelMatLoc;
	GLint ModelViewProjLoc;
	GLint TimeLoc;
};

#endif /* HurtShader_hpp */