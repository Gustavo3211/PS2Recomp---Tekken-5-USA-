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

// Function: sub_0012F488
// Address: 0x12f488 - 0x12f4f0
void sub_0012F488_0x12f488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F488_0x12f488");
#endif

    switch (ctx->pc) {
        case 0x12f4b8u: goto label_12f4b8;
        default: break;
    }

    ctx->pc = 0x12f488u;

    // 0x12f488: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12f48c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x12f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12f490: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f494: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12F494u;
    {
        const bool branch_taken_0x12f494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f494) {
            ctx->pc = 0x12F4E8u;
            goto label_12f4e8;
        }
    }
    ctx->pc = 0x12F49Cu;
    // 0x12f49c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12f4a0: 0x248a0014  addiu       $t2, $a0, 0x14
    ctx->pc = 0x12f4a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x12f4a4: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x12f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x12f4a8: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x12f4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x12f4ac: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x12f4acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f4b0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x12f4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x12f4b4: 0x0  nop
    ctx->pc = 0x12f4b4u;
    // NOP
label_12f4b8:
    // 0x12f4b8: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x12f4b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x12f4bc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x12f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f4c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12f4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f4c4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x12f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12f4c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f4cc: 0x147402b  sltu        $t0, $t2, $a3
    ctx->pc = 0x12f4ccu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12f4d0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x12f4d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12f4d4: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F4D4u;
    {
        const bool branch_taken_0x12f4d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x12F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4D4u;
        // 0x12f4d8: 0xc3100a  movz        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4d4) {
            ctx->pc = 0x12F4E8u;
            goto label_12f4e8;
        }
    }
    ctx->pc = 0x12F4DCu;
    // 0x12f4dc: 0x5500fff6  bnel        $t0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x12F4DCu;
    {
        const bool branch_taken_0x12f4dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f4dc) {
            ctx->pc = 0x12F4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F4DCu;
            // 0x12f4e0: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f4b8;
        }
    }
    ctx->pc = 0x12F4E4u;
    // 0x12f4e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f4e8:
    // 0x12f4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F4F0u;
}
