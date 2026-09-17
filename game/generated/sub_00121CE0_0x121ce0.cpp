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

// Function: sub_00121CE0
// Address: 0x121ce0 - 0x121d38
void sub_00121CE0_0x121ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121CE0_0x121ce0");
#endif

    switch (ctx->pc) {
        case 0x121cf4u: goto label_121cf4;
        case 0x121d10u: goto label_121d10;
        case 0x121d18u: goto label_121d18;
        default: break;
    }

    ctx->pc = 0x121ce0u;

    // 0x121ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x121ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121ce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x121ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x121cec: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x121CECu;
    SET_GPR_U32(ctx, 31, 0x121CF4u);
    ctx->pc = 0x121CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CECu;
    // 0x121cf0: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x121CECu, 0x121CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CF4u;
label_121cf4:
    // 0x121cf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d00: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121D00u;
    {
        const bool branch_taken_0x121d00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x121D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D00u;
        // 0x121d04: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d00) {
            ctx->pc = 0x121D10u;
            goto label_121d10;
        }
    }
    ctx->pc = 0x121D08u;
    // 0x121d08: 0xc048724  jal         func_121C90
    ctx->pc = 0x121D08u;
    SET_GPR_U32(ctx, 31, 0x121D10u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x121D08u, 0x121D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D10u;
label_121d10:
    // 0x121d10: 0xc04a151  jal         func_128544
    ctx->pc = 0x121D10u;
    SET_GPR_U32(ctx, 31, 0x121D18u);
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x121D10u, 0x121D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D18u;
label_121d18:
    // 0x121d18: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x121d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x121d1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d20: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x121d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x121d24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x121d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x121D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D2Cu;
        // 0x121d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121D34u;
    // 0x121d34: 0x0  nop
    ctx->pc = 0x121d34u;
    // NOP
    ctx->pc = 0x121d38u;
}
