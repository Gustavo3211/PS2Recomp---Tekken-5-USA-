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

// Function: sub_00335208
// Address: 0x335208 - 0x335258
void sub_00335208_0x335208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335208_0x335208");
#endif

    switch (ctx->pc) {
        case 0x335238u: goto label_335238;
        case 0x335244u: goto label_335244;
        default: break;
    }

    ctx->pc = 0x335208u;

    // 0x335208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33520c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x33520cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x335210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335214: 0x58100  sll         $s0, $a1, 4
    ctx->pc = 0x335214u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x335218: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x335218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x33521c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x33521cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x335220: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x335220u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x335224: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x335224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x335228: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x335228u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x33522c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x335230: 0xc0cd57a  jal         func_3355E8
    ctx->pc = 0x335230u;
    SET_GPR_U32(ctx, 31, 0x335238u);
    ctx->pc = 0x335234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335230u;
    // 0x335234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x335230u, 0x335238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335238u;
label_335238:
    // 0x335238: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x335238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x33523c: 0xc0cd57a  jal         func_3355E8
    ctx->pc = 0x33523Cu;
    SET_GPR_U32(ctx, 31, 0x335244u);
    ctx->pc = 0x335240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33523Cu;
    // 0x335240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x33523Cu, 0x335244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335244u;
label_335244:
    // 0x335244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335248: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33524c: 0x3e00008  jr          $ra
    ctx->pc = 0x33524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33524Cu;
        // 0x335250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33524Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335254u;
    // 0x335254: 0x0  nop
    ctx->pc = 0x335254u;
    // NOP
    ctx->pc = 0x335258u;
}
