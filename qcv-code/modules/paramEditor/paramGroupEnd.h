/*
 * Copyright (C) 2012 Hernan Badino <hernan.badino@gmail.com>
 *
 * This file is part of QCV
 *
 * QCV is under the terms of the GNU Lesser General Public License
 * version 2.1. See the GNU LGPL version 2.1 for details.
 * QCV is distributed "AS IS" without ANY WARRANTY, without even the
 * implied warranty of merchantability or fitness for a particular
 * purpose. 
 *
 * In no event shall the authors or contributors be liable
 * for any direct, indirect, incidental, special, exemplary, or
 * consequential damages arising in any way out of the use of this
 * software.
 *
 * By downloading, copying, installing or using the software you agree
 * to this license. Do not download, install, copy or use the
 * software, if you do not agree to this license.
 */


#ifndef __PARAMETERGROUPEND_H
#define __PARAMETERGROUPEND_H

/**
 *******************************************************************************
 *
 * @file paramGroupEnd.h
 *
 * \class CParameterGroupEnd
 * \author Hernan Badino (hernan.badino@gmail.com)
 *
 * \brief Virtual parameter for defining the end of a display group.
 *
 ******************************************************************************/

/* INCLUDES */
#include "parameter.h"

/* CONSTANTS */

/* PROTOTYPES */

namespace QCV
{
    class CParameterGroupEnd: public CParameter
    {
    /// Constructors/Destructor
    public:
        CParameterGroupEnd ( );
        virtual ~CParameterGroupEnd ( );
        
        
    public:
        virtual std::string     getStringFromValue ( ) const;
        virtual bool            setValueFromString ( std::string f_val_str );
 
        /// Can/should this parameter be saved?
        bool shouldBeSaved() { return false; }

    /// Protected help methods.
    protected:
   };
}


#endif // __PARAMETERGROUPEND_H
