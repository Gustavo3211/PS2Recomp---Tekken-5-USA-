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

// Function: sub_00100FF0
// Address: 0x100ff0 - 0x101078
void sub_00100FF0_0x100ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100FF0_0x100ff0");
#endif

    switch (ctx->pc) {
        case 0x10100cu: goto label_10100c;
        case 0x101014u: goto label_101014;
        case 0x10101cu: goto label_10101c;
        case 0x101024u: goto label_101024;
        case 0x10102cu: goto label_10102c;
        case 0x101034u: goto label_101034;
        case 0x10103cu: goto label_10103c;
        case 0x101054u: goto label_101054;
        case 0x101064u: goto label_101064;
        default: break;
    }

    ctx->pc = 0x100ff0u;

    // 0x100ff0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100ff4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100ff8: 0x8c4583c0  lw          $a1, -0x7C40($v0)
    ctx->pc = 0x100ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x100ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101000: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x101000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x101004: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x101004u;
    SET_GPR_U32(ctx, 31, 0x10100Cu);
    ctx->pc = 0x101008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101004u;
    // 0x101008: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x101004u, 0x10100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10100Cu;
label_10100c:
    // 0x10100c: 0xc04019e  jal         func_100678
    ctx->pc = 0x10100Cu;
    SET_GPR_U32(ctx, 31, 0x101014u);
    ctx->pc = 0x101010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10100Cu;
    // 0x101010: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100678u, 0x10100Cu, 0x101014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101014u;
label_101014:
    // 0x101014: 0xc0401b2  jal         func_1006C8
    ctx->pc = 0x101014u;
    SET_GPR_U32(ctx, 31, 0x10101Cu);
    ctx->pc = 0x1006C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006C8u, 0x101014u, 0x10101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10101Cu;
label_10101c:
    // 0x10101c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10101Cu;
    SET_GPR_U32(ctx, 31, 0x101024u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10101Cu, 0x101024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101024u;
label_101024:
    // 0x101024: 0xc0401d0  jal         func_100740
    ctx->pc = 0x101024u;
    SET_GPR_U32(ctx, 31, 0x10102Cu);
    ctx->pc = 0x100740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100740u, 0x101024u, 0x10102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10102Cu;
label_10102c:
    // 0x10102c: 0xc0401c4  jal         func_100710
    ctx->pc = 0x10102Cu;
    SET_GPR_U32(ctx, 31, 0x101034u);
    ctx->pc = 0x100710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100710u, 0x10102Cu, 0x101034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101034u;
label_101034:
    // 0x101034: 0xc0401ca  jal         func_100728
    ctx->pc = 0x101034u;
    SET_GPR_U32(ctx, 31, 0x10103Cu);
    ctx->pc = 0x100728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100728u, 0x101034u, 0x10103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10103Cu;
label_10103c:
    // 0x10103c: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x10103cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x101040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101044: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101044u;
    {
        const bool branch_taken_0x101044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x101048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101044u;
        // 0x101048: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101044) {
            ctx->pc = 0x101054u;
            goto label_101054;
        }
    }
    ctx->pc = 0x10104Cu;
    // 0x10104c: 0xc04021e  jal         func_100878
    ctx->pc = 0x10104Cu;
    SET_GPR_U32(ctx, 31, 0x101054u);
    ctx->pc = 0x100878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100878u, 0x10104Cu, 0x101054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101054u;
label_101054:
    // 0x101054: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x101054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x101058: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x101058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10105c: 0xc04007a  jal         func_1001E8
    ctx->pc = 0x10105Cu;
    SET_GPR_U32(ctx, 31, 0x101064u);
    ctx->pc = 0x101060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10105Cu;
    // 0x101060: 0x24a550a0  addiu       $a1, $a1, 0x50A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001E8u, 0x10105Cu, 0x101064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101064u;
label_101064:
    // 0x101064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101068: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x101068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10106c: 0x3e00008  jr          $ra
    ctx->pc = 0x10106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10106Cu;
        // 0x101070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10106Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101074u;
    // 0x101074: 0x0  nop
    ctx->pc = 0x101074u;
    // NOP
    ctx->pc = 0x101078u;
}
