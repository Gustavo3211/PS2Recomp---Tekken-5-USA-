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

// Function: sub_00319114
// Address: 0x319114 - 0x31916c
void sub_00319114_0x319114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319114_0x319114");
#endif

    switch (ctx->pc) {
        case 0x319138u: goto label_319138;
        case 0x31914cu: goto label_31914c;
        default: break;
    }

    ctx->pc = 0x319114u;

    // 0x319114: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319118: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x319118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31911c: 0xffbe0018  sd          $fp, 0x18($sp)
    ctx->pc = 0x31911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
    // 0x319120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x319120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x319124: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319124u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x319128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31912c: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x31912cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x319130: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x319130u;
    SET_GPR_U32(ctx, 31, 0x319138u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x319130u, 0x319138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319138u;
label_319138:
    // 0x319138: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x319138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x31913c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x31913cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x319140: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x319140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x319144: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x319144u;
    SET_GPR_U32(ctx, 31, 0x31914Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x319144u, 0x31914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31914Cu;
label_31914c:
    // 0x31914c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319150: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319150u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319154: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x319154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319158: 0xdfbe0018  ld          $fp, 0x18($sp)
    ctx->pc = 0x319158u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31915c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31915cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319160: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x319160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x319164: 0x3e00008  jr          $ra
    ctx->pc = 0x319164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31916Cu;
}
