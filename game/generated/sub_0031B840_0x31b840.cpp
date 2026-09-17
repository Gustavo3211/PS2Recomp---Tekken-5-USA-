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

// Function: sub_0031B840
// Address: 0x31b840 - 0x31b8a8
void sub_0031B840_0x31b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B840_0x31b840");
#endif

    switch (ctx->pc) {
        case 0x31b870u: goto label_31b870;
        case 0x31b888u: goto label_31b888;
        case 0x31b894u: goto label_31b894;
        default: break;
    }

    ctx->pc = 0x31b840u;

    // 0x31b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b844: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31b848: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b84c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31b84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31b850: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x31b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x31b854: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B854u;
    {
        const bool branch_taken_0x31b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B854u;
        // 0x31b858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b854) {
            ctx->pc = 0x31B878u;
            goto label_31b878;
        }
    }
    ctx->pc = 0x31B85Cu;
    // 0x31b85c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31b85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31b860: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b864: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31b864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x31b868: 0xc0c744a  jal         func_31D128
    ctx->pc = 0x31B868u;
    SET_GPR_U32(ctx, 31, 0x31B870u);
    ctx->pc = 0x31B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B868u;
    // 0x31b86c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D128u, 0x31B868u, 0x31B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B870u;
label_31b870:
    // 0x31b870: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31B870u;
    {
        const bool branch_taken_0x31b870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B870u;
        // 0x31b874: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b870) {
            ctx->pc = 0x31B898u;
            goto label_31b898;
        }
    }
    ctx->pc = 0x31B878u;
label_31b878:
    // 0x31b878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31b878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31b87c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31b87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b880: 0xc0c73aa  jal         func_31CEA8
    ctx->pc = 0x31B880u;
    SET_GPR_U32(ctx, 31, 0x31B888u);
    ctx->pc = 0x31B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B880u;
    // 0x31b884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEA8u, 0x31B880u, 0x31B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B888u;
label_31b888:
    // 0x31b888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b88c: 0xc0c73ae  jal         func_31CEB8
    ctx->pc = 0x31B88Cu;
    SET_GPR_U32(ctx, 31, 0x31B894u);
    ctx->pc = 0x31B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B88Cu;
    // 0x31b890: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEB8u, 0x31B88Cu, 0x31B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B894u;
label_31b894:
    // 0x31b894: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31b894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31b898:
    // 0x31b898: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31b898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31b89c: 0x3e00008  jr          $ra
    ctx->pc = 0x31B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B89Cu;
        // 0x31b8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B8A4u;
    // 0x31b8a4: 0x0  nop
    ctx->pc = 0x31b8a4u;
    // NOP
    ctx->pc = 0x31b8a8u;
}
