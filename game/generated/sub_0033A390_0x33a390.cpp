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

// Function: sub_0033A390
// Address: 0x33a390 - 0x33a400
void sub_0033A390_0x33a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A390_0x33a390");
#endif

    switch (ctx->pc) {
        case 0x33a3c8u: goto label_33a3c8;
        default: break;
    }

    ctx->pc = 0x33a390u;

    // 0x33a390: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33a390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33a394: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x33a394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33a398: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x33a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33a39c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x33a39cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33a3a0: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x33A3A0u;
    {
        const bool branch_taken_0x33a3a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3A0u;
        // 0x33a3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3a0) {
            ctx->pc = 0x33A3F4u;
            goto label_33a3f4;
        }
    }
    ctx->pc = 0x33A3A8u;
    // 0x33a3a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33a3ac: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33a3b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33a3b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33a3b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a3bc: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x33A3BCu;
    {
        const bool branch_taken_0x33a3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x33A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3BCu;
        // 0x33a3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3bc) {
            ctx->pc = 0x33A3F0u;
            goto label_33a3f0;
        }
    }
    ctx->pc = 0x33A3C4u;
    // 0x33a3c4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x33a3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_33a3c8:
    // 0x33a3c8: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A3C8u;
    {
        const bool branch_taken_0x33a3c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3C8u;
        // 0x33a3cc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3c8) {
            ctx->pc = 0x33A3ECu;
            goto label_33a3ec;
        }
    }
    ctx->pc = 0x33A3D0u;
    // 0x33a3d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a3d4: 0x0  nop
    ctx->pc = 0x33a3d4u;
    // NOP
    // 0x33a3d8: 0x0  nop
    ctx->pc = 0x33a3d8u;
    // NOP
    // 0x33a3dc: 0x0  nop
    ctx->pc = 0x33a3dcu;
    // NOP
    // 0x33a3e0: 0x0  nop
    ctx->pc = 0x33a3e0u;
    // NOP
    // 0x33a3e4: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33A3E4u;
    {
        const bool branch_taken_0x33a3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x33a3e4) {
            ctx->pc = 0x33A3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A3E4u;
            // 0x33a3e8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a3c8;
        }
    }
    ctx->pc = 0x33A3ECu;
label_33a3ec:
    // 0x33a3ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33a3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a3f0:
    // 0x33a3f0: 0x87100b  movn        $v0, $a0, $a3
    ctx->pc = 0x33a3f0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_33a3f4:
    // 0x33a3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x33A3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A3FCu;
    // 0x33a3fc: 0x0  nop
    ctx->pc = 0x33a3fcu;
    // NOP
    ctx->pc = 0x33a400u;
}
