/*
    COP - Codes of OPerations

    This file is part of YLA VM (Yet another Language for Academic purpose: Virtual Machine).

    YLA VM is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Foobar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef _yla_cop_h
#define _yla_cop_h

typedef unsigned char yla_cop_type;

/*
codes of operations
*/
#define CNOP	0x00

#define CPUSH	0x01
#define CLOAD	0x02
#define CSAVE	0x03

#define CADD	0x10
#define CSUB	0x11
#define CMULT	0x12
#define CDIV	0x13

#define CJMP    0x20
#define CJZ     0x21
#define CJNZ    0x22

#define CINS    0x30
#define CIN	    0x31
#define COUT	0x32

#define CHALT	0xff

#endif