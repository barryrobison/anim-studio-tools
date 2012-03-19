#
# Copyright 2010 Dr D Studios Pty Limited (ACN 127 184 954) (Dr. D Studios), its
# affiliates and/or its licensors.
#

from ..helpers.translators import verify_translate

from grenade.translators.sequence import SequenceTranslator
from probe.fixtures.mock_shotgun import MockShotgun

class TestSequenceTranslator(object):
    """
    Nose unit test suite for Grenade SequenceTranslator.
    
    .. versionadded:: v00_04_00
    """
    def setup(self):
        """
        Set up the unit test suite.
        
        .. versionadded:: v00_04_00
        """
        self.shotgun_data = [{'id':1, 'type':'Project', 'sg_short_name':'hf2'},
                             {'id':2, 'type':'Asset'},
                             {'id':3, 'type':'Note'},
                             {'id':4, 'type':'Scene'},
                             {'id':5, 'type':'Shot'},
                             {'id':6, 'type':'Task'}]
        
        self.session = MockShotgun(schema=[], data=self.shotgun_data)
        self.translator = SequenceTranslator(self.session)
    
    def teardown(self):
        """
        Tear down the unit test suite.
        
        .. versionadded:: v00_04_00
        """
        pass
    
    def test_translate(self):
        """
        Test that the translator converts the supplied test data as expected.
        
        .. versionadded:: v00_04_00
        """
        verify_translate(self.translator, 'project', {'id':1, 'type':'Project'}, 'hf2', 'mm4')
        verify_translate(self.translator, 'assets', [{'id':2, 'type':'Asset'}], [{'Asset':[['id', 'is', 2]]}], [{'Asset':[['id', 'is', 3]]}])
        verify_translate(self.translator, 'notes', [{'id':3, 'type':'Note'}], [{'Note':[['id', 'is', 3]]}], [{'Note':[['id', 'is', 4]]}])
        verify_translate(self.translator, 'open_notes', [{'id':3, 'type':'Note'}], [{'Note':[['id', 'is', 3]]}], [{'Note':[['id', 'is', 4]]}])
        verify_translate(self.translator, 'scenes', [{'id':4, 'type':'Scene'}], [{'Scene':[['id', 'is', 4]]}], [{'Scene':[['id', 'is', 5]]}])
        verify_translate(self.translator, 'shots', [{'id':5, 'type':'Shot'}], [{'Shot':[['id', 'is', 5]]}], [{'Shot':[['id', 'is', 6]]}])
        verify_translate(self.translator, 'tasks', [{'id':6, 'type':'Task'}], [{'Task':[['id', 'is', 6]]}], [{'Task':[['id', 'is', 7]]}])

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

