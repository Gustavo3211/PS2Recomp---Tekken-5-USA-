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

// Function: sub_00352C68
// Address: 0x352c68 - 0x352d14
void sub_00352C68_0x352c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352C68_0x352c68");
#endif

    switch (ctx->pc) {
        case 0x352c68u: goto label_352c68;
        case 0x352c6cu: goto label_352c6c;
        case 0x352c70u: goto label_352c70;
        case 0x352c74u: goto label_352c74;
        case 0x352c78u: goto label_352c78;
        case 0x352c7cu: goto label_352c7c;
        case 0x352c80u: goto label_352c80;
        case 0x352c84u: goto label_352c84;
        case 0x352c88u: goto label_352c88;
        case 0x352c8cu: goto label_352c8c;
        case 0x352c90u: goto label_352c90;
        case 0x352c94u: goto label_352c94;
        case 0x352c98u: goto label_352c98;
        case 0x352c9cu: goto label_352c9c;
        case 0x352ca0u: goto label_352ca0;
        case 0x352ca4u: goto label_352ca4;
        case 0x352ca8u: goto label_352ca8;
        case 0x352cacu: goto label_352cac;
        case 0x352cb0u: goto label_352cb0;
        case 0x352cb4u: goto label_352cb4;
        case 0x352cb8u: goto label_352cb8;
        case 0x352cbcu: goto label_352cbc;
        case 0x352cc0u: goto label_352cc0;
        case 0x352cc4u: goto label_352cc4;
        case 0x352cc8u: goto label_352cc8;
        case 0x352cccu: goto label_352ccc;
        case 0x352cd0u: goto label_352cd0;
        case 0x352cd4u: goto label_352cd4;
        case 0x352cd8u: goto label_352cd8;
        case 0x352cdcu: goto label_352cdc;
        case 0x352ce0u: goto label_352ce0;
        case 0x352ce4u: goto label_352ce4;
        case 0x352ce8u: goto label_352ce8;
        case 0x352cecu: goto label_352cec;
        case 0x352cf0u: goto label_352cf0;
        case 0x352cf4u: goto label_352cf4;
        case 0x352cf8u: goto label_352cf8;
        case 0x352cfcu: goto label_352cfc;
        case 0x352d00u: goto label_352d00;
        case 0x352d04u: goto label_352d04;
        case 0x352d08u: goto label_352d08;
        case 0x352d0cu: goto label_352d0c;
        case 0x352d10u: goto label_352d10;
        default: break;
    }

    ctx->pc = 0x352c68u;

label_352c68:
    // 0x352c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352c6c:
    // 0x352c6c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352c70:
    // 0x352c70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352c74:
    // 0x352c74: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352c74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352c78:
    // 0x352c78: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352c78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352c7c:
    // 0x352c7c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352c80:
    // 0x352c80: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352c80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352c84:
    // 0x352c84: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352c88:
    // 0x352c88: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352c8c:
    // 0x352c8c: 0xc0d32d9  jal         func_34CB64
label_352c90:
    if (ctx->pc == 0x352C90u) {
        ctx->pc = 0x352C94u;
        goto label_352c94;
    }
    ctx->pc = 0x352C8Cu;
    SET_GPR_U32(ctx, 31, 0x352C94u);
    ctx->pc = 0x34CB64u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CB64u, 0x352C8Cu, 0x352C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C94u;
label_352c94:
    // 0x352c94: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352c94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352c98:
    // 0x352c98: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352c9c:
    // 0x352c9c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352ca0:
    // 0x352ca0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352ca4:
    if (ctx->pc == 0x352CA4u) {
        ctx->pc = 0x352CA8u;
        goto label_352ca8;
    }
    ctx->pc = 0x352CA0u;
    {
        const bool branch_taken_0x352ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ca0) {
            ctx->pc = 0x352CF8u;
            goto label_352cf8;
        }
    }
    ctx->pc = 0x352CA8u;
label_352ca8:
    // 0x352ca8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352cac:
    // 0x352cac: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352cb0:
    // 0x352cb0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352cb4:
    // 0x352cb4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352cb8:
    // 0x352cb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352cbc:
    // 0x352cbc: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352cc0:
    // 0x352cc0: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352cc4:
    // 0x352cc4: 0x40f809  jalr        $v0
label_352cc8:
    if (ctx->pc == 0x352CC8u) {
        ctx->pc = 0x352CCCu;
        goto label_352ccc;
    }
    ctx->pc = 0x352CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352CCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352CC4u, 0x352CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352CCCu;
label_352ccc:
    // 0x352ccc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352cccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352cd0:
    // 0x352cd0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352cd4:
    // 0x352cd4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352cd8:
    if (ctx->pc == 0x352CD8u) {
        ctx->pc = 0x352CDCu;
        goto label_352cdc;
    }
    ctx->pc = 0x352CD4u;
    {
        const bool branch_taken_0x352cd4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352cd4) {
            ctx->pc = 0x352CF8u;
            goto label_352cf8;
        }
    }
    ctx->pc = 0x352CDCu;
label_352cdc:
    // 0x352cdc: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352ce0:
    // 0x352ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352ce4:
    // 0x352ce4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352ce8:
    if (ctx->pc == 0x352CE8u) {
        ctx->pc = 0x352CECu;
        goto label_352cec;
    }
    ctx->pc = 0x352CE4u;
    {
        const bool branch_taken_0x352ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352ce4) {
            ctx->pc = 0x352CF8u;
            goto label_352cf8;
        }
    }
    ctx->pc = 0x352CECu;
label_352cec:
    // 0x352cec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352cf0:
    // 0x352cf0: 0x10000002  b           . + 4 + (0x2 << 2)
label_352cf4:
    if (ctx->pc == 0x352CF4u) {
        ctx->pc = 0x352CF8u;
        goto label_352cf8;
    }
    ctx->pc = 0x352CF0u;
    {
        const bool branch_taken_0x352cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352cf0) {
            ctx->pc = 0x352CFCu;
            goto label_352cfc;
        }
    }
    ctx->pc = 0x352CF8u;
label_352cf8:
    // 0x352cf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352cfc:
    // 0x352cfc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352cfcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352d00:
    // 0x352d00: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352d00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352d04:
    // 0x352d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352d08:
    // 0x352d08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352d0c:
    // 0x352d0c: 0x3e00008  jr          $ra
label_352d10:
    if (ctx->pc == 0x352D10u) {
        ctx->pc = 0x352D14u;
        goto label_fallthrough_0x352d0c;
    }
    ctx->pc = 0x352D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352d0c:
    ctx->pc = 0x352D14u;
}
