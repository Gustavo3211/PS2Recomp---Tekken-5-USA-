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

// Function: sub_00118D88
// Address: 0x118d88 - 0x118e38
void sub_00118D88_0x118d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118D88_0x118d88");
#endif

    switch (ctx->pc) {
        case 0x118da0u: goto label_118da0;
        case 0x118dc0u: goto label_118dc0;
        case 0x118dd8u: goto label_118dd8;
        case 0x118de0u: goto label_118de0;
        case 0x118de8u: goto label_118de8;
        case 0x118df4u: goto label_118df4;
        case 0x118df8u: goto label_118df8;
        case 0x118e00u: goto label_118e00;
        case 0x118e10u: goto label_118e10;
        default: break;
    }

    ctx->pc = 0x118d88u;

    // 0x118d88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118d8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118d90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118d94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118d98: 0xc046348  jal         func_118D20
    ctx->pc = 0x118D98u;
    SET_GPR_U32(ctx, 31, 0x118DA0u);
    ctx->pc = 0x118D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D98u;
    // 0x118d9c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x118D98u, 0x118DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DA0u;
label_118da0:
    // 0x118da0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x118DA0u;
    {
        const bool branch_taken_0x118da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DA0u;
        // 0x118da4: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118da0) {
            ctx->pc = 0x118E1Cu;
            goto label_118e1c;
        }
    }
    ctx->pc = 0x118DA8u;
    // 0x118da8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x118da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118dac: 0x24501980  addiu       $s0, $v0, 0x1980
    ctx->pc = 0x118dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x118db0: 0x8c441980  lw          $a0, 0x1980($v0)
    ctx->pc = 0x118db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6528)));
    // 0x118db4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x118db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118db8: 0xc04632e  jal         func_118CB8
    ctx->pc = 0x118DB8u;
    SET_GPR_U32(ctx, 31, 0x118DC0u);
    ctx->pc = 0x118DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DB8u;
    // 0x118dbc: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CB8u, 0x118DB8u, 0x118DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DC0u;
label_118dc0:
    // 0x118dc0: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x118dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x118dc4: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x118dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x118dc8: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x118dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x118dcc: 0x24a511d8  addiu       $a1, $a1, 0x11D8
    ctx->pc = 0x118dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4568));
    // 0x118dd0: 0xc046332  jal         func_118CC8
    ctx->pc = 0x118DD0u;
    SET_GPR_U32(ctx, 31, 0x118DD8u);
    ctx->pc = 0x118DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DD0u;
    // 0x118dd4: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC8u, 0x118DD0u, 0x118DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DD8u;
label_118dd8:
    // 0x118dd8: 0xc043d88  jal         func_10F620
    ctx->pc = 0x118DD8u;
    SET_GPR_U32(ctx, 31, 0x118DE0u);
    ctx->pc = 0x118DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DD8u;
    // 0x118ddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x118DD8u, 0x118DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DE0u;
label_118de0:
    // 0x118de0: 0xc043d88  jal         func_10F620
    ctx->pc = 0x118DE0u;
    SET_GPR_U32(ctx, 31, 0x118DE8u);
    ctx->pc = 0x118DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DE0u;
    // 0x118de4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x118DE0u, 0x118DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DE8u;
label_118de8:
    // 0x118de8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x118de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118dec: 0xc04632e  jal         func_118CB8
    ctx->pc = 0x118DECu;
    SET_GPR_U32(ctx, 31, 0x118DF4u);
    ctx->pc = 0x118DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DECu;
    // 0x118df0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CB8u, 0x118DECu, 0x118DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DF4u;
label_118df4:
    // 0x118df4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x118df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_118df8:
    // 0x118df8: 0xc046344  jal         func_118D10
    ctx->pc = 0x118DF8u;
    SET_GPR_U32(ctx, 31, 0x118E00u);
    ctx->pc = 0x118DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DF8u;
    // 0x118dfc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D10u, 0x118DF8u, 0x118E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E00u;
label_118e00:
    // 0x118e00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x118e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x118e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e08: 0xc04632e  jal         func_118CB8
    ctx->pc = 0x118E08u;
    SET_GPR_U32(ctx, 31, 0x118E10u);
    ctx->pc = 0x118E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E08u;
    // 0x118e0c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CB8u, 0x118E08u, 0x118E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E10u;
label_118e10:
    // 0x118e10: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x118e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x118e14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x118E14u;
    {
        const bool branch_taken_0x118e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118e14) {
            ctx->pc = 0x118E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118E14u;
            // 0x118e18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118df8;
        }
    }
    ctx->pc = 0x118E1Cu;
label_118e1c:
    // 0x118e1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118e20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x118E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E2Cu;
        // 0x118e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E34u;
    // 0x118e34: 0x0  nop
    ctx->pc = 0x118e34u;
    // NOP
    ctx->pc = 0x118e38u;
}
