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

// Function: sub_00322090
// Address: 0x322090 - 0x322100
void sub_00322090_0x322090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322090_0x322090");
#endif

    switch (ctx->pc) {
        case 0x3220b4u: goto label_3220b4;
        case 0x3220c0u: goto label_3220c0;
        case 0x3220c8u: goto label_3220c8;
        case 0x3220d4u: goto label_3220d4;
        case 0x3220e8u: goto label_3220e8;
        default: break;
    }

    ctx->pc = 0x322090u;

    // 0x322090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x322090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322094: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322098: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x322098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x32209c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32209cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3220a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3220a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3220a4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x3220a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3220a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3220a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3220ac: 0xc0ceedc  jal         func_33BB70
    ctx->pc = 0x3220ACu;
    SET_GPR_U32(ctx, 31, 0x3220B4u);
    ctx->pc = 0x3220B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220ACu;
    // 0x3220b0: 0x24500c80  addiu       $s0, $v0, 0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BB70u, 0x3220ACu, 0x3220B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220B4u;
label_3220b4:
    // 0x3220b4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3220b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3220b8: 0xc0c7a08  jal         func_31E820
    ctx->pc = 0x3220B8u;
    SET_GPR_U32(ctx, 31, 0x3220C0u);
    ctx->pc = 0x3220BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220B8u;
    // 0x3220bc: 0x2484d280  addiu       $a0, $a0, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E820u, 0x3220B8u, 0x3220C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220C0u;
label_3220c0:
    // 0x3220c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3220c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3220c4: 0x0  nop
    ctx->pc = 0x3220c4u;
    // NOP
label_3220c8:
    // 0x3220c8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x3220c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3220cc: 0xc0cf83a  jal         func_33E0E8
    ctx->pc = 0x3220CCu;
    SET_GPR_U32(ctx, 31, 0x3220D4u);
    ctx->pc = 0x3220D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220CCu;
    // 0x3220d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E0E8u, 0x3220CCu, 0x3220D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220D4u;
label_3220d4:
    // 0x3220d4: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3220D4u;
    {
        const bool branch_taken_0x3220d4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x3220d4) {
            ctx->pc = 0x3220D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3220D4u;
            // 0x3220d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3220C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3220c8;
        }
    }
    ctx->pc = 0x3220DCu;
    // 0x3220dc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3220dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3220e0: 0xc0cdc64  jal         func_337190
    ctx->pc = 0x3220E0u;
    SET_GPR_U32(ctx, 31, 0x3220E8u);
    ctx->pc = 0x3220E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220E0u;
    // 0x3220e4: 0x2484ec80  addiu       $a0, $a0, -0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337190u, 0x3220E0u, 0x3220E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220E8u;
label_3220e8:
    // 0x3220e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3220e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3220ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3220ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3220f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3220f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3220f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3220f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3220f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3220F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3220FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220F8u;
        // 0x3220fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3220F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322100u;
}
