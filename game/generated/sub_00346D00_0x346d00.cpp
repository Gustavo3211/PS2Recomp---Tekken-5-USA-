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

// Function: sub_00346D00
// Address: 0x346d00 - 0x346de0
void sub_00346D00_0x346d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346D00_0x346d00");
#endif

    switch (ctx->pc) {
        case 0x346d40u: goto label_346d40;
        case 0x346d88u: goto label_346d88;
        case 0x346dacu: goto label_346dac;
        case 0x346dc4u: goto label_346dc4;
        default: break;
    }

    ctx->pc = 0x346d00u;

    // 0x346d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x346d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x346d04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x346d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x346d08: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x346d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x346d0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x346d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x346d10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x346d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x346d14: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x346d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x346d18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x346d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x346d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x346d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x346d24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x346d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d28: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x346d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x346d2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x346d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x346d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d34: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x346d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x346d38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x346d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346d3c: 0x0  nop
    ctx->pc = 0x346d3cu;
    // NOP
label_346d40:
    // 0x346d40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346d44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x346D44u;
    {
        const bool branch_taken_0x346d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D44u;
        // 0x346d48: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d44) {
            ctx->pc = 0x346D58u;
            goto label_346d58;
        }
    }
    ctx->pc = 0x346D4Cu;
    // 0x346d4c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x346d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x346d50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346D50u;
    {
        const bool branch_taken_0x346d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D50u;
        // 0x346d54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d50) {
            ctx->pc = 0x346D70u;
            goto label_346d70;
        }
    }
    ctx->pc = 0x346D58u;
label_346d58:
    // 0x346d58: 0x24a50c00  addiu       $a1, $a1, 0xC00
    ctx->pc = 0x346d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
    // 0x346d5c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x346d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x346d60: 0x0  nop
    ctx->pc = 0x346d60u;
    // NOP
    // 0x346d64: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x346D64u;
    {
        const bool branch_taken_0x346d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D64u;
        // 0x346d68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d64) {
            ctx->pc = 0x346D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346d40;
        }
    }
    ctx->pc = 0x346D6Cu;
    // 0x346d6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x346d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346d70:
    // 0x346d70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x346d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d7c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x346d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d80: 0xc0d25b4  jal         func_3496D0
    ctx->pc = 0x346D80u;
    SET_GPR_U32(ctx, 31, 0x346D88u);
    ctx->pc = 0x346D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D80u;
    // 0x346d84: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496D0u, 0x346D80u, 0x346D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D88u;
label_346d88:
    // 0x346d88: 0x9223001e  lbu         $v1, 0x1E($s1)
    ctx->pc = 0x346d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x346d8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x346d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d90: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x346d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x346d94: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346D94u;
    {
        const bool branch_taken_0x346d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x346D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D94u;
        // 0x346d98: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d94) {
            ctx->pc = 0x346DB0u;
            goto label_346db0;
        }
    }
    ctx->pc = 0x346D9Cu;
    // 0x346d9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x346d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346da0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x346da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346da4: 0xc0d242c  jal         func_3490B0
    ctx->pc = 0x346DA4u;
    SET_GPR_U32(ctx, 31, 0x346DACu);
    ctx->pc = 0x346DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DA4u;
    // 0x346da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3490B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3490B0u, 0x346DA4u, 0x346DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DACu;
label_346dac:
    // 0x346dac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x346dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346db0:
    // 0x346db0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x346db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dbc: 0xc0d2a7a  jal         func_34A9E8
    ctx->pc = 0x346DBCu;
    SET_GPR_U32(ctx, 31, 0x346DC4u);
    ctx->pc = 0x346DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DBCu;
    // 0x346dc0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A9E8u, 0x346DBCu, 0x346DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DC4u;
label_346dc4:
    // 0x346dc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x346dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346dc8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x346dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346dcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x346dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346dd0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x346dd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x346dd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x346dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x346DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DD8u;
        // 0x346ddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346DE0u;
}
