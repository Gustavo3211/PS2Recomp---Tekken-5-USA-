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

// Function: sub_0034FB90
// Address: 0x34fb90 - 0x34fc18
void sub_0034FB90_0x34fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FB90_0x34fb90");
#endif

    switch (ctx->pc) {
        case 0x34fb90u: goto label_34fb90;
        case 0x34fb94u: goto label_34fb94;
        case 0x34fb98u: goto label_34fb98;
        case 0x34fb9cu: goto label_34fb9c;
        case 0x34fba0u: goto label_34fba0;
        case 0x34fba4u: goto label_34fba4;
        case 0x34fba8u: goto label_34fba8;
        case 0x34fbacu: goto label_34fbac;
        case 0x34fbb0u: goto label_34fbb0;
        case 0x34fbb4u: goto label_34fbb4;
        case 0x34fbb8u: goto label_34fbb8;
        case 0x34fbbcu: goto label_34fbbc;
        case 0x34fbc0u: goto label_34fbc0;
        case 0x34fbc4u: goto label_34fbc4;
        case 0x34fbc8u: goto label_34fbc8;
        case 0x34fbccu: goto label_34fbcc;
        case 0x34fbd0u: goto label_34fbd0;
        case 0x34fbd4u: goto label_34fbd4;
        case 0x34fbd8u: goto label_34fbd8;
        case 0x34fbdcu: goto label_34fbdc;
        case 0x34fbe0u: goto label_34fbe0;
        case 0x34fbe4u: goto label_34fbe4;
        case 0x34fbe8u: goto label_34fbe8;
        case 0x34fbecu: goto label_34fbec;
        case 0x34fbf0u: goto label_34fbf0;
        case 0x34fbf4u: goto label_34fbf4;
        case 0x34fbf8u: goto label_34fbf8;
        case 0x34fbfcu: goto label_34fbfc;
        case 0x34fc00u: goto label_34fc00;
        case 0x34fc04u: goto label_34fc04;
        case 0x34fc08u: goto label_34fc08;
        case 0x34fc0cu: goto label_34fc0c;
        case 0x34fc10u: goto label_34fc10;
        case 0x34fc14u: goto label_34fc14;
        default: break;
    }

    ctx->pc = 0x34fb90u;

label_34fb90:
    // 0x34fb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34fb94:
    // 0x34fb94: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34fb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34fb98:
    // 0x34fb98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34fb9c:
    // 0x34fb9c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34fb9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34fba0:
    // 0x34fba0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34fba4:
    // 0x34fba4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34fba8:
    // 0x34fba8: 0xc0d3fc6  jal         func_34FF18
label_34fbac:
    if (ctx->pc == 0x34FBACu) {
        ctx->pc = 0x34FBB0u;
        goto label_34fbb0;
    }
    ctx->pc = 0x34FBA8u;
    SET_GPR_U32(ctx, 31, 0x34FBB0u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34FBA8u, 0x34FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBB0u;
label_34fbb0:
    // 0x34fbb0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34fbb4:
    // 0x34fbb4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34fbb8:
    // 0x34fbb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34fbbc:
    if (ctx->pc == 0x34FBBCu) {
        ctx->pc = 0x34FBC0u;
        goto label_34fbc0;
    }
    ctx->pc = 0x34FBB8u;
    {
        const bool branch_taken_0x34fbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fbb8) {
            ctx->pc = 0x34FBD0u;
            goto label_34fbd0;
        }
    }
    ctx->pc = 0x34FBC0u;
label_34fbc0:
    // 0x34fbc0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34fbc4:
    // 0x34fbc4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34fbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34fbc8:
    // 0x34fbc8: 0x1000000d  b           . + 4 + (0xD << 2)
label_34fbcc:
    if (ctx->pc == 0x34FBCCu) {
        ctx->pc = 0x34FBD0u;
        goto label_34fbd0;
    }
    ctx->pc = 0x34FBC8u;
    {
        const bool branch_taken_0x34fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fbc8) {
            ctx->pc = 0x34FC00u;
            goto label_34fc00;
        }
    }
    ctx->pc = 0x34FBD0u;
label_34fbd0:
    // 0x34fbd0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34fbd4:
    // 0x34fbd4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34fbd8:
    // 0x34fbd8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x34fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_34fbdc:
    // 0x34fbdc: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34fbe0:
    // 0x34fbe0: 0x40f809  jalr        $v0
label_34fbe4:
    if (ctx->pc == 0x34FBE4u) {
        ctx->pc = 0x34FBE8u;
        goto label_34fbe8;
    }
    ctx->pc = 0x34FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34FBE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FBE0u, 0x34FBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34FBE8u;
label_34fbe8:
    // 0x34fbe8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34fbec:
    // 0x34fbec: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34fbf0:
    // 0x34fbf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34fbf4:
    // 0x34fbf4: 0xc0d3f96  jal         func_34FE58
label_34fbf8:
    if (ctx->pc == 0x34FBF8u) {
        ctx->pc = 0x34FBFCu;
        goto label_34fbfc;
    }
    ctx->pc = 0x34FBF4u;
    SET_GPR_U32(ctx, 31, 0x34FBFCu);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34FBF4u, 0x34FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBFCu;
label_34fbfc:
    // 0x34fbfc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34fc00:
    // 0x34fc00: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34fc00u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34fc04:
    // 0x34fc04: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34fc04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34fc08:
    // 0x34fc08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34fc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34fc0c:
    // 0x34fc0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34fc0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34fc10:
    // 0x34fc10: 0x3e00008  jr          $ra
label_34fc14:
    if (ctx->pc == 0x34FC14u) {
        ctx->pc = 0x34FC18u;
        goto label_fallthrough_0x34fc10;
    }
    ctx->pc = 0x34FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34fc10:
    ctx->pc = 0x34FC18u;
}
