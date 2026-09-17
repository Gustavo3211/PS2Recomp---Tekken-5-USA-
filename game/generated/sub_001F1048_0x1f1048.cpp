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

// Function: sub_001F1048
// Address: 0x1f1048 - 0x1f10c8
void sub_001F1048_0x1f1048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1048_0x1f1048");
#endif

    switch (ctx->pc) {
        case 0x1f1070u: goto label_1f1070;
        case 0x1f1078u: goto label_1f1078;
        case 0x1f1088u: goto label_1f1088;
        case 0x1f1098u: goto label_1f1098;
        case 0x1f10acu: goto label_1f10ac;
        case 0x1f10b4u: goto label_1f10b4;
        default: break;
    }

    ctx->pc = 0x1f1048u;

    // 0x1f1048: 0x8f82971c  lw          $v0, -0x68E4($gp)
    ctx->pc = 0x1f1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940444)));
    // 0x1f104c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f104cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1058: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1058u;
    {
        const bool branch_taken_0x1f1058 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1058u;
        // 0x1f105c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1058) {
            ctx->pc = 0x1F106Cu;
            goto label_1f106c;
        }
    }
    ctx->pc = 0x1F1060u;
    // 0x1f1060: 0x2783971c  addiu       $v1, $gp, -0x68E4
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940444));
    // 0x1f1064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f1064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f1068: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f1068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f106c:
    // 0x1f106c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f106cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1070:
    // 0x1f1070: 0xc0b422e  jal         func_2D08B8
    ctx->pc = 0x1F1070u;
    SET_GPR_U32(ctx, 31, 0x1F1078u);
    ctx->pc = 0x1F1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1070u;
    // 0x1f1074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D08B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D08B8u, 0x1F1070u, 0x1F1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1078u;
label_1f1078:
    // 0x1f1078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f107c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f107cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1080: 0xc07c390  jal         func_1F0E40
    ctx->pc = 0x1F1080u;
    SET_GPR_U32(ctx, 31, 0x1F1088u);
    ctx->pc = 0x1F1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1080u;
    // 0x1f1084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0E40u, 0x1F1080u, 0x1F1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1088u;
label_1f1088:
    // 0x1f1088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f108c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f108cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1090: 0xc07c3ba  jal         func_1F0EE8
    ctx->pc = 0x1F1090u;
    SET_GPR_U32(ctx, 31, 0x1F1098u);
    ctx->pc = 0x1F1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1090u;
    // 0x1f1094: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0EE8u, 0x1F1090u, 0x1F1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1098u;
label_1f1098:
    // 0x1f1098: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f1098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f109c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F109Cu;
    {
        const bool branch_taken_0x1f109c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f109c) {
            ctx->pc = 0x1F1070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1070;
        }
    }
    ctx->pc = 0x1F10A4u;
    // 0x1f10a4: 0xc0b4252  jal         func_2D0948
    ctx->pc = 0x1F10A4u;
    SET_GPR_U32(ctx, 31, 0x1F10ACu);
    ctx->pc = 0x2D0948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0948u, 0x1F10A4u, 0x1F10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10ACu;
label_1f10ac:
    // 0x1f10ac: 0xc08e6ec  jal         func_239BB0
    ctx->pc = 0x1F10ACu;
    SET_GPR_U32(ctx, 31, 0x1F10B4u);
    ctx->pc = 0x239BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BB0u, 0x1F10ACu, 0x1F10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10B4u;
label_1f10b4:
    // 0x1f10b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f10b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f10b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f10b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f10bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f10bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f10c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F10C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10C0u;
        // 0x1f10c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F10C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F10C8u;
}
