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

// Function: sub_0031B5A8
// Address: 0x31b5a8 - 0x31b5e8
void sub_0031B5A8_0x31b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B5A8_0x31b5a8");
#endif

    switch (ctx->pc) {
        case 0x31b5ccu: goto label_31b5cc;
        case 0x31b5d8u: goto label_31b5d8;
        default: break;
    }

    ctx->pc = 0x31b5a8u;

    // 0x31b5a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b5ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31b5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31b5b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31b5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b5b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31b5b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31b5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31b5c4: 0xc0c73aa  jal         func_31CEA8
    ctx->pc = 0x31B5C4u;
    SET_GPR_U32(ctx, 31, 0x31B5CCu);
    ctx->pc = 0x31B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B5C4u;
    // 0x31b5c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEA8u, 0x31B5C4u, 0x31B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B5CCu;
label_31b5cc:
    // 0x31b5cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5d0: 0xc0c73ae  jal         func_31CEB8
    ctx->pc = 0x31B5D0u;
    SET_GPR_U32(ctx, 31, 0x31B5D8u);
    ctx->pc = 0x31B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B5D0u;
    // 0x31b5d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEB8u, 0x31B5D0u, 0x31B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B5D8u;
label_31b5d8:
    // 0x31b5d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31b5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b5dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31b5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31b5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x31B5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5E0u;
        // 0x31b5e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B5E8u;
}
