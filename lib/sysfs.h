/*
    sysfs.h - part of libsensors, a library for reading Linux sensor data
    Copyright (C) Mark M. Hoffman <mhoffman@lightlink.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef SENSORS_LIB_SYSFS_H
#define SENSORS_LIB_SYSFS_H

extern char sensors_sysfs_mount[];

int sensors_init_sysfs(void);

int sensors_read_sysfs_chips(void);

int sensors_read_sysfs_bus(void);

/* Read a value out of a sysfs attribute file */
int sensors_read_sysfs_attr(const sensors_chip_name *name, int subfeat_nr,
			    double *value);

/* Write a value to a sysfs attribute file */
int sensors_write_sysfs_attr(const sensors_chip_name *name, int subfeat_nr,
			     double value);

#endif /* !SENSORS_LIB_SYSFS_H */
