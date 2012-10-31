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

#include <string>
#include <getopt.h>

#include "../Model/System.h"
#include "../View/Renderer.h"

namespace Controller {
    class App {
        public:
            App(int argc, char *argv[]);
            App(const App& orig);
            virtual ~App();
            View::Renderer getRenderer();
            void showUsage();
            void showVersion();
            void argumentParse(int argc, char *argv[]);
        private:
            View::Renderer v_renderer;
            Model::System m_system;
    };
}

#endif	/* APP_H */

