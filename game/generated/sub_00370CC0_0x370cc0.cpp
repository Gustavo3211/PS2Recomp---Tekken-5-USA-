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

// Function: sub_00370CC0
// Address: 0x370cc0 - 0x370d68
void sub_00370CC0_0x370cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370CC0_0x370cc0");
#endif

    switch (ctx->pc) {
        case 0x370ce4u: goto label_370ce4;
        case 0x370cfcu: goto label_370cfc;
        default: break;
    }

    ctx->pc = 0x370cc0u;

    // 0x370cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370cc4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370ccc: 0x24507420  addiu       $s0, $v0, 0x7420
    ctx->pc = 0x370cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29728));
    // 0x370cd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7420u));
    // 0x370cd4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370CD4u;
    {
        const bool branch_taken_0x370cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CD4u;
        // 0x370cd8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370cd4) {
            ctx->pc = 0x370CFCu;
            goto label_370cfc;
        }
    }
    ctx->pc = 0x370CDCu;
    // 0x370cdc: 0xc0dc206  jal         func_370818
    ctx->pc = 0x370CDCu;
    SET_GPR_U32(ctx, 31, 0x370CE4u);
    ctx->pc = 0x370818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370818u, 0x370CDCu, 0x370CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CE4u;
label_370ce4:
    // 0x370ce4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370ce8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370cec: 0x24a50b90  addiu       $a1, $a1, 0xB90
    ctx->pc = 0x370cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2960));
    // 0x370cf0: 0x24c67370  addiu       $a2, $a2, 0x7370
    ctx->pc = 0x370cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29552));
    // 0x370cf4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370CF4u;
    SET_GPR_U32(ctx, 31, 0x370CFCu);
    ctx->pc = 0x370CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370CF4u;
    // 0x370cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370CF4u, 0x370CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CFCu;
label_370cfc:
    // 0x370cfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370d04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370d08: 0x3e00008  jr          $ra
    ctx->pc = 0x370D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D08u;
        // 0x370d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370D10u;
    // 0x370d10: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370d14: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x370d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x370d18: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x370d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x370d1c: 0x24890110  addiu       $t1, $a0, 0x110
    ctx->pc = 0x370d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x370d20: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x370d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x370d24: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x370d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x370d28: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x370d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x370d2c: 0x24c6f0e8  addiu       $a2, $a2, -0xF18
    ctx->pc = 0x370d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963432));
    // 0x370d30: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x370d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370d34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x370d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x370d38: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x370d38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x370d3c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x370d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x370d40: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x370d40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x370d44: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x370d44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x370d48: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x370d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x370d4c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x370d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x370d50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370d54: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x370d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x370d58: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x370d58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x370d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x370D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D5Cu;
        // 0x370d60: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370D64u;
    // 0x370d64: 0x0  nop
    ctx->pc = 0x370d64u;
    // NOP
    ctx->pc = 0x370d68u;
}
