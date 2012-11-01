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

#ifndef CONTROLLER_APP_H
#define	CONTROLLER_APP_H

#include <string>
#include <getopt.h>

#include "ArgumentHandler.h"
#include "../Model/App.h"
#include "../View/Renderer.h"

namespace Controller {
    class App {
        public:
            App(int argc, char *argv[]);
            App(const App& orig);
            virtual ~App();
            void showUsage();
            void showVersion();
        private:
            ArgumentHandler c_argHandler;
            View::Renderer v_renderer;
            Model::App m_app;
    };
}

#endif	/* CONTROLLER_APP_H */

