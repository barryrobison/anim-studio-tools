/*
 * Copyright (c) 2009 Dr. D Studios. (Please refer to license for details)
 * SVN_META_HEADURL = "$HeadURL: http://svn/drd/apps/bee/trunk/lib/kernel/classHelper.h $"
 * SVN_META_ID = "$Id: classHelper.h 23170 2010-02-19 03:58:25Z stephane.bertout $"
 */

#ifndef bee_classHelper_h
#define bee_classHelper_h
#pragma once

namespace bee
{
	// can't use reference for return parameter here because of python_boost..

	#define ADD_MEMBER( type, name )							\
		private:												\
		/*! ##name */											\
			type m_##name;										\
		public:													\
			type get##name() const { return m_##name; }			\
			void set##name( const type & a ) { m_##name = a; }

	#define ADD_MEMBER_RDONLY( type, name )						\
		private:												\
			type m_##name;										\
		public:													\
			type get##name() const { return m_##name; }

	#define ADD_MEMBER_CB( type, name, cb )										\
		private:																\
			type m_##name;														\
		public:																	\
			type get##name() const { return m_##name; }							\
			void set##name( const type & a ) { m_##name = a; cb(); }

	#define ADD_MEMBER_PTR( type, name )						\
		private:												\
			type m_##name;										\
		public:													\
			type get##name() const { return m_##name; }			\
			void set##name( type a ) { m_##name = a; }

	#define ADD_MEMBER_REF( type, name )							\
		private:													\
			type m_##name;											\
		public:														\
			const type & get##name() const { return m_##name; }		\
			void set##name( const type & a ) { m_##name = a; }

}

#endif // bee_classHelper_h


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
