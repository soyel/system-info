/*
 * File:   System.h
 * Author: soyel
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details.
 *
 * Created on October 31, 2012, 4:37 AM
 */

#ifndef SYSTEM_H
#define	SYSTEM_H

#include <iostream>
#include <string>

#include "DateTime.h"

using namespace std;

class System {
    public:
        System();
        System(const System& orig);
        virtual ~System();
    private:
        string hostname;
        string kernel;
        DateTime last_boot;
        DateTime now;
        int update;
};

#endif	/* SYSTEM_H */

