#
# Copyright 2010 Dr D Studios Pty Limited (ACN 127 184 954) (Dr. D Studios), its
# affiliates and/or its licensors.
#

from ..common.translator import Translator

from ..converters.default import convert_user

class EntityTranslator(Translator):
    """
    Generic Shotgun entity property translator.
    
    This is a parent class that may be used to define converter mappings for common entity fields.
    
    .. versionadded:: v00_04_00
    """
      
    def __init__(self, session=None):
        """
        Setup (register converters, etc) the new translator instance.

        :param session:
            An active Shotgun session.
        
        .. versionadded:: v00_04_00
        """
        Translator.__init__(self, session)

        self.register('created_by', convert_user)
        self.register('updated_by', convert_user)

# Copyright 2008-2012 Dr D Studios Pty Limited (ACN 127 184 954) (Dr. D Studios)
#
# This file is part of anim-studio-tools.
#
# anim-studio-tools is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# anim-studio-tools is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with anim-studio-tools.  If not, see <http://www.gnu.org/licenses/>.

