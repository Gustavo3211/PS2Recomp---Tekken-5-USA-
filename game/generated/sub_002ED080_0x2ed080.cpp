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

// Function: sub_002ED080
// Address: 0x2ed080 - 0x2ed110
void sub_002ED080_0x2ed080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED080_0x2ed080");
#endif

    switch (ctx->pc) {
        case 0x2ed0acu: goto label_2ed0ac;
        case 0x2ed0b8u: goto label_2ed0b8;
        case 0x2ed0ccu: goto label_2ed0cc;
        case 0x2ed0d8u: goto label_2ed0d8;
        case 0x2ed0e4u: goto label_2ed0e4;
        default: break;
    }

    ctx->pc = 0x2ed080u;

    // 0x2ed080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ed080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ed084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed08c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ed090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed094: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ed094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ed098: 0x26320070  addiu       $s2, $s1, 0x70
    ctx->pc = 0x2ed098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2ed09c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ed09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ed0a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ed0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ed0a4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2ED0A4u;
    SET_GPR_U32(ctx, 31, 0x2ED0ACu);
    ctx->pc = 0x2ED0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0A4u;
    // 0x2ed0a8: 0x26330078  addiu       $s3, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2ED0A4u, 0x2ED0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0ACu;
label_2ed0ac:
    // 0x2ed0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0b0: 0xc0a5a12  jal         func_296848
    ctx->pc = 0x2ED0B0u;
    SET_GPR_U32(ctx, 31, 0x2ED0B8u);
    ctx->pc = 0x2ED0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0B0u;
    // 0x2ed0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296848u, 0x2ED0B0u, 0x2ED0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0B8u;
label_2ed0b8:
    // 0x2ed0b8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2ed0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2ed0bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ed0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ed0c4: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x2ED0C4u;
    SET_GPR_U32(ctx, 31, 0x2ED0CCu);
    ctx->pc = 0x2ED0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0C4u;
    // 0x2ed0c8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x2ED0C4u, 0x2ED0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0CCu;
label_2ed0cc:
    // 0x2ed0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0d0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2ED0D0u;
    SET_GPR_U32(ctx, 31, 0x2ED0D8u);
    ctx->pc = 0x2ED0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0D0u;
    // 0x2ed0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2ED0D0u, 0x2ED0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0D8u;
label_2ed0d8:
    // 0x2ed0d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0dc: 0xc0b994e  jal         func_2E6538
    ctx->pc = 0x2ED0DCu;
    SET_GPR_U32(ctx, 31, 0x2ED0E4u);
    ctx->pc = 0x2ED0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0DCu;
    // 0x2ed0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6538u, 0x2ED0DCu, 0x2ED0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0E4u;
label_2ed0e4:
    // 0x2ed0e4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2ed0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2ed0e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed0ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ed0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ed0f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ed0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed0f4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2ed0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2ed0f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed0fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ed0fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ed100: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed104: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED104u;
        // 0x2ed108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED10Cu;
    // 0x2ed10c: 0x0  nop
    ctx->pc = 0x2ed10cu;
    // NOP
    ctx->pc = 0x2ed110u;
}
