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

// Function: sub_0031B768
// Address: 0x31b768 - 0x31b7d0
void sub_0031B768_0x31b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B768_0x31b768");
#endif

    switch (ctx->pc) {
        case 0x31b798u: goto label_31b798;
        case 0x31b7b0u: goto label_31b7b0;
        case 0x31b7bcu: goto label_31b7bc;
        default: break;
    }

    ctx->pc = 0x31b768u;

    // 0x31b768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b76c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31b770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b774: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31b778: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x31b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x31b77c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B77Cu;
    {
        const bool branch_taken_0x31b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B77Cu;
        // 0x31b780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b77c) {
            ctx->pc = 0x31B7A0u;
            goto label_31b7a0;
        }
    }
    ctx->pc = 0x31B784u;
    // 0x31b784: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31b784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31b788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b78c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x31b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x31b790: 0xc0c744a  jal         func_31D128
    ctx->pc = 0x31B790u;
    SET_GPR_U32(ctx, 31, 0x31B798u);
    ctx->pc = 0x31B794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B790u;
    // 0x31b794: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D128u, 0x31B790u, 0x31B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B798u;
label_31b798:
    // 0x31b798: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31B798u;
    {
        const bool branch_taken_0x31b798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B798u;
        // 0x31b79c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b798) {
            ctx->pc = 0x31B7C0u;
            goto label_31b7c0;
        }
    }
    ctx->pc = 0x31B7A0u;
label_31b7a0:
    // 0x31b7a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31b7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31b7a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31b7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b7a8: 0xc0c73aa  jal         func_31CEA8
    ctx->pc = 0x31B7A8u;
    SET_GPR_U32(ctx, 31, 0x31B7B0u);
    ctx->pc = 0x31B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7A8u;
    // 0x31b7ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEA8u, 0x31B7A8u, 0x31B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7B0u;
label_31b7b0:
    // 0x31b7b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7b4: 0xc0c73ae  jal         func_31CEB8
    ctx->pc = 0x31B7B4u;
    SET_GPR_U32(ctx, 31, 0x31B7BCu);
    ctx->pc = 0x31B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7B4u;
    // 0x31b7b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEB8u, 0x31B7B4u, 0x31B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7BCu;
label_31b7bc:
    // 0x31b7bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31b7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31b7c0:
    // 0x31b7c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31b7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31b7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x31B7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7C4u;
        // 0x31b7c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B7CCu;
    // 0x31b7cc: 0x0  nop
    ctx->pc = 0x31b7ccu;
    // NOP
    ctx->pc = 0x31b7d0u;
}
