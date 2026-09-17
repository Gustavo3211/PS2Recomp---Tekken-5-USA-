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

// Function: sub_00239338
// Address: 0x239338 - 0x2393c8
void sub_00239338_0x239338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239338_0x239338");
#endif

    switch (ctx->pc) {
        case 0x239358u: goto label_239358;
        default: break;
    }

    ctx->pc = 0x239338u;

    // 0x239338: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23933c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23933cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x239340: 0x244ad3d0  addiu       $t2, $v0, -0x2C30
    ctx->pc = 0x239340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955984));
    // 0x239344: 0x246c23b0  addiu       $t4, $v1, 0x23B0
    ctx->pc = 0x239344u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 9136));
    // 0x239348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x239348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23934c: 0x25490008  addiu       $t1, $t2, 0x8
    ctx->pc = 0x23934cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x239350: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x239354: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_239358:
    // 0x239358: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23935c: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x23935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x239360: 0x493021  addu        $a2, $v0, $t1
    ctx->pc = 0x239360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x239364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x239364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239368: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x239368u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23936c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23936Cu;
    {
        const bool branch_taken_0x23936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23936Cu;
        // 0x239370: 0x28e80002  slti        $t0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23936c) {
            ctx->pc = 0x2393B0u;
            goto label_2393b0;
        }
    }
    ctx->pc = 0x239374u;
    // 0x239374: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x239374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239378: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x239378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x23937c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x23937cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x239380: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x239380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x239384: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x239384u;
    {
        const bool branch_taken_0x239384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239384) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x23938Cu;
    // 0x23938c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239390: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x239390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x239394: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x239394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x239398: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x239398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23939c: 0x506b0005  beql        $v1, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x23939Cu;
    {
        const bool branch_taken_0x23939c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x23939c) {
            ctx->pc = 0x2393A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23939Cu;
            // 0x2393a0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x2393A4u;
    // 0x2393a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2393A4u;
    {
        const bool branch_taken_0x2393a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393a4) {
            ctx->pc = 0x2393B4u;
            goto label_2393b4;
        }
    }
    ctx->pc = 0x2393ACu;
    // 0x2393ac: 0x0  nop
    ctx->pc = 0x2393acu;
    // NOP
label_2393b0:
    // 0x2393b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2393b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2393b4:
    // 0x2393b4: 0x1500ffe8  bnez        $t0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2393B4u;
    {
        const bool branch_taken_0x2393b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2393B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393B4u;
        // 0x2393b8: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393b4) {
            ctx->pc = 0x239358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239358;
        }
    }
    ctx->pc = 0x2393BCu;
    // 0x2393bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2393BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2393BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2393C4u;
    // 0x2393c4: 0x0  nop
    ctx->pc = 0x2393c4u;
    // NOP
    ctx->pc = 0x2393c8u;
}
