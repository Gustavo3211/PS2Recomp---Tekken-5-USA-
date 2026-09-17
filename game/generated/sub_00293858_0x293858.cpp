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

// Function: sub_00293858
// Address: 0x293858 - 0x2938e0
void sub_00293858_0x293858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293858_0x293858");
#endif

    switch (ctx->pc) {
        case 0x2938b4u: goto label_2938b4;
        default: break;
    }

    ctx->pc = 0x293858u;

    // 0x293858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x293858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29385c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x29385cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x293860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x293860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x293864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x293868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29386c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x29386cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293874: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x293874u;
    {
        const bool branch_taken_0x293874 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x293878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293874u;
        // 0x293878: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293874) {
            ctx->pc = 0x293890u;
            goto label_293890;
        }
    }
    ctx->pc = 0x29387Cu;
    // 0x29387c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293880: 0x50e20007  beql        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293880u;
    {
        const bool branch_taken_0x293880 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x293880) {
            ctx->pc = 0x293884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293880u;
            // 0x293884: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2938A0u;
            goto label_2938a0;
        }
    }
    ctx->pc = 0x293888u;
    // 0x293888: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x293888u;
    {
        const bool branch_taken_0x293888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293888u;
        // 0x29388c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293888) {
            ctx->pc = 0x2938C8u;
            goto label_2938c8;
        }
    }
    ctx->pc = 0x293890u;
label_293890:
    // 0x293890: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x293890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293894: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x293894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x293898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x293898u;
    {
        const bool branch_taken_0x293898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293898u;
        // 0x29389c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293898) {
            ctx->pc = 0x2938A8u;
            goto label_2938a8;
        }
    }
    ctx->pc = 0x2938A0u;
label_2938a0:
    // 0x2938a0: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x2938a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x2938a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2938a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2938a8:
    // 0x2938a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2938a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2938ac: 0xc086438  jal         func_2190E0
    ctx->pc = 0x2938ACu;
    SET_GPR_U32(ctx, 31, 0x2938B4u);
    ctx->pc = 0x2938B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2938ACu;
    // 0x2938b0: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190E0u, 0x2938ACu, 0x2938B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2938B4u;
label_2938b4:
    // 0x2938b4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2938B4u;
    {
        const bool branch_taken_0x2938b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2938B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938B4u;
        // 0x2938b8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938b4) {
            ctx->pc = 0x2938C8u;
            goto label_2938c8;
        }
    }
    ctx->pc = 0x2938BCu;
    // 0x2938bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2938bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2938c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2938c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2938c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2938c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2938c8:
    // 0x2938c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2938c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2938cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2938ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2938d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2938d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2938d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2938D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2938D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938D4u;
        // 0x2938d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2938D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2938DCu;
    // 0x2938dc: 0x0  nop
    ctx->pc = 0x2938dcu;
    // NOP
    ctx->pc = 0x2938e0u;
}
