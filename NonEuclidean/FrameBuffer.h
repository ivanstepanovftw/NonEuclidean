#pragma once
#include "Camera.h"
#include <epoxy/gl.h>

//Forward declaration
class Portal;

class FrameBuffer {
public:
  FrameBuffer();

  void Render(const Camera& cam, GLuint curFBO, const Portal* skipPortal);
  void Use();

private:
  GLuint texId;
  GLuint fbo;
  GLuint renderBuf;
};
