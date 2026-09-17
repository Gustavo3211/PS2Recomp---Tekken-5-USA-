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

// Function: sub_002B76D8
// Address: 0x2b76d8 - 0x2b7758
void sub_002B76D8_0x2b76d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B76D8_0x2b76d8");
#endif

    switch (ctx->pc) {
        case 0x2b76f8u: goto label_2b76f8;
        case 0x2b7704u: goto label_2b7704;
        case 0x2b770cu: goto label_2b770c;
        case 0x2b7720u: goto label_2b7720;
        case 0x2b7728u: goto label_2b7728;
        case 0x2b7738u: goto label_2b7738;
        case 0x2b7744u: goto label_2b7744;
        default: break;
    }

    ctx->pc = 0x2b76d8u;

    // 0x2b76d8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2b76d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2b76dc: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x2b76dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x2b76e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b76e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76e4: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x2b76e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
    // 0x2b76e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b76e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76ec: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x2b76ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x2b76f0: 0xc0a9d00  jal         func_2A7400
    ctx->pc = 0x2B76F0u;
    SET_GPR_U32(ctx, 31, 0x2B76F8u);
    ctx->pc = 0x2B76F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B76F0u;
    // 0x2b76f4: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7400u, 0x2B76F0u, 0x2B76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B76F8u;
label_2b76f8:
    // 0x2b76f8: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x2b76f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b76fc: 0xc0a9d0e  jal         func_2A7438
    ctx->pc = 0x2B76FCu;
    SET_GPR_U32(ctx, 31, 0x2B7704u);
    ctx->pc = 0x2B7700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B76FCu;
    // 0x2b7700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7438u, 0x2B76FCu, 0x2B7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7704u;
label_2b7704:
    // 0x2b7704: 0xc0a9d00  jal         func_2A7400
    ctx->pc = 0x2B7704u;
    SET_GPR_U32(ctx, 31, 0x2B770Cu);
    ctx->pc = 0x2B7708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7704u;
    // 0x2b7708: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7400u, 0x2B7704u, 0x2B770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B770Cu;
label_2b770c:
    // 0x2b770c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2b770cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2b7710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7714: 0x24a54318  addiu       $a1, $a1, 0x4318
    ctx->pc = 0x2b7714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17176));
    // 0x2b7718: 0xc0a9d2c  jal         func_2A74B0
    ctx->pc = 0x2B7718u;
    SET_GPR_U32(ctx, 31, 0x2B7720u);
    ctx->pc = 0x2B771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7718u;
    // 0x2b771c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74B0u, 0x2B7718u, 0x2B7720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7720u;
label_2b7720:
    // 0x2b7720: 0xc0a9d00  jal         func_2A7400
    ctx->pc = 0x2B7720u;
    SET_GPR_U32(ctx, 31, 0x2B7728u);
    ctx->pc = 0x2B7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7720u;
    // 0x2b7724: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7400u, 0x2B7720u, 0x2B7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7728u;
label_2b7728:
    // 0x2b7728: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2b7728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b772c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7730: 0xc0a9d2c  jal         func_2A74B0
    ctx->pc = 0x2B7730u;
    SET_GPR_U32(ctx, 31, 0x2B7738u);
    ctx->pc = 0x2B7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7730u;
    // 0x2b7734: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74B0u, 0x2B7730u, 0x2B7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7738u;
label_2b7738:
    // 0x2b7738: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b7738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b773c: 0xc0a9d5a  jal         func_2A7568
    ctx->pc = 0x2B773Cu;
    SET_GPR_U32(ctx, 31, 0x2B7744u);
    ctx->pc = 0x2B7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B773Cu;
    // 0x2b7740: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7568u, 0x2B773Cu, 0x2B7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7744u;
label_2b7744:
    // 0x2b7744: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x2b7744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2b7748: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x2b7748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2b774c: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x2b774cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2b7750: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7750u;
        // 0x2b7754: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7758u;
}
