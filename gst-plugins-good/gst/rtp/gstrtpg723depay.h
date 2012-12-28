/* GStreamer
 *
 * Copyright (C) <2010> Wim Taymans <wim.taymans@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GST_RTP_G723_DEPAY_H__
#define __GST_RTP_G723_DEPAY_H__

#include <gst/gst.h>
#include <gst/rtp/gstrtpbasedepayload.h>

G_BEGIN_DECLS

#define GST_TYPE_RTP_G723_DEPAY \
  (gst_rtp_g723_depay_get_type())
#define GST_RTP_G723_DEPAY(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_RTP_G723_DEPAY,GstRtpG723Depay))
#define GST_RTP_G723_DEPAY_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_RTP_G723_DEPAY,GstRtpG723DepayClass))
#define GST_IS_RTP_G723_DEPAY(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_RTP_G723_DEPAY))
#define GST_IS_RTP_G723_DEPAY_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_RTP_G723_DEPAY))

typedef struct _GstRtpG723Depay GstRtpG723Depay;
typedef struct _GstRtpG723DepayClass GstRtpG723DepayClass;

struct _GstRtpG723Depay
{
  GstRTPBaseDepayload depayload;
};

struct _GstRtpG723DepayClass
{
  GstRTPBaseDepayloadClass parent_class;
};

GType gst_rtp_g723_depay_get_type (void);

gboolean gst_rtp_g723_depay_plugin_init (GstPlugin * plugin);

G_END_DECLS

#endif /* __GST_RTP_G723_DEPAY_H__ */
