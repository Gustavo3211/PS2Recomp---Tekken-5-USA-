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

// Function: sub_002BC6F8
// Address: 0x2bc6f8 - 0x2bc750
void sub_002BC6F8_0x2bc6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC6F8_0x2bc6f8");
#endif

    switch (ctx->pc) {
        case 0x2bc718u: goto label_2bc718;
        case 0x2bc730u: goto label_2bc730;
        default: break;
    }

    ctx->pc = 0x2bc6f8u;

    // 0x2bc6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc6fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bc704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bc708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bc70c: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x2bc70cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2bc710: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2bc710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2bc714: 0x0  nop
    ctx->pc = 0x2bc714u;
    // NOP
label_2bc718:
    // 0x2bc718: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2bc718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2bc71c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc720: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x2bc720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2bc724: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2bc724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2bc728: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC728u;
    SET_GPR_U32(ctx, 31, 0x2BC730u);
    ctx->pc = 0x2BC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC728u;
    // 0x2bc72c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC728u, 0x2BC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC730u;
label_2bc730:
    // 0x2bc730: 0x623fff9  bgezl       $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BC730u;
    {
        const bool branch_taken_0x2bc730 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2bc730) {
            ctx->pc = 0x2BC734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC730u;
            // 0x2bc734: 0x8e050080  lw          $a1, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc718;
        }
    }
    ctx->pc = 0x2BC738u;
    // 0x2bc738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc73c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bc73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bc740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc744: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC744u;
        // 0x2bc748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC74Cu;
    // 0x2bc74c: 0x0  nop
    ctx->pc = 0x2bc74cu;
    // NOP
    ctx->pc = 0x2bc750u;
}
