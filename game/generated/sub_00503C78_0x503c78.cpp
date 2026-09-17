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

// Function: sub_00503C78
// Address: 0x503c78 - 0x503d18
void sub_00503C78_0x503c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503C78_0x503c78");
#endif

    switch (ctx->pc) {
        case 0x503c88u: goto label_503c88;
        case 0x503c9cu: goto label_503c9c;
        case 0x503cb0u: goto label_503cb0;
        case 0x503cd8u: goto label_503cd8;
        default: break;
    }

    ctx->pc = 0x503c78u;

    // 0x503c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503c7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x503c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x503c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x503c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x503c84: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x503c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
label_503c88:
    // 0x503c88: 0x3c054401  lui         $a1, 0x4401
    ctx->pc = 0x503c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17409 << 16));
    // 0x503c8c: 0x2604c480  addiu       $a0, $s0, -0x3B80
    ctx->pc = 0x503c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952064));
    // 0x503c90: 0x34a52346  ori         $a1, $a1, 0x2346
    ctx->pc = 0x503c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9030);
    // 0x503c94: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x503C94u;
    SET_GPR_U32(ctx, 31, 0x503C9Cu);
    ctx->pc = 0x503C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503C94u;
    // 0x503c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x503C94u, 0x503C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503C9Cu;
label_503c9c:
    // 0x503c9c: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x503C9Cu;
    {
        const bool branch_taken_0x503c9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x503c9c) {
            ctx->pc = 0x503CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x503C9Cu;
            // 0x503ca0: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
            ctx->in_delay_slot = false;
            ctx->pc = 0x503CD0u;
            goto label_503cd0;
        }
    }
    ctx->pc = 0x503CA4u;
    // 0x503ca4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503ca8: 0xc044794  jal         func_111E50
    ctx->pc = 0x503CA8u;
    SET_GPR_U32(ctx, 31, 0x503CB0u);
    ctx->pc = 0x503CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503CA8u;
    // 0x503cac: 0x2484d198  addiu       $a0, $a0, -0x2E68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x503CA8u, 0x503CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503CB0u;
label_503cb0:
    // 0x503cb0: 0x0  nop
    ctx->pc = 0x503cb0u;
    // NOP
    // 0x503cb4: 0x0  nop
    ctx->pc = 0x503cb4u;
    // NOP
    // 0x503cb8: 0x0  nop
    ctx->pc = 0x503cb8u;
    // NOP
    // 0x503cbc: 0x0  nop
    ctx->pc = 0x503cbcu;
    // NOP
    // 0x503cc0: 0x0  nop
    ctx->pc = 0x503cc0u;
    // NOP
    // 0x503cc4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x503CC4u;
    {
        const bool branch_taken_0x503cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x503cc4) {
            ctx->pc = 0x503CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503cb0;
        }
    }
    ctx->pc = 0x503CCCu;
    // 0x503ccc: 0x0  nop
    ctx->pc = 0x503cccu;
    // NOP
label_503cd0:
    // 0x503cd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x503cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x503cd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x503cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_503cd8:
    // 0x503cd8: 0x0  nop
    ctx->pc = 0x503cd8u;
    // NOP
    // 0x503cdc: 0x0  nop
    ctx->pc = 0x503cdcu;
    // NOP
    // 0x503ce0: 0x0  nop
    ctx->pc = 0x503ce0u;
    // NOP
    // 0x503ce4: 0x0  nop
    ctx->pc = 0x503ce4u;
    // NOP
    // 0x503ce8: 0x0  nop
    ctx->pc = 0x503ce8u;
    // NOP
    // 0x503cec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x503CECu;
    {
        const bool branch_taken_0x503cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x503CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503CECu;
        // 0x503cf0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503cec) {
            ctx->pc = 0x503CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503cd8;
        }
    }
    ctx->pc = 0x503CF4u;
    // 0x503cf4: 0x2602c480  addiu       $v0, $s0, -0x3B80
    ctx->pc = 0x503cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952064));
    // 0x503cf8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x503cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x503cfc: 0x1060ffe2  beqz        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x503CFCu;
    {
        const bool branch_taken_0x503cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x503D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503CFCu;
        // 0x503d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503cfc) {
            ctx->pc = 0x503C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503c88;
        }
    }
    ctx->pc = 0x503D04u;
    // 0x503d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x503d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x503d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x503d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x503D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503D0Cu;
        // 0x503d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503D14u;
    // 0x503d14: 0x0  nop
    ctx->pc = 0x503d14u;
    // NOP
    ctx->pc = 0x503d18u;
}
