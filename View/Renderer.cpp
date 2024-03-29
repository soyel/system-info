/*
 * File:   Renderer.cpp
 * Author: soyel
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details.
 *
 * Created on October 31, 2012, 4:22 AM
 */

#include "Renderer.h"

namespace View {
    Renderer::Renderer() {
    }

    Renderer::Renderer(const Renderer& orig) {
    }

    Renderer::~Renderer() {
    }

    void Renderer::renderHelp() {
        cout << "HELP" << endl;
    }

    void Renderer::renderVersion() {
        cout << "system-info:" << endl;
        cout << "\tv0.1" << endl;
    }
}