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

// Function: sub_00248830
// Address: 0x248830 - 0x248890
void sub_00248830_0x248830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248830_0x248830");
#endif

    switch (ctx->pc) {
        case 0x248854u: goto label_248854;
        case 0x24885cu: goto label_24885c;
        case 0x248864u: goto label_248864;
        case 0x24886cu: goto label_24886c;
        case 0x248874u: goto label_248874;
        case 0x24887cu: goto label_24887c;
        default: break;
    }

    ctx->pc = 0x248830u;

    // 0x248830: 0x8f82a9b8  lw          $v0, -0x5648($gp)
    ctx->pc = 0x248830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945208)));
    // 0x248834: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24883c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24883Cu;
    {
        const bool branch_taken_0x24883c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24883Cu;
        // 0x248840: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24883c) {
            ctx->pc = 0x24887Cu;
            goto label_24887c;
        }
    }
    ctx->pc = 0x248844u;
    // 0x248844: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x248844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x248848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24884c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x24884Cu;
    SET_GPR_U32(ctx, 31, 0x248854u);
    ctx->pc = 0x248850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24884Cu;
    // 0x248850: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x24884Cu, 0x248854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248854u;
label_248854:
    // 0x248854: 0xc092320  jal         func_248C80
    ctx->pc = 0x248854u;
    SET_GPR_U32(ctx, 31, 0x24885Cu);
    ctx->pc = 0x248858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248854u;
    // 0x248858: 0x8c5000bc  lw          $s0, 0xBC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C80u, 0x248854u, 0x24885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24885Cu;
label_24885c:
    // 0x24885c: 0xc0927c6  jal         func_249F18
    ctx->pc = 0x24885Cu;
    SET_GPR_U32(ctx, 31, 0x248864u);
    ctx->pc = 0x248860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24885Cu;
    // 0x248860: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249F18u, 0x24885Cu, 0x248864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248864u;
label_248864:
    // 0x248864: 0xc092736  jal         func_249CD8
    ctx->pc = 0x248864u;
    SET_GPR_U32(ctx, 31, 0x24886Cu);
    ctx->pc = 0x248868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248864u;
    // 0x248868: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249CD8u, 0x248864u, 0x24886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24886Cu;
label_24886c:
    // 0x24886c: 0xc092744  jal         func_249D10
    ctx->pc = 0x24886Cu;
    SET_GPR_U32(ctx, 31, 0x248874u);
    ctx->pc = 0x249D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D10u, 0x24886Cu, 0x248874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248874u;
label_248874:
    // 0x248874: 0xc0d62dc  jal         func_358B70
    ctx->pc = 0x248874u;
    SET_GPR_U32(ctx, 31, 0x24887Cu);
    ctx->pc = 0x248878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248874u;
    // 0x248878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358B70u, 0x248874u, 0x24887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24887Cu;
label_24887c:
    // 0x24887c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24887cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248880: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x248880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248884: 0x3e00008  jr          $ra
    ctx->pc = 0x248884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248884u;
        // 0x248888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24888Cu;
    // 0x24888c: 0x0  nop
    ctx->pc = 0x24888cu;
    // NOP
    ctx->pc = 0x248890u;
}
