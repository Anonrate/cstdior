/**
 * @file	cstdior.c
 * @brief	cstdior.c
 * @version	v.1
 * @date	02/11/2017 19:38:10
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

#include  <stdio.h>
#include  <stdlib.h>
#include  <errno.h>

#define DEBUG 1

#include  "../../dbgr/inc/dbgr.h"
#include  "../../osnfo/inc/osnfo.h"
#include  "../inc/cstdior.h"
#include  "../../stringx/inc/stringx.h"

int
main(void)
{
    if (!strcmpigor(getosname(), "LINUX"))
    {
        printf("LINUX\n");
    }
    return 0;
}

int
fexists(char *fname)
{
    FILE *fp  = fopen(fname, "r");
    if (fp)
    {
        DEBUG_OUTF(DBGF_FE, fname);
        fclose(fp);
        return 1;
    }

    DEBUG_OUTF(DBGF_FNE, fname);
    return 0;
}
