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

// Function: sub_003231F8
// Address: 0x3231f8 - 0x323248
void sub_003231F8_0x3231f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003231F8_0x3231f8");
#endif

    switch (ctx->pc) {
        case 0x323228u: goto label_323228;
        default: break;
    }

    ctx->pc = 0x3231f8u;

    // 0x3231f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3231f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3231fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3231fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323204: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x323204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x323208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32320c: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x32320cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x323210: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323214: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x323214u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x400414u));
    // 0x323218: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x323218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32321c: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x32321cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
    // 0x323220: 0xc0ca956  jal         func_32A558
    ctx->pc = 0x323220u;
    SET_GPR_U32(ctx, 31, 0x323228u);
    ctx->pc = 0x323224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323220u;
    // 0x323224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A558u, 0x323220u, 0x323228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323228u;
label_323228:
    // 0x323228: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x323228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x32322c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x32322cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x323230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323234: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x323234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x323238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32323c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32323cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323240: 0x3e00008  jr          $ra
    ctx->pc = 0x323240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323240u;
        // 0x323244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323248u;
}
