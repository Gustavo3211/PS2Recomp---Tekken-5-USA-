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

// Function: sub_004AFA28
// Address: 0x4afa28 - 0x4afab8
void sub_004AFA28_0x4afa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFA28_0x4afa28");
#endif

    ctx->pc = 0x4afa28u;

    // 0x4afa28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afa2c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4afa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4afa30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afa34: 0x25080d3c  addiu       $t0, $t0, 0xD3C
    ctx->pc = 0x4afa34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3388));
    // 0x4afa38: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4afa38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afa3c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4afa3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4afa40: 0x85420118  lh          $v0, 0x118($t2)
    ctx->pc = 0x4afa40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 280)));
    // 0x4afa44: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4afa44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4afa48: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4afa48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4afa4c: 0x24e70d40  addiu       $a3, $a3, 0xD40
    ctx->pc = 0x4afa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3392));
    // 0x4afa50: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4afa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4afa54: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4afa54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4afa58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4afa58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4afa5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afa60: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4afa60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4afa64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afa64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afa68: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4afa68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4afa6c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4afa6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4afa70: 0x8542011c  lh          $v0, 0x11C($t2)
    ctx->pc = 0x4afa70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 284)));
    // 0x4afa74: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4afa74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afa78: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4afa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4afa7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afa80: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4afa80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4afa84: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4afa84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4afa88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afa88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afa8c: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4afa8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4afa90: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4afa90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4afa94: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4afa94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4afa98: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4afa98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4afa9c: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x4afa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x4afaa0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4afaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4afaa4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afaa8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4afaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4afaac: 0x812bede  j           func_4AFB78
    ctx->pc = 0x4AFAACu;
    ctx->pc = 0x4AFAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFAACu;
    // 0x4afab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB78u, 0x4AFAACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AFAB4u;
    // 0x4afab4: 0x0  nop
    ctx->pc = 0x4afab4u;
    // NOP
    ctx->pc = 0x4afab8u;
}
