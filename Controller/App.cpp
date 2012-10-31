/*
 * File:   App.cpp
 * Author: soyel
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details.
 *
 * Created on October 30, 2012, 11:02 PM
 */
#include "App.h"

App::App(int argc, char *argv[]) {
    Renderer v_renderer();
}

App::App(const App& orig) {
}

App::~App() {
}

Renderer App::getRenderer() {
    return v_renderer;
}