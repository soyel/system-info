/*
 * File:   DateTime.h
 * Author: soyel
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details.
 *
 * Created on October 31, 2012, 4:50 AM
 */

#ifndef DATE_TIME_H
#define	DATE_TIME_H

namespace Model {
    class DateTime {
        public:
            DateTime();
            DateTime(const DateTime& orig);
            virtual ~DateTime();
        private:
            int year;
            int month;
            int day;
            int hour;
            int minute;
    };
}

#endif	/* DATE_TIME_H */

