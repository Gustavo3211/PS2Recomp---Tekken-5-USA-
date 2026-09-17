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

// Function: sub_00113850
// Address: 0x113850 - 0x1138d0
void sub_00113850_0x113850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113850_0x113850");
#endif

    switch (ctx->pc) {
        case 0x11386cu: goto label_11386c;
        case 0x113874u: goto label_113874;
        case 0x113890u: goto label_113890;
        case 0x1138b4u: goto label_1138b4;
        default: break;
    }

    ctx->pc = 0x113850u;

    // 0x113850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113854: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x113854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11385c: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x11385cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    // 0x113860: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113864: 0xc044df8  jal         func_1137E0
    ctx->pc = 0x113864u;
    SET_GPR_U32(ctx, 31, 0x11386Cu);
    ctx->pc = 0x113868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113864u;
    // 0x113868: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137E0u, 0x113864u, 0x11386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11386Cu;
label_11386c:
    // 0x11386c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x11386Cu;
    SET_GPR_U32(ctx, 31, 0x113874u);
    ctx->pc = 0x113870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11386Cu;
    // 0x113870: 0x8e2411a0  lw          $a0, 0x11A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x11386Cu, 0x113874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113874u;
label_113874:
    // 0x113874: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x113874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x113878: 0x2465b840  addiu       $a1, $v1, -0x47C0
    ctx->pc = 0x113878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x11387c: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x11387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x113880: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x113880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x113884: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113884u;
    {
        const bool branch_taken_0x113884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113884u;
        // 0x113888: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113884) {
            ctx->pc = 0x1138ACu;
            goto label_1138ac;
        }
    }
    ctx->pc = 0x11388Cu;
    // 0x11388c: 0x0  nop
    ctx->pc = 0x11388cu;
    // NOP
label_113890:
    // 0x113890: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x113890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x113894: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x113894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113898: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x113898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x11389c: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x11389cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1138a0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x1138a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1138a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1138A4u;
    {
        const bool branch_taken_0x1138a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1138a4) {
            ctx->pc = 0x113890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113890;
        }
    }
    ctx->pc = 0x1138ACu;
label_1138ac:
    // 0x1138ac: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x1138ACu;
    SET_GPR_U32(ctx, 31, 0x1138B4u);
    ctx->pc = 0x1138B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138ACu;
    // 0x1138b0: 0x8e2411a0  lw          $a0, 0x11A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x1138ACu, 0x1138B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138B4u;
label_1138b4:
    // 0x1138b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1138b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1138b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1138bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1138bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1138c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1138c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1138c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1138C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1138C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138C4u;
        // 0x1138c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1138C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1138CCu;
    // 0x1138cc: 0x0  nop
    ctx->pc = 0x1138ccu;
    // NOP
    ctx->pc = 0x1138d0u;
}
