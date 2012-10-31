/*
 * File:   App.h
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

#ifndef APP_H
#define	APP_H

#include "../Model/System.h"
#include "../View/Renderer.h"

class App {
    public:
        App(int argc, char *argv[]);
        App(const App& orig);
        virtual ~App();
        Renderer getRenderer();
    private:
        Renderer v_renderer;
        System m_system;
};

#endif	/* APP_H */

