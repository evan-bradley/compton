#include "common.h"
#include "compton.h"

void
change_scale(session_t *ps, double new_scale) {
  ps->scale = new_scale;
  ps->scale_changed = true;

  // Force window stuff to update.
  win *w;
  for (w = ps->list; w; w = w->next) {
    free_wpaint(ps, w);
    free_region(ps, &w->border_size);
    free_paint(ps, &w->shadow_paint);
  }

  rebuild_screen_reg(ps);
  rebuild_shadow_exclude_reg(ps);
  free_all_damage_last(ps);
  force_repaint(ps);
}

