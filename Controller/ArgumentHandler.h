/*
 * File:   ArgumentHandler.h
 * Author: soyel
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details.
 *
 * Created on November 1, 2012, 12:36 AM
 */

#ifndef ARGUMENTHANDLER_H
#define	ARGUMENTHANDLER_H

using std::cout;
using std::endl;

namespace Controller {
    class ArgumentHandler {
        public:
            ArgumentHandler(int argc, char *argv[]);
            ArgumentHandler(const ArgumentHandler& orig);
            virtual ~ArgumentHandler();
            void argumentParse(int argc, char *argv[]);
        private:

    };
}

#endif	/* ARGUMENTHANDLER_H */

