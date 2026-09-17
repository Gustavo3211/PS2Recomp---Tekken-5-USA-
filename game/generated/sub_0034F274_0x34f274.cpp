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

// Function: sub_0034F274
// Address: 0x34f274 - 0x34f2fc
void sub_0034F274_0x34f274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F274_0x34f274");
#endif

    switch (ctx->pc) {
        case 0x34f274u: goto label_34f274;
        case 0x34f278u: goto label_34f278;
        case 0x34f27cu: goto label_34f27c;
        case 0x34f280u: goto label_34f280;
        case 0x34f284u: goto label_34f284;
        case 0x34f288u: goto label_34f288;
        case 0x34f28cu: goto label_34f28c;
        case 0x34f290u: goto label_34f290;
        case 0x34f294u: goto label_34f294;
        case 0x34f298u: goto label_34f298;
        case 0x34f29cu: goto label_34f29c;
        case 0x34f2a0u: goto label_34f2a0;
        case 0x34f2a4u: goto label_34f2a4;
        case 0x34f2a8u: goto label_34f2a8;
        case 0x34f2acu: goto label_34f2ac;
        case 0x34f2b0u: goto label_34f2b0;
        case 0x34f2b4u: goto label_34f2b4;
        case 0x34f2b8u: goto label_34f2b8;
        case 0x34f2bcu: goto label_34f2bc;
        case 0x34f2c0u: goto label_34f2c0;
        case 0x34f2c4u: goto label_34f2c4;
        case 0x34f2c8u: goto label_34f2c8;
        case 0x34f2ccu: goto label_34f2cc;
        case 0x34f2d0u: goto label_34f2d0;
        case 0x34f2d4u: goto label_34f2d4;
        case 0x34f2d8u: goto label_34f2d8;
        case 0x34f2dcu: goto label_34f2dc;
        case 0x34f2e0u: goto label_34f2e0;
        case 0x34f2e4u: goto label_34f2e4;
        case 0x34f2e8u: goto label_34f2e8;
        case 0x34f2ecu: goto label_34f2ec;
        case 0x34f2f0u: goto label_34f2f0;
        case 0x34f2f4u: goto label_34f2f4;
        case 0x34f2f8u: goto label_34f2f8;
        default: break;
    }

    ctx->pc = 0x34f274u;

label_34f274:
    // 0x34f274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34f278:
    // 0x34f278: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34f278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34f27c:
    // 0x34f27c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34f27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34f280:
    // 0x34f280: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f280u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f284:
    // 0x34f284: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f284u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f288:
    // 0x34f288: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34f288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f28c:
    // 0x34f28c: 0xc0d3fc6  jal         func_34FF18
label_34f290:
    if (ctx->pc == 0x34F290u) {
        ctx->pc = 0x34F294u;
        goto label_34f294;
    }
    ctx->pc = 0x34F28Cu;
    SET_GPR_U32(ctx, 31, 0x34F294u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F28Cu, 0x34F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F294u;
label_34f294:
    // 0x34f294: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34f294u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34f298:
    // 0x34f298: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f29c:
    // 0x34f29c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f2a0:
    if (ctx->pc == 0x34F2A0u) {
        ctx->pc = 0x34F2A4u;
        goto label_34f2a4;
    }
    ctx->pc = 0x34F29Cu;
    {
        const bool branch_taken_0x34f29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f29c) {
            ctx->pc = 0x34F2B4u;
            goto label_34f2b4;
        }
    }
    ctx->pc = 0x34F2A4u;
label_34f2a4:
    // 0x34f2a4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f2a8:
    // 0x34f2a8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f2ac:
    // 0x34f2ac: 0x1000000d  b           . + 4 + (0xD << 2)
label_34f2b0:
    if (ctx->pc == 0x34F2B0u) {
        ctx->pc = 0x34F2B4u;
        goto label_34f2b4;
    }
    ctx->pc = 0x34F2ACu;
    {
        const bool branch_taken_0x34f2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f2ac) {
            ctx->pc = 0x34F2E4u;
            goto label_34f2e4;
        }
    }
    ctx->pc = 0x34F2B4u;
label_34f2b4:
    // 0x34f2b4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f2b8:
    // 0x34f2b8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34f2bc:
    // 0x34f2bc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f2c0:
    // 0x34f2c0: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f2c4:
    // 0x34f2c4: 0x40f809  jalr        $v0
label_34f2c8:
    if (ctx->pc == 0x34F2C8u) {
        ctx->pc = 0x34F2CCu;
        goto label_34f2cc;
    }
    ctx->pc = 0x34F2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F2CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F2C4u, 0x34F2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F2CCu;
label_34f2cc:
    // 0x34f2cc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34f2d0:
    // 0x34f2d0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f2d4:
    // 0x34f2d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f2d8:
    // 0x34f2d8: 0xc0d3f96  jal         func_34FE58
label_34f2dc:
    if (ctx->pc == 0x34F2DCu) {
        ctx->pc = 0x34F2E0u;
        goto label_34f2e0;
    }
    ctx->pc = 0x34F2D8u;
    SET_GPR_U32(ctx, 31, 0x34F2E0u);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34F2D8u, 0x34F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2E0u;
label_34f2e0:
    // 0x34f2e0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f2e4:
    // 0x34f2e4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f2e4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f2e8:
    // 0x34f2e8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34f2e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34f2ec:
    // 0x34f2ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34f2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34f2f0:
    // 0x34f2f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34f2f4:
    // 0x34f2f4: 0x3e00008  jr          $ra
label_34f2f8:
    if (ctx->pc == 0x34F2F8u) {
        ctx->pc = 0x34F2FCu;
        goto label_fallthrough_0x34f2f4;
    }
    ctx->pc = 0x34F2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f2f4:
    ctx->pc = 0x34F2FCu;
}
