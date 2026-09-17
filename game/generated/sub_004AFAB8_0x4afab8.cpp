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

// Function: sub_004AFAB8
// Address: 0x4afab8 - 0x4afb18
void sub_004AFAB8_0x4afab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFAB8_0x4afab8");
#endif

    ctx->pc = 0x4afab8u;

    // 0x4afab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afabc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4afabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4afac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afac4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4afac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4afac8: 0x8c490d60  lw          $t1, 0xD60($v0)
    ctx->pc = 0x4afac8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4afacc: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4afaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4afad0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4afad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4afad4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4afad4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4afad8: 0x85250136  lh          $a1, 0x136($t1)
    ctx->pc = 0x4afad8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 310)));
    // 0x4afadc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4afadcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4afae0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4afae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4afae4: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4afae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4afae8: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4afae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4afaec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4afaecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4afaf0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4afaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4afaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afaf8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4afaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4afafc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afb00: 0x85220138  lh          $v0, 0x138($t1)
    ctx->pc = 0x4afb00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 312)));
    // 0x4afb04: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4afb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4afb08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afb0c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4afb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4afb10: 0x812bede  j           func_4AFB78
    ctx->pc = 0x4AFB10u;
    ctx->pc = 0x4AFB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFB10u;
    // 0x4afb14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB78u, 0x4AFB10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AFB18u;
}
