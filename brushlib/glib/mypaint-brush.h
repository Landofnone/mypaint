#ifndef MYPAINTBRUSHGLIB_H
#define MYPAINTBRUSHGLIB_H

#include <mypaint-config.h>

#if MYPAINT_CONFIG_USE_GLIB

#include <glib-object.h>
#define MYPAINT_TYPE_BRUSH               (mypaint_brush_get_type ())
#define MYPAINT_VALUE_HOLDS_BRUSH(value) (G_TYPE_CHECK_VALUE_TYPE ((value), MYPAINT_TYPE_BRUSH))
GType mypaint_brush_get_type(void);

#endif

#endif // MYPAINTBRUSHGLIB_H