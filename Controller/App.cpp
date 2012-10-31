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

namespace Controller {

    App::App(int argc, char *argv[]) {
        View::Renderer v_renderer;
        argumentParse(argc, argv);
    }

    App::App(const App& orig) {
    }

    App::~App() {
    }

    void App::argumentParse(int argc, char *argv[]) {
        int c;

        if(argc == 1) {
            cout << "There are no arguments provided, please see the help" << endl;
            showUsage();
        }

        while (true)
        {
            static struct option long_options[] =
            {
                {"help",     no_argument,       0, 'h'},
                {"version",  no_argument,       0, 'V'},
                //{"create",  required_argument, 0, 'c'},
                //{"file",    required_argument, 0, 'f'},
                {0, 0, 0, 0}
            };

            int option_index = 0;

            c = getopt_long (argc, argv, "hV",
                             long_options, &option_index);

            if (c == -1)
            {
                break;
            }

            switch (c)
            {
                case 'h':
                    showUsage();
                    break;

                case 'V':
                    showVersion();
                    break;

                case '?':
                    /* getopt_long already printed an error message. */
                    break;

                default:
                    cout << "default" << endl;
              }
        }
    }

    void App::showUsage() {
        v_renderer.renderHelp();
    }

    void App::showVersion() {
        v_renderer.renderVersion();
    }
}