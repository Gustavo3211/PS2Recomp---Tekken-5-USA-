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

// Function: sub_00345328
// Address: 0x345328 - 0x345370
void sub_00345328_0x345328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345328_0x345328");
#endif

    switch (ctx->pc) {
        case 0x34535cu: goto label_34535c;
        default: break;
    }

    ctx->pc = 0x345328u;

    // 0x345328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34532c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345334: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x345334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x345338: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x345338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x34533c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x34533Cu;
    {
        const bool branch_taken_0x34533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34533c) {
            ctx->pc = 0x345340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34533Cu;
            // 0x345340: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345364u;
            goto label_345364;
        }
    }
    ctx->pc = 0x345344u;
    // 0x345344: 0x92020049  lbu         $v0, 0x49($s0)
    ctx->pc = 0x345344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x345348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x345348u;
    {
        const bool branch_taken_0x345348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345348u;
        // 0x34534c: 0x2606003c  addiu       $a2, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345348) {
            ctx->pc = 0x345360u;
            goto label_345360;
        }
    }
    ctx->pc = 0x345350u;
    // 0x345350: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x345350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x345354: 0xc04320e  jal         func_10C838
    ctx->pc = 0x345354u;
    SET_GPR_U32(ctx, 31, 0x34535Cu);
    ctx->pc = 0x345358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345354u;
    // 0x345358: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C838u, 0x345354u, 0x34535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34535Cu;
label_34535c:
    // 0x34535c: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x34535cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
label_345360:
    // 0x345360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345364:
    // 0x345364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x345364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345368: 0x3e00008  jr          $ra
    ctx->pc = 0x345368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345368u;
        // 0x34536c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345370u;
}
