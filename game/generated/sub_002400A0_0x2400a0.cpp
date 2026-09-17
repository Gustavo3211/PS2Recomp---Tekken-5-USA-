#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002400A0
// Address: 0x2400a0 - 0x2400c0
void sub_002400A0_0x2400a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002400A0_0x2400a0");
#endif

    ctx->pc = 0x2400a0u;

    // 0x2400a0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2400a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2400a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2400a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2400a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2400a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2400ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2400acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2400b0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2400b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2400b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2400b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2400b8: 0x944202c8  lhu         $v0, 0x2C8($v0)
    ctx->pc = 0x2400b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 712)));
    // 0x2400bc: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    ctx->pc = 0x2400c0u;
}
