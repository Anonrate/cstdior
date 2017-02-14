/**
 * @file	cstdior.h
 * @brief	cstdior.h
 * @version	v.1
 * @date	02/11/2017 19:38:16
 * @author	Anonrate
 * @copyright	
 * 	\parblock
 * 		GNU General Public License
 *
 * 		Copyright (C) 2017 Anonrate
 *
 * 		This program is free software: you can redistribute it and/or modify 
 * 		it under the terms of the GNU General Public License as published by 
 * 		the Free Software Foundation, either version 3 of the License, or 
 * 		(at your option) any later version.
 *
 * 		This program is distributed in the hope that it will be useful, 
 * 		but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * 		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * 		GNU General Public License for more details.
 *
 * 		You should have received a copy of the GNU General Public License
 * 		along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 	\endparblock
 */

#ifndef CSTDIOR_H
#define CSTDIOR_H /**< Include guard for 'cstdior.h'. */

#include  "dbgcstdior.h"

/**
 * @brief   file exists
 * @details Checks if the file specified to by \p fname exists.
 * @param[in] fname The file name to check if exists or not.
 * @returns 
 *  @return If the file specified to by \p fname exists, the return value is
 *            \c nonzero
 *  @return If the file specified to by \p fname does not exists, the return
 *            value is \c 0.
 */
int
fexists(char *fname);
#endif  /* CSTDIOR_H */
