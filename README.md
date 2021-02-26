# VENGE

VENGE (Vessel ENGinE) is a game engine written mainly in C++ that will eventually support Windows and Mac but currently supports only Linux. The ``main`` branch is currently the development brench but will eventually turn into the ``latest`` branch. No idea why I am writing this, because nobody else can see it as of right now. Anyway, moving on. If Vulkan is available on your PC, please note that VENGE will use Vulkan over OpenGL. You will have to edit the ``CMakeLists.txt`` in the ``Engine-Core`` directory if you want to use OpenGL.

## Goals:

Currently, my/our goals for 2021 are not huge, but maybe a little ambitious for a single person to accomplish. My long term goals are definitely ambitious.

### By the end of the year, I am aiming for:

* One finished release (located in the ``latest`` branch)
* An API for input, events, and window events
  * 2D rendering system
    * GL and Vulkan shaders
    * Drawing system
* Support for OpenGL 3.1 and up, as well as Vulkan
* Layers


### And now my long-term goals:

* An Editor
  * Editor viewports and docking
  * Editor core (with a modular system for easier dev updates)
  * Extension/Plugin system
    * Extension API
  * Scene viewer
    * 2D/3D entity manipulation
    * Animation
  * Entity Tree
  * Project Tree
  * Run-in-editor option
  * in-editor scripting
* Support for GLES 3, Vulkan, DirectX 11/12, and Metal.
