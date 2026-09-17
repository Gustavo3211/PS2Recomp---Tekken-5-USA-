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

// Function: sub_00111D98
// Address: 0x111d98 - 0x111e50
void sub_00111D98_0x111d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111D98_0x111d98");
#endif

    switch (ctx->pc) {
        case 0x111dd4u: goto label_111dd4;
        case 0x111de0u: goto label_111de0;
        case 0x111e04u: goto label_111e04;
        case 0x111e28u: goto label_111e28;
        case 0x111e38u: goto label_111e38;
        default: break;
    }

    ctx->pc = 0x111d98u;

    // 0x111d98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x111d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x111d9c: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x111d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x111da0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x111da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111da4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x111da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111da8: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x111da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x111dac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x111dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111db0: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x111db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x111db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111db8: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x111db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x111dbc: 0x24841c68  addiu       $a0, $a0, 0x1C68
    ctx->pc = 0x111dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7272));
    // 0x111dc0: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x111dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x111dc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111dc8: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x111dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x111dcc: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x111DCCu;
    SET_GPR_U32(ctx, 31, 0x111DD4u);
    ctx->pc = 0x111DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111DCCu;
    // 0x111dd0: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x111DCCu, 0x111DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111DD4u;
label_111dd4:
    // 0x111dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x111DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DD8u;
        // 0x111ddc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111DE0u;
label_111de0:
    // 0x111de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111de4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x111de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x111de8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x111de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x111dec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x111decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111df0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111df4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111df8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x111dfc: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x111DFCu;
    SET_GPR_U32(ctx, 31, 0x111E04u);
    ctx->pc = 0x111E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111DFCu;
    // 0x111e00: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x111DFCu, 0x111E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E04u;
label_111e04:
    // 0x111e04: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x111e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x111e08: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x111e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x111e0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e10: 0x24841cc0  addiu       $a0, $a0, 0x1CC0
    ctx->pc = 0x111e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7360));
    // 0x111e14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x111e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e18: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x111e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e20: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x111E20u;
    SET_GPR_U32(ctx, 31, 0x111E28u);
    ctx->pc = 0x111E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E20u;
    // 0x111e24: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x111E20u, 0x111E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E28u;
label_111e28:
    // 0x111e28: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111E28u;
    {
        const bool branch_taken_0x111e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E28u;
        // 0x111e2c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e28) {
            ctx->pc = 0x111E3Cu;
            goto label_111e3c;
        }
    }
    ctx->pc = 0x111E30u;
    // 0x111e30: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x111E30u;
    SET_GPR_U32(ctx, 31, 0x111E38u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x111E30u, 0x111E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E38u;
label_111e38:
    // 0x111e38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x111e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_111e3c:
    // 0x111e3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x111e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111e40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x111e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111e44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111e48: 0x3e00008  jr          $ra
    ctx->pc = 0x111E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E48u;
        // 0x111e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111E50u;
}
