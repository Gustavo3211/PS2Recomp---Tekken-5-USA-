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

// Function: sub_0031E820
// Address: 0x31e820 - 0x31e878
void sub_0031E820_0x31e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E820_0x31e820");
#endif

    switch (ctx->pc) {
        case 0x31e838u: goto label_31e838;
        case 0x31e848u: goto label_31e848;
        default: break;
    }

    ctx->pc = 0x31e820u;

    // 0x31e820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e828: 0x94850412  lhu         $a1, 0x412($a0)
    ctx->pc = 0x31e828u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1042)));
    // 0x31e82c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31e82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e830: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x31E830u;
    SET_GPR_U32(ctx, 31, 0x31E838u);
    ctx->pc = 0x31E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E830u;
    // 0x31e834: 0x52942  srl         $a1, $a1, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x31E830u, 0x31E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E838u;
label_31e838:
    // 0x31e838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e83c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E83Cu;
        // 0x31e840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E844u;
    // 0x31e844: 0x0  nop
    ctx->pc = 0x31e844u;
    // NOP
label_31e848:
    // 0x31e848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e84c: 0xac800418  sw          $zero, 0x418($a0)
    ctx->pc = 0x31e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1048), GPR_U32(ctx, 0));
    // 0x31e850: 0xa4820416  sh          $v0, 0x416($a0)
    ctx->pc = 0x31e850u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1046), (uint16_t)GPR_U32(ctx, 2));
    // 0x31e854: 0xa4800412  sh          $zero, 0x412($a0)
    ctx->pc = 0x31e854u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1042), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e858: 0xa4800414  sh          $zero, 0x414($a0)
    ctx->pc = 0x31e858u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1044), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e85c: 0xa4800400  sh          $zero, 0x400($a0)
    ctx->pc = 0x31e85cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1024), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e860: 0xa4800406  sh          $zero, 0x406($a0)
    ctx->pc = 0x31e860u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1030), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e864: 0xa4800402  sh          $zero, 0x402($a0)
    ctx->pc = 0x31e864u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1026), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e868: 0xa4800404  sh          $zero, 0x404($a0)
    ctx->pc = 0x31e868u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1028), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e86c: 0xa4800408  sh          $zero, 0x408($a0)
    ctx->pc = 0x31e86cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1032), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e870: 0x3e00008  jr          $ra
    ctx->pc = 0x31E870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E870u;
        // 0x31e874: 0xa4800410  sh          $zero, 0x410($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1040), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E878u;
}
