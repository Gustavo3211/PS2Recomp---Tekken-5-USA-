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

// Function: sub_00113FA8
// Address: 0x113fa8 - 0x113ff0
void sub_00113FA8_0x113fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113FA8_0x113fa8");
#endif

    switch (ctx->pc) {
        case 0x113fa8u: goto label_113fa8;
        case 0x113facu: goto label_113fac;
        case 0x113fb0u: goto label_113fb0;
        case 0x113fb4u: goto label_113fb4;
        case 0x113fb8u: goto label_113fb8;
        case 0x113fbcu: goto label_113fbc;
        case 0x113fc0u: goto label_113fc0;
        case 0x113fc4u: goto label_113fc4;
        case 0x113fc8u: goto label_113fc8;
        case 0x113fccu: goto label_113fcc;
        case 0x113fd0u: goto label_113fd0;
        case 0x113fd4u: goto label_113fd4;
        case 0x113fd8u: goto label_113fd8;
        case 0x113fdcu: goto label_113fdc;
        case 0x113fe0u: goto label_113fe0;
        case 0x113fe4u: goto label_113fe4;
        case 0x113fe8u: goto label_113fe8;
        case 0x113fecu: goto label_113fec;
        default: break;
    }

    ctx->pc = 0x113fa8u;

label_113fa8:
    // 0x113fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_113fac:
    // 0x113fac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x113facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_113fb0:
    // 0x113fb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_113fb4:
    // 0x113fb4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_113fb8:
    if (ctx->pc == 0x113FB8u) {
        ctx->pc = 0x113FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FB4u;
        // 0x113fb8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113FBCu;
        goto label_113fbc;
    }
    ctx->pc = 0x113FB4u;
    {
        const bool branch_taken_0x113fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FB4u;
        // 0x113fb8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fb4) {
            ctx->pc = 0x113FD4u;
            goto label_113fd4;
        }
    }
    ctx->pc = 0x113FBCu;
label_113fbc:
    // 0x113fbc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x113fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_113fc0:
    // 0x113fc0: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x113fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_113fc4:
    // 0x113fc4: 0x8c5cbb00  lw          $gp, -0x4500($v0)
    ctx->pc = 0x113fc4u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949632)));
label_113fc8:
    // 0x113fc8: 0x60f809  jalr        $v1
label_113fcc:
    if (ctx->pc == 0x113FCCu) {
        ctx->pc = 0x113FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FC8u;
        // 0x113fcc: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113FD0u;
        goto label_113fd0;
    }
    ctx->pc = 0x113FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113FD0u);
        ctx->pc = 0x113FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FC8u;
        // 0x113fcc: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113FC8u, 0x113FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113FD0u;
label_113fd0:
    // 0x113fd0: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x113fd0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113fd4:
    // 0x113fd4: 0xf  sync
    ctx->pc = 0x113fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_113fd8:
    // 0x113fd8: 0x42000038  ei
    ctx->pc = 0x113fd8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_113fdc:
    // 0x113fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_113fe0:
    // 0x113fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113fe4:
    // 0x113fe4: 0x3e00008  jr          $ra
label_113fe8:
    if (ctx->pc == 0x113FE8u) {
        ctx->pc = 0x113FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FE4u;
        // 0x113fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113FECu;
        goto label_113fec;
    }
    ctx->pc = 0x113FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FE4u;
        // 0x113fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113FECu;
label_113fec:
    // 0x113fec: 0x0  nop
    ctx->pc = 0x113fecu;
    // NOP
    ctx->pc = 0x113ff0u;
}
