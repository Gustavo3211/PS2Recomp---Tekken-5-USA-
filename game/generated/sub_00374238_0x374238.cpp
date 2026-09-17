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

// Function: sub_00374238
// Address: 0x374238 - 0x3742a0
void sub_00374238_0x374238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374238_0x374238");
#endif

    switch (ctx->pc) {
        case 0x37426cu: goto label_37426c;
        case 0x374284u: goto label_374284;
        default: break;
    }

    ctx->pc = 0x374238u;

    // 0x374238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37423c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37423cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x374240: 0xffbe0018  sd          $fp, 0x18($sp)
    ctx->pc = 0x374240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
    // 0x374244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x374244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x374248: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x374248u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37424c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x37424cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x374250: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x374250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374254: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x374254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374258: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x374258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x37425c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374260: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374264: 0xc0dd0b7  jal         func_3742DC
    ctx->pc = 0x374264u;
    SET_GPR_U32(ctx, 31, 0x37426Cu);
    ctx->pc = 0x3742DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3742DCu, 0x374264u, 0x37426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37426Cu;
label_37426c:
    // 0x37426c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x37426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x374270: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374270u;
    {
        const bool branch_taken_0x374270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374270) {
            ctx->pc = 0x374284u;
            goto label_374284;
        }
    }
    ctx->pc = 0x374278u;
    // 0x374278: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x374278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x37427c: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x37427Cu;
    SET_GPR_U32(ctx, 31, 0x374284u);
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x37427Cu, 0x374284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374284u;
label_374284:
    // 0x374284: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374284u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374288: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x374288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37428c: 0xdfbe0018  ld          $fp, 0x18($sp)
    ctx->pc = 0x37428cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x374290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x374290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374294: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x374294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374298: 0x3e00008  jr          $ra
    ctx->pc = 0x374298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3742A0u;
}
