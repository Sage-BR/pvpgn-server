/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
#ifndef INCLUDED_PGSID_H
#define INCLUDED_PGSID_H


namespace pvpgn
{

	namespace d2dbs
	{

		typedef struct raw_preset_d2gsid
		{
			unsigned int	ipaddr;
			unsigned int	d2gsid;
			struct raw_preset_d2gsid* next;
		} t_preset_d2gsid;


		unsigned int pgsid_get_id(unsigned int ipaddr);
		void pgsid_destroy();

	}

}

#endif