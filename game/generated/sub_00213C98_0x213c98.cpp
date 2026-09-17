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

// Function: sub_00213C98
// Address: 0x213c98 - 0x213d68
void sub_00213C98_0x213c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213C98_0x213c98");
#endif

    switch (ctx->pc) {
        case 0x213cb8u: goto label_213cb8;
        case 0x213cc4u: goto label_213cc4;
        case 0x213cd0u: goto label_213cd0;
        case 0x213cf0u: goto label_213cf0;
        case 0x213d04u: goto label_213d04;
        case 0x213d0cu: goto label_213d0c;
        case 0x213d14u: goto label_213d14;
        case 0x213d1cu: goto label_213d1c;
        case 0x213d24u: goto label_213d24;
        case 0x213d2cu: goto label_213d2c;
        case 0x213d34u: goto label_213d34;
        case 0x213d40u: goto label_213d40;
        case 0x213d48u: goto label_213d48;
        case 0x213d50u: goto label_213d50;
        default: break;
    }

    ctx->pc = 0x213c98u;

    // 0x213c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213ca0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x213ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213ca8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213cac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x213cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x213cb0: 0xc084f16  jal         func_213C58
    ctx->pc = 0x213CB0u;
    SET_GPR_U32(ctx, 31, 0x213CB8u);
    ctx->pc = 0x213CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CB0u;
    // 0x213cb4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C58u, 0x213CB0u, 0x213CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CB8u;
label_213cb8:
    // 0x213cb8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x213cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x213cbc: 0xc0983c2  jal         func_260F08
    ctx->pc = 0x213CBCu;
    SET_GPR_U32(ctx, 31, 0x213CC4u);
    ctx->pc = 0x213CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CBCu;
    // 0x213cc0: 0x248423b0  addiu       $a0, $a0, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260F08u, 0x213CBCu, 0x213CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CC4u;
label_213cc4:
    // 0x213cc4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x213cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x213cc8: 0x24518858  addiu       $s1, $v0, -0x77A8
    ctx->pc = 0x213cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x213ccc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x213cccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88A8u));
label_213cd0:
    // 0x213cd0: 0x2121804  sllv        $v1, $s2, $s0
    ctx->pc = 0x213cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x213cd4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x213cd4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x213cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x213cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x213ce0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213ce4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x213ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x213ce8: 0xc08b8b4  jal         func_22E2D0
    ctx->pc = 0x213CE8u;
    SET_GPR_U32(ctx, 31, 0x213CF0u);
    ctx->pc = 0x213CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CE8u;
    // 0x213cec: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2D0u, 0x213CE8u, 0x213CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CF0u;
label_213cf0:
    // 0x213cf0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x213cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x213cf4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x213CF4u;
    {
        const bool branch_taken_0x213cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213cf4) {
            ctx->pc = 0x213CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213CF4u;
            // 0x213cf8: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213cd0;
        }
    }
    ctx->pc = 0x213CFCu;
    // 0x213cfc: 0xc082fd0  jal         func_20BF40
    ctx->pc = 0x213CFCu;
    SET_GPR_U32(ctx, 31, 0x213D04u);
    ctx->pc = 0x20BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF40u, 0x213CFCu, 0x213D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D04u;
label_213d04:
    // 0x213d04: 0xc07e276  jal         func_1F89D8
    ctx->pc = 0x213D04u;
    SET_GPR_U32(ctx, 31, 0x213D0Cu);
    ctx->pc = 0x1F89D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89D8u, 0x213D04u, 0x213D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D0Cu;
label_213d0c:
    // 0x213d0c: 0xc07ed18  jal         func_1FB460
    ctx->pc = 0x213D0Cu;
    SET_GPR_U32(ctx, 31, 0x213D14u);
    ctx->pc = 0x1FB460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB460u, 0x213D0Cu, 0x213D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D14u;
label_213d14:
    // 0x213d14: 0xc085c70  jal         func_2171C0
    ctx->pc = 0x213D14u;
    SET_GPR_U32(ctx, 31, 0x213D1Cu);
    ctx->pc = 0x213D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D14u;
    // 0x213d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171C0u, 0x213D14u, 0x213D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D1Cu;
label_213d1c:
    // 0x213d1c: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x213D1Cu;
    SET_GPR_U32(ctx, 31, 0x213D24u);
    ctx->pc = 0x213D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D1Cu;
    // 0x213d20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x213D1Cu, 0x213D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D24u;
label_213d24:
    // 0x213d24: 0xc0a5a0e  jal         func_296838
    ctx->pc = 0x213D24u;
    SET_GPR_U32(ctx, 31, 0x213D2Cu);
    ctx->pc = 0x296838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296838u, 0x213D24u, 0x213D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D2Cu;
label_213d2c:
    // 0x213d2c: 0xc0a7a38  jal         func_29E8E0
    ctx->pc = 0x213D2Cu;
    SET_GPR_U32(ctx, 31, 0x213D34u);
    ctx->pc = 0x29E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8E0u, 0x213D2Cu, 0x213D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D34u;
label_213d34:
    // 0x213d34: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x213d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x213d38: 0xc0a5f78  jal         func_297DE0
    ctx->pc = 0x213D38u;
    SET_GPR_U32(ctx, 31, 0x213D40u);
    ctx->pc = 0x213D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D38u;
    // 0x213d3c: 0xac40c500  sw          $zero, -0x3B00($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DE0u, 0x213D38u, 0x213D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D40u;
label_213d40:
    // 0x213d40: 0xc0b6ae0  jal         func_2DAB80
    ctx->pc = 0x213D40u;
    SET_GPR_U32(ctx, 31, 0x213D48u);
    ctx->pc = 0x2DAB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB80u, 0x213D40u, 0x213D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D48u;
label_213d48:
    // 0x213d48: 0xc093796  jal         func_24DE58
    ctx->pc = 0x213D48u;
    SET_GPR_U32(ctx, 31, 0x213D50u);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x213D48u, 0x213D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D50u;
label_213d50:
    // 0x213d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213d58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x213d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213d60: 0x3e00008  jr          $ra
    ctx->pc = 0x213D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D60u;
        // 0x213d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213D68u;
}
