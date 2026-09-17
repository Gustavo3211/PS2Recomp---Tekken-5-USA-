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

// Function: sub_004BFDC0
// Address: 0x4bfdc0 - 0x4bfe40
void sub_004BFDC0_0x4bfdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFDC0_0x4bfdc0");
#endif

    ctx->pc = 0x4bfdc0u;

    // 0x4bfdc0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bfdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bfdc4: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x4bfdc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4bfdc8: 0x24a50e58  addiu       $a1, $a1, 0xE58
    ctx->pc = 0x4bfdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3672));
    // 0x4bfdcc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4bfdccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4bfdd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bfdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E58u));
    // 0x4bfdd4: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x4bfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x4bfdd8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bfdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bfddc: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4bfddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4bfde0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfde4: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4bfde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4bfde8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfdec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bfdecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bfdf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfdf4: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4bfdf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bfdf8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4bfdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4bfdfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4bfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4bfe00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bfe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bfe04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfe08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bfe0c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bfe0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bfe10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bfe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4bfe14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4bfe14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4bfe18: 0x242170b0  addiu       $at, $at, 0x70B0
    ctx->pc = 0x4bfe18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28848));
    // 0x4bfe1c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4bfe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4bfe20: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4bfe20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bfe24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bfe28: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4bfe28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4bfe2c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4bfe2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bfe30: 0xa4c323c4  sh          $v1, 0x23C4($a2)
    ctx->pc = 0x4bfe30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bfe34: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4bfe34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bfe38: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFE38u;
        // 0x4bfe3c: 0xa4c4232e  sh          $a0, 0x232E($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BFE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BFE40u;
}
