/*
 * jpegsave.cpp - class for saving an ImageSource to disk as a JPEG file.
 *
 * Copyright (c) 2004 by Alastair M. Robinson
 * Distributed under the terms of the GNU General Public License -
 * see the file named "COPYING" for more details.
 *
 */


#ifndef JPEGSAVE_H
#define JPEGSAVE_H

#include <stdio.h>
extern "C"
{
#ifdef WIN32
// Ugly hack to be compatible with the libjpeg62 shipped with GIMP.
typedef unsigned char boolean;
#define HAVE_BOOLEAN
#endif
#include <jpeglib.h>
#include <jerror.h>
}

#include "imagesource.h"
#include "imagesaver.h"

struct JPEGSaver_ErrManager;
class JPEGSaver : public ImageSaver
{
	public:
	// Provide a NULL filename to output to stdout
	JPEGSaver(const char *filename,RefCountPtr<ImageSource> is,int compression=85);
	~JPEGSaver();
	void ProcessRow(int row);
	void EmbedProfile(RefCountPtr<CMSProfile> profile);
	private:
	int width,height;
	int bytesperrow;
	struct jpeg_compress_struct *cinfo;
	unsigned char *tmpbuffer;
	struct JPEGSaver_ErrManager *err;
};

#endif
