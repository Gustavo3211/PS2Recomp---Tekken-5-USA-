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

// Function: sub_0022D340
// Address: 0x22d340 - 0x22d390
void sub_0022D340_0x22d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D340_0x22d340");
#endif

    switch (ctx->pc) {
        case 0x22d378u: goto label_22d378;
        case 0x22d380u: goto label_22d380;
        default: break;
    }

    ctx->pc = 0x22d340u;

    // 0x22d340: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22d340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d344: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d34c: 0xaf85c978  sw          $a1, -0x3688($gp)
    ctx->pc = 0x22d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953336), GPR_U32(ctx, 5));
    // 0x22d350: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x22d350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22d354: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22D354u;
    {
        const bool branch_taken_0x22d354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D354u;
        // 0x22d358: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d354) {
            ctx->pc = 0x22D384u;
            goto label_22d384;
        }
    }
    ctx->pc = 0x22D35Cu;
    // 0x22d35c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x22d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x22d360: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22d360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d364: 0xa0a40010  sb          $a0, 0x10($a1)
    ctx->pc = 0x22d364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x22d368: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x22d368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22d36c: 0x62100b  movn        $v0, $v1, $v0
    ctx->pc = 0x22d36cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x22d370: 0xc08b3e8  jal         func_22CFA0
    ctx->pc = 0x22D370u;
    SET_GPR_U32(ctx, 31, 0x22D378u);
    ctx->pc = 0x22D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D370u;
    // 0x22d374: 0xaca20034  sw          $v0, 0x34($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CFA0u, 0x22D370u, 0x22D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D378u;
label_22d378:
    // 0x22d378: 0xc08b420  jal         func_22D080
    ctx->pc = 0x22D378u;
    SET_GPR_U32(ctx, 31, 0x22D380u);
    ctx->pc = 0x22D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D378u;
    // 0x22d37c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D080u, 0x22D378u, 0x22D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D380u;
label_22d380:
    // 0x22d380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d384:
    // 0x22d384: 0x3e00008  jr          $ra
    ctx->pc = 0x22D384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D384u;
        // 0x22d388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D38Cu;
    // 0x22d38c: 0x0  nop
    ctx->pc = 0x22d38cu;
    // NOP
    ctx->pc = 0x22d390u;
}
