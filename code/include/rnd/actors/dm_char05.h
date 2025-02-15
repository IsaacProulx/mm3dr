#ifndef _RND_ACTORS_DM_CHAR05_H_
#define _RND_ACTORS_DM_CHAR05_H_

#include "game/actor.h"
#include "rnd/models.h"
#if defined ENABLE_DEBUG || defined DEBUG_PRINT
#include "common/debug.h"
extern "C" {
#include <3ds/svc.h>
}
#endif
namespace rnd {
  struct Dm_Char05 : public game::act::Actor {
    game::as::ActorUtil actor_util;
    void* skelAnimeModel;
    void* calc_fn;
    u16 field_28c;
    u8 field_28e;
    u8 object_idx;
    float field_290[4];
    u8 gap_2a0[24];
  };
  static_assert(sizeof(Dm_Char05) == 0x2B8);

  void DMChar05_Init(game::act::Actor* actor, game::GlobalContext* gctx);

  void DMChar05_Draw(game::act::Actor* actor, game::GlobalContext* gctx);

  void DMChar05_Destroy(game::act::Actor* self, game::GlobalContext* gctx);
}  // namespace rnd
#endif