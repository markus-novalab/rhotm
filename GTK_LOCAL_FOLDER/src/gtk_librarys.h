//
// Created by mark on 25/05/19.
//

#ifndef GTK_ALL_AGAINE_GTK_LIBRARYS_H
#define GTK_ALL_AGAINE_GTK_LIBRARYS_H

/**
 * @file gtk_librarys.h
 * File with including needs librires.
 * @author Team RHotM
 * @version 1.1
 * @date 2019.05.31
 */

#include <dirent.h>
#include <errno.h>
#include <gtk/gtk.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>

struct Data {
	char *path;
	char *mask;
	GtkEntry *pathTxT, *maskTxT;
	int argc;
	char **argv;
};

#endif //GTK_ALL_AGAINE_GTK_LIBRARYS_H
