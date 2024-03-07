#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
// such that we can use glm::to_string() to print vec or mat
#include <glm/gtx/string_cast.hpp>

#include <vector>   // std::vector
#include <iostream> // std::cout