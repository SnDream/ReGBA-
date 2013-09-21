#ifndef __DRAW_H__
#define __DRAW_H__

#include "port.h"

#define GCW0_SCREEN_WIDTH  320
#define GCW0_SCREEN_HEIGHT 240

extern SDL_Surface* GBAScreenSurface;
extern SDL_Surface* OutputSurface;

typedef enum
{
  unscaled,
  fullscreen,
  scaled_aspect,
} video_scale_type;

void init_video();

extern void ApplyScaleMode(video_scale_type NewMode);

#endif /* __DRAW_H__ */