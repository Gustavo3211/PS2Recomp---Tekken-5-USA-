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

// Function: sub_0031E780
// Address: 0x31e780 - 0x31e7d0
void sub_0031E780_0x31e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E780_0x31e780");
#endif

    switch (ctx->pc) {
        case 0x31e79cu: goto label_31e79c;
        case 0x31e7acu: goto label_31e7ac;
        case 0x31e7bcu: goto label_31e7bc;
        default: break;
    }

    ctx->pc = 0x31e780u;

    // 0x31e780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e794: 0xc0ce768  jal         func_339DA0
    ctx->pc = 0x31E794u;
    SET_GPR_U32(ctx, 31, 0x31E79Cu);
    ctx->pc = 0x31E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E794u;
    // 0x31e798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339DA0u, 0x31E794u, 0x31E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E79Cu;
label_31e79c:
    // 0x31e79c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31e7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7a4: 0xc0ce730  jal         func_339CC0
    ctx->pc = 0x31E7A4u;
    SET_GPR_U32(ctx, 31, 0x31E7ACu);
    ctx->pc = 0x31E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7A4u;
    // 0x31e7a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339CC0u, 0x31E7A4u, 0x31E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7ACu;
label_31e7ac:
    // 0x31e7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7b0: 0x103140  sll         $a2, $s0, 5
    ctx->pc = 0x31e7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x31e7b4: 0xc0c7a1e  jal         func_31E878
    ctx->pc = 0x31E7B4u;
    SET_GPR_U32(ctx, 31, 0x31E7BCu);
    ctx->pc = 0x31E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7B4u;
    // 0x31e7b8: 0x22940  sll         $a1, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E878u, 0x31E7B4u, 0x31E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7BCu;
label_31e7bc:
    // 0x31e7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e7c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7C8u;
        // 0x31e7cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7D0u;
}
