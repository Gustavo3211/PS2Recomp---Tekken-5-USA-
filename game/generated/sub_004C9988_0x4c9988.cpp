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

// Function: sub_004C9988
// Address: 0x4c9988 - 0x4c99f8
void sub_004C9988_0x4c9988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9988_0x4c9988");
#endif

    ctx->pc = 0x4c9988u;

    // 0x4c9988: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x4c9988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4c998c: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x4c998cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c9990: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c9990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c9994: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4c9994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4c9998: 0x2463ffbd  addiu       $v1, $v1, -0x43
    ctx->pc = 0x4c9998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
    // 0x4c999c: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4c999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4c99a0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4c99a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4c99a4: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x4c99a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c99a8: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x4c99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c99ac: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x4c99acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c99b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c99b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c99b4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4c99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c99b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c99bc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4c99bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4c99c0: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x4c99c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c99c4: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x4c99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c99c8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4c99c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4c99cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c99ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4c99d0: 0x242171f8  addiu       $at, $at, 0x71F8
    ctx->pc = 0x4c99d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29176));
    // 0x4c99d4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4c99d8: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x4c99d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c99dc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c99e0: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4c99e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4c99e4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4c99e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c99e8: 0xa4a323c4  sh          $v1, 0x23C4($a1)
    ctx->pc = 0x4c99e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c99ec: 0xa4a6232c  sh          $a2, 0x232C($a1)
    ctx->pc = 0x4c99ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c99f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C99F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C99F0u;
        // 0x4c99f4: 0xa4a4232e  sh          $a0, 0x232E($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 9006), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C99F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C99F8u;
}
