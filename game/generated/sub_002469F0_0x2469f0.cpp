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

// Function: sub_002469F0
// Address: 0x2469f0 - 0x246a98
void sub_002469F0_0x2469f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002469F0_0x2469f0");
#endif

    switch (ctx->pc) {
        case 0x246a04u: goto label_246a04;
        case 0x246a0cu: goto label_246a0c;
        case 0x246a38u: goto label_246a38;
        default: break;
    }

    ctx->pc = 0x2469f0u;

    // 0x2469f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2469f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2469f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2469f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2469f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2469f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2469fc: 0xc091a68  jal         func_2469A0
    ctx->pc = 0x2469FCu;
    SET_GPR_U32(ctx, 31, 0x246A04u);
    ctx->pc = 0x2469A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469A0u, 0x2469FCu, 0x246A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A04u;
label_246a04:
    // 0x246a04: 0xc09226a  jal         func_2489A8
    ctx->pc = 0x246A04u;
    SET_GPR_U32(ctx, 31, 0x246A0Cu);
    ctx->pc = 0x246A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A04u;
    // 0x246a08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489A8u, 0x246A04u, 0x246A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A0Cu;
label_246a0c:
    // 0x246a0c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246A0Cu;
    {
        const bool branch_taken_0x246a0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x246a0c) {
            ctx->pc = 0x246A30u;
            goto label_246a30;
        }
    }
    ctx->pc = 0x246A14u;
    // 0x246a14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x246a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x246a18: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x246A18u;
    {
        const bool branch_taken_0x246a18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x246A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A18u;
        // 0x246a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a18) {
            ctx->pc = 0x246A88u;
            goto label_246a88;
        }
    }
    ctx->pc = 0x246A20u;
    // 0x246a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246a28: 0x809299e  j           func_24A678
    ctx->pc = 0x246A28u;
    ctx->pc = 0x246A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A28u;
    // 0x246a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A678u;
    sub_0024A678_0x24a678(rdram, ctx, runtime); return;
    ctx->pc = 0x246A30u;
label_246a30:
    // 0x246a30: 0xc092278  jal         func_2489E0
    ctx->pc = 0x246A30u;
    SET_GPR_U32(ctx, 31, 0x246A38u);
    ctx->pc = 0x246A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A30u;
    // 0x246a34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489E0u, 0x246A30u, 0x246A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A38u;
label_246a38:
    // 0x246a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x246a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x246a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246a40: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x246A40u;
    {
        const bool branch_taken_0x246a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x246A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A40u;
        // 0x246a44: 0x2883ffff  slti        $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a40) {
            ctx->pc = 0x246A88u;
            goto label_246a88;
        }
    }
    ctx->pc = 0x246A48u;
    // 0x246a48: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x246A48u;
    {
        const bool branch_taken_0x246a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246a48) {
            ctx->pc = 0x246A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A48u;
            // 0x246a4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246A8Cu;
            goto label_246a8c;
        }
    }
    ctx->pc = 0x246A50u;
    // 0x246a50: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x246a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x246a54: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x246A54u;
    {
        const bool branch_taken_0x246a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a54) {
            ctx->pc = 0x246A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A54u;
            // 0x246a58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246A8Cu;
            goto label_246a8c;
        }
    }
    ctx->pc = 0x246A5Cu;
    // 0x246a5c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x246a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x246a60: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x246A60u;
    {
        const bool branch_taken_0x246a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246a60) {
            ctx->pc = 0x246A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A60u;
            // 0x246a64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246A8Cu;
            goto label_246a8c;
        }
    }
    ctx->pc = 0x246A68u;
    // 0x246a68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x246a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246a6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246A6Cu;
    {
        const bool branch_taken_0x246a6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x246A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A6Cu;
        // 0x246a70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a6c) {
            ctx->pc = 0x246A88u;
            goto label_246a88;
        }
    }
    ctx->pc = 0x246A74u;
    // 0x246a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246a7c: 0x8092a0e  j           func_24A838
    ctx->pc = 0x246A7Cu;
    ctx->pc = 0x246A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A7Cu;
    // 0x246a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A838u;
    sub_0024A838_0x24a838(rdram, ctx, runtime); return;
    ctx->pc = 0x246A84u;
    // 0x246a84: 0x0  nop
    ctx->pc = 0x246a84u;
    // NOP
label_246a88:
    // 0x246a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246a8c:
    // 0x246a8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246a90: 0x3e00008  jr          $ra
    ctx->pc = 0x246A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A90u;
        // 0x246a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246A98u;
}
