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

// Function: sub_0034B970
// Address: 0x34b970 - 0x34ba94
void sub_0034B970_0x34b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B970_0x34b970");
#endif

    switch (ctx->pc) {
        case 0x34b994u: goto label_34b994;
        case 0x34b9b0u: goto label_34b9b0;
        case 0x34b9f0u: goto label_34b9f0;
        case 0x34b9f8u: goto label_34b9f8;
        case 0x34ba0cu: goto label_34ba0c;
        case 0x34ba30u: goto label_34ba30;
        case 0x34ba68u: goto label_34ba68;
        case 0x34ba74u: goto label_34ba74;
        case 0x34ba7cu: goto label_34ba7c;
        default: break;
    }

    ctx->pc = 0x34b970u;

    // 0x34b970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b974: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34b978: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34b978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34b97c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34b97cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b980: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34b980u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34b984: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34b988: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34b988u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34b98c: 0xc043ca4  jal         func_10F290
    ctx->pc = 0x34B98Cu;
    SET_GPR_U32(ctx, 31, 0x34B994u);
    ctx->pc = 0x10F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F290u, 0x34B98Cu, 0x34B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B994u;
label_34b994:
    // 0x34b994: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34b994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b998: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34b99c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34b9a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34b9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x34b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9a8: 0xc044cbc  jal         func_1132F0
    ctx->pc = 0x34B9A8u;
    SET_GPR_U32(ctx, 31, 0x34B9B0u);
    ctx->pc = 0x1132F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1132F0u, 0x34B9A8u, 0x34B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9B0u;
label_34b9b0:
    // 0x34b9b0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34b9b4: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x34b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x34b9b8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34b9bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34b9c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x34b9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9c4: 0x3c054e55  lui         $a1, 0x4E55
    ctx->pc = 0x34b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20053 << 16));
    // 0x34b9c8: 0x34a54645  ori         $a1, $a1, 0x4645
    ctx->pc = 0x34b9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17989);
    // 0x34b9cc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x34b9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x34b9d0: 0x24c6ba94  addiu       $a2, $a2, -0x456C
    ctx->pc = 0x34b9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949524));
    // 0x34b9d4: 0x3c07001c  lui         $a3, 0x1C
    ctx->pc = 0x34b9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28 << 16));
    // 0x34b9d8: 0x24e7b100  addiu       $a3, $a3, -0x4F00
    ctx->pc = 0x34b9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947072));
    // 0x34b9dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34b9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34b9e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9e4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x34b9e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9e8: 0xc044ce2  jal         func_113388
    ctx->pc = 0x34B9E8u;
    SET_GPR_U32(ctx, 31, 0x34B9F0u);
    ctx->pc = 0x113388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113388u, 0x34B9E8u, 0x34B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9F0u;
label_34b9f0:
    // 0x34b9f0: 0xc043cb0  jal         func_10F2C0
    ctx->pc = 0x34B9F0u;
    SET_GPR_U32(ctx, 31, 0x34B9F8u);
    ctx->pc = 0x10F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C0u, 0x34B9F0u, 0x34B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9F8u;
label_34b9f8:
    // 0x34b9f8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34b9fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34ba00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34ba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba04: 0xc044d60  jal         func_113580
    ctx->pc = 0x34BA04u;
    SET_GPR_U32(ctx, 31, 0x34BA0Cu);
    ctx->pc = 0x113580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113580u, 0x34BA04u, 0x34BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA0Cu;
label_34ba0c:
    // 0x34ba0c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34ba10: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34ba14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BA14u;
    {
        const bool branch_taken_0x34ba14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ba14) {
            ctx->pc = 0x34BA24u;
            goto label_34ba24;
        }
    }
    ctx->pc = 0x34BA1Cu;
    // 0x34ba1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34BA1Cu;
    {
        const bool branch_taken_0x34ba1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba1c) {
            ctx->pc = 0x34BA38u;
            goto label_34ba38;
        }
    }
    ctx->pc = 0x34BA24u;
label_34ba24:
    // 0x34ba24: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34ba28: 0xc044d76  jal         func_1135D8
    ctx->pc = 0x34BA28u;
    SET_GPR_U32(ctx, 31, 0x34BA30u);
    ctx->pc = 0x1135D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135D8u, 0x34BA28u, 0x34BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA30u;
label_34ba30:
    // 0x34ba30: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x34BA30u;
    {
        const bool branch_taken_0x34ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba30) {
            ctx->pc = 0x34B9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b9f8;
        }
    }
    ctx->pc = 0x34BA38u;
label_34ba38:
    // 0x34ba38: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ba3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34ba40: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x34BA40u;
    {
        const bool branch_taken_0x34ba40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ba40) {
            ctx->pc = 0x34B9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b9f0;
        }
    }
    ctx->pc = 0x34BA48u;
    // 0x34ba48: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ba4c: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x34ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x34ba50: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ba54: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34ba58: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x34ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34ba5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba60: 0xc044d16  jal         func_113458
    ctx->pc = 0x34BA60u;
    SET_GPR_U32(ctx, 31, 0x34BA68u);
    ctx->pc = 0x113458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113458u, 0x34BA60u, 0x34BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA68u;
label_34ba68:
    // 0x34ba68: 0x8f84cbc4  lw          $a0, -0x343C($gp)
    ctx->pc = 0x34ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953924)));
    // 0x34ba6c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34BA6Cu;
    SET_GPR_U32(ctx, 31, 0x34BA74u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34BA6Cu, 0x34BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA74u;
label_34ba74:
    // 0x34ba74: 0xc043c78  jal         func_10F1E0
    ctx->pc = 0x34BA74u;
    SET_GPR_U32(ctx, 31, 0x34BA7Cu);
    ctx->pc = 0x10F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E0u, 0x34BA74u, 0x34BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA7Cu;
label_34ba7c:
    // 0x34ba7c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ba7cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba80: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34ba80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ba84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34ba84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ba88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34ba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34ba8c: 0x3e00008  jr          $ra
    ctx->pc = 0x34BA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BA94u;
}
