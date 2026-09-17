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

// Function: sub_0026C490
// Address: 0x26c490 - 0x26c4d8
void sub_0026C490_0x26c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C490_0x26c490");
#endif

    ctx->pc = 0x26c490u;

    // 0x26c490: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26c490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c494: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26c494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26c498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c49c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26c4a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c4a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C4A4u;
    {
        const bool branch_taken_0x26c4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4A4u;
        // 0x26c4a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4a4) {
            ctx->pc = 0x26C4C4u;
            goto label_26c4c4;
        }
    }
    ctx->pc = 0x26C4ACu;
    // 0x26c4ac: 0x2402061f  addiu       $v0, $zero, 0x61F
    ctx->pc = 0x26c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1567));
    // 0x26c4b0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C4B0u;
    {
        const bool branch_taken_0x26c4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4B0u;
        // 0x26c4b4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4b0) {
            ctx->pc = 0x26C4C8u;
            goto label_26c4c8;
        }
    }
    ctx->pc = 0x26C4B8u;
    // 0x26c4b8: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x26c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x26c4bc: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C4BCu;
    {
        const bool branch_taken_0x26c4bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26c4bc) {
            ctx->pc = 0x26C4D0u;
            goto label_26c4d0;
        }
    }
    ctx->pc = 0x26C4C4u;
label_26c4c4:
    // 0x26c4c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26c4c8:
    // 0x26c4c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c4cc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x26c4ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c4d0:
    // 0x26c4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x26C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4D0u;
        // 0x26c4d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C4D8u;
}
