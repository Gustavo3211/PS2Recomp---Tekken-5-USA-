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

// Function: sub_00491828
// Address: 0x491828 - 0x491880
void sub_00491828_0x491828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491828_0x491828");
#endif

    switch (ctx->pc) {
        case 0x491838u: goto label_491838;
        default: break;
    }

    ctx->pc = 0x491828u;

    // 0x491828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x491828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49182c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x491830: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x491830u;
    SET_GPR_U32(ctx, 31, 0x491838u);
    ctx->pc = 0x491834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491830u;
    // 0x491834: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x491830u, 0x491838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491838u;
label_491838:
    // 0x491838: 0x240400e7  addiu       $a0, $zero, 0xE7
    ctx->pc = 0x491838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x49183c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491840: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x491840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x491844: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x491844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x491848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x491848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49184c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x49184cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x491850: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x491850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x491854: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x491854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491858: 0xa445011e  sh          $a1, 0x11E($v0)
    ctx->pc = 0x491858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 286), (uint16_t)GPR_U32(ctx, 5));
    // 0x49185c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491860: 0xa4660118  sh          $a2, 0x118($v1)
    ctx->pc = 0x491860u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 6));
    // 0x491864: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x491864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491868: 0xa445011c  sh          $a1, 0x11C($v0)
    ctx->pc = 0x491868u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 5));
    // 0x49186c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491870: 0xa467011a  sh          $a3, 0x11A($v1)
    ctx->pc = 0x491870u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 282), (uint16_t)GPR_U32(ctx, 7));
    // 0x491874: 0x3e00008  jr          $ra
    ctx->pc = 0x491874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491874u;
        // 0x491878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49187Cu;
    // 0x49187c: 0x0  nop
    ctx->pc = 0x49187cu;
    // NOP
    ctx->pc = 0x491880u;
}
