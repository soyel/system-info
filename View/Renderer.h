/*
 * File:   Renderer.h
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

#ifndef RENDERER_H
#define	RENDERER_H

#include <iostream>

using std::cout;
using std::endl;

namespace View {
    class Renderer {
        public:
            Renderer();
            Renderer(const Renderer& orig);
            virtual ~Renderer();
            void renderHelp();
            void renderVersion();
        private:

    };
}

#endif	/* RENDERER_H */

