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

// Function: sub_00373754
// Address: 0x373754 - 0x3737c4
void sub_00373754_0x373754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373754_0x373754");
#endif

    switch (ctx->pc) {
        case 0x373780u: goto label_373780;
        case 0x3737a4u: goto label_3737a4;
        default: break;
    }

    ctx->pc = 0x373754u;

    // 0x373754: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x373758: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x373758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37375c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x37375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x373760: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x373760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x373764: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x373764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x373768: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373768u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37376c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37376cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373770: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x373770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373778: 0xc0dcf2f  jal         func_373CBC
    ctx->pc = 0x373778u;
    SET_GPR_U32(ctx, 31, 0x373780u);
    ctx->pc = 0x373CBCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373CBCu, 0x373778u, 0x373780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373780u;
label_373780:
    // 0x373780: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x373780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x373784: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373788: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x373788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37378c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x37378cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x373790: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x373790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x373794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373798: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x373798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x37379c: 0xc0dcf43  jal         func_373D0C
    ctx->pc = 0x37379Cu;
    SET_GPR_U32(ctx, 31, 0x3737A4u);
    ctx->pc = 0x373D0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373D0Cu, 0x37379Cu, 0x3737A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737A4u;
label_3737a4:
    // 0x3737a4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3737a4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3737a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3737ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3737acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3737b0: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3737b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3737b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3737b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3737b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3737b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3737bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3737BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3737BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3737C4u;
}
