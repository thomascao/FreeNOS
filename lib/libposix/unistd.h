/*
 * Copyright (C) 2009 Niek Linnenbank
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __LIBPOSIX_UNISTD_H
#define __LIBPOSIX_UNISTD_H

#include <Macros.h>
#include "types.h"

/**                                                                                                                                                                                                     
 * @defgroup posix POSIX.1-2008                                                                                                                                                                         
 * @{                                                                                                                                                                                                   
 */ 

/**
 * Integer value indicating version of this standard (C-language binding)
 * to which the implementation conforms. For implementations conforming to
 * POSIX.1-2008, the value shall be 200809L.
 */
#define _POSIX_VERSION 200809L

/**
 * Integer value indicating version of the Shell and Utilities volume of
 * POSIX.1 to which the implementation conforms. For implementations
 * conforming to POSIX.1-2008, the value shall be 200809L.
 */
#define _POSIX2_VERSION 200809L

/**
 * Get the process ID.
 * The getpid() function shall return the process ID of the calling process.
 * @return The getpid() function shall always be successful and no return
 *         value is reserved to indicate an error.
 */
extern C pid_t getpid();

/**
 * Read from a file
 * @param fildes The read() function shall attempt to read nbyte bytes from the file
 *               associated with the open file descriptor, fildes, into the buffer
 *               pointed to by buf.
 * @param buf The read() function shall attempt to read nbyte bytes from the file
 *            associated with the open file descriptor, fildes, into the buffer
 *            pointed to by buf.
 * @param nbyte If the value of nbyte is greater than {SSIZE_MAX}, the result is implementation-defined.
 * @return Upon successful completion, these functions shall return a non-negative integer
 *         indicating the number of bytes actually read. Otherwise, the functions shall
 *         return -1 and set errno to indicate the error.
 */
extern C ssize_t read(int fildes, void *buf, size_t nbyte);

/**
 * Close a file descriptor
 * @param fildes The close() function shall deallocate the file descriptor indicated by fildes.
 * @return Upon successful completion, 0 shall be returned; otherwise, -1 shall
 *         be returned and errno set to indicate the error.
 *
 */
extern C int close(int fildes);

/**
 * @}
 */

#endif /* __LIBPOSIX_UNISTD_H */