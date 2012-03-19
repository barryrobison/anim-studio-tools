#ifndef _NAPALM_DELIGHT_IO__H_
#define _NAPALM_DELIGHT_IO__H_

#include <napalm/core/Table.h>
#include <string>

namespace napalm_delight
{

	//! load from renderman file type into napalm table
	napalm::object_table_ptr load( const std::string& i_path );

	//! TODO: add loading of a user defined subset of data

	//! save from napalm table to renderman file
	void save( const std::string& i_path, const napalm::ObjectTable& t );

}

#endif


/***
    Copyright 2008-2012 Dr D Studios Pty Limited (ACN 127 184 954) (Dr. D Studios)

    This file is part of anim-studio-tools.

    anim-studio-tools is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    anim-studio-tools is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with anim-studio-tools.  If not, see <http://www.gnu.org/licenses/>.
***/
