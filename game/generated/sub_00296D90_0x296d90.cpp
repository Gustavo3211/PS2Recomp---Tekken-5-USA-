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

// Function: sub_00296D90
// Address: 0x296d90 - 0x296de0
void sub_00296D90_0x296d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296D90_0x296d90");
#endif

    switch (ctx->pc) {
        case 0x296dacu: goto label_296dac;
        case 0x296dc8u: goto label_296dc8;
        default: break;
    }

    ctx->pc = 0x296d90u;

    // 0x296d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296d98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x296d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x296d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296da4: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x296DA4u;
    SET_GPR_U32(ctx, 31, 0x296DACu);
    ctx->pc = 0x296DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296DA4u;
    // 0x296da8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x296DA4u, 0x296DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296DACu;
label_296dac:
    // 0x296dac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296DACu;
    {
        const bool branch_taken_0x296dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DACu;
        // 0x296db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296dac) {
            ctx->pc = 0x296DC0u;
            goto label_296dc0;
        }
    }
    ctx->pc = 0x296DB4u;
    // 0x296db4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x296DB4u;
    {
        const bool branch_taken_0x296db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DB4u;
        // 0x296db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296db4) {
            ctx->pc = 0x296DC8u;
            goto label_296dc8;
        }
    }
    ctx->pc = 0x296DBCu;
    // 0x296dbc: 0x0  nop
    ctx->pc = 0x296dbcu;
    // NOP
label_296dc0:
    // 0x296dc0: 0xc0ad7a2  jal         func_2B5E88
    ctx->pc = 0x296DC0u;
    SET_GPR_U32(ctx, 31, 0x296DC8u);
    ctx->pc = 0x296DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296DC0u;
    // 0x296dc4: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E88u, 0x296DC0u, 0x296DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296DC8u;
label_296dc8:
    // 0x296dc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x296DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DD4u;
        // 0x296dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296DDCu;
    // 0x296ddc: 0x0  nop
    ctx->pc = 0x296ddcu;
    // NOP
    ctx->pc = 0x296de0u;
}
