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

// Function: sub_004A8730
// Address: 0x4a8730 - 0x4a8798
void sub_004A8730_0x4a8730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8730_0x4a8730");
#endif

    switch (ctx->pc) {
        case 0x4a875cu: goto label_4a875c;
        case 0x4a8770u: goto label_4a8770;
        case 0x4a8778u: goto label_4a8778;
        default: break;
    }

    ctx->pc = 0x4a8730u;

    // 0x4a8730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a8734: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x4a8734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4a8738: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a8738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a873c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a873cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8740: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a8740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a8744: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a8744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a8748: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4a8748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a874c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A874Cu;
    {
        const bool branch_taken_0x4a874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A874Cu;
        // 0x4a8750: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a874c) {
            ctx->pc = 0x4A8768u;
            goto label_4a8768;
        }
    }
    ctx->pc = 0x4A8754u;
    // 0x4a8754: 0xc12a1e6  jal         func_4A8798
    ctx->pc = 0x4A8754u;
    SET_GPR_U32(ctx, 31, 0x4A875Cu);
    ctx->pc = 0x4A8798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8798u, 0x4A8754u, 0x4A875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A875Cu;
label_4a875c:
    // 0x4a875c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A875Cu;
    {
        const bool branch_taken_0x4a875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A875Cu;
        // 0x4a8760: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a875c) {
            ctx->pc = 0x4A878Cu;
            goto label_4a878c;
        }
    }
    ctx->pc = 0x4A8764u;
    // 0x4a8764: 0x0  nop
    ctx->pc = 0x4a8764u;
    // NOP
label_4a8768:
    // 0x4a8768: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A8768u;
    SET_GPR_U32(ctx, 31, 0x4A8770u);
    ctx->pc = 0x4A876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8768u;
    // 0x4a876c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A8768u, 0x4A8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8770u;
label_4a8770:
    // 0x4a8770: 0xc12a1e6  jal         func_4A8798
    ctx->pc = 0x4A8770u;
    SET_GPR_U32(ctx, 31, 0x4A8778u);
    ctx->pc = 0x4A8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8770u;
    // 0x4a8774: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8798u, 0x4A8770u, 0x4A8778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8778u;
label_4a8778:
    // 0x4a8778: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a877c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a877cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a8780: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a8780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a8784: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a8784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a8788: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a8788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a878c:
    // 0x4a878c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a878cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a8790: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8790u;
        // 0x4a8794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8798u;
}
