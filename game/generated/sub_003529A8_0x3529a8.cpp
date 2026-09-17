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

// Function: sub_003529A8
// Address: 0x3529a8 - 0x352a54
void sub_003529A8_0x3529a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003529A8_0x3529a8");
#endif

    switch (ctx->pc) {
        case 0x3529a8u: goto label_3529a8;
        case 0x3529acu: goto label_3529ac;
        case 0x3529b0u: goto label_3529b0;
        case 0x3529b4u: goto label_3529b4;
        case 0x3529b8u: goto label_3529b8;
        case 0x3529bcu: goto label_3529bc;
        case 0x3529c0u: goto label_3529c0;
        case 0x3529c4u: goto label_3529c4;
        case 0x3529c8u: goto label_3529c8;
        case 0x3529ccu: goto label_3529cc;
        case 0x3529d0u: goto label_3529d0;
        case 0x3529d4u: goto label_3529d4;
        case 0x3529d8u: goto label_3529d8;
        case 0x3529dcu: goto label_3529dc;
        case 0x3529e0u: goto label_3529e0;
        case 0x3529e4u: goto label_3529e4;
        case 0x3529e8u: goto label_3529e8;
        case 0x3529ecu: goto label_3529ec;
        case 0x3529f0u: goto label_3529f0;
        case 0x3529f4u: goto label_3529f4;
        case 0x3529f8u: goto label_3529f8;
        case 0x3529fcu: goto label_3529fc;
        case 0x352a00u: goto label_352a00;
        case 0x352a04u: goto label_352a04;
        case 0x352a08u: goto label_352a08;
        case 0x352a0cu: goto label_352a0c;
        case 0x352a10u: goto label_352a10;
        case 0x352a14u: goto label_352a14;
        case 0x352a18u: goto label_352a18;
        case 0x352a1cu: goto label_352a1c;
        case 0x352a20u: goto label_352a20;
        case 0x352a24u: goto label_352a24;
        case 0x352a28u: goto label_352a28;
        case 0x352a2cu: goto label_352a2c;
        case 0x352a30u: goto label_352a30;
        case 0x352a34u: goto label_352a34;
        case 0x352a38u: goto label_352a38;
        case 0x352a3cu: goto label_352a3c;
        case 0x352a40u: goto label_352a40;
        case 0x352a44u: goto label_352a44;
        case 0x352a48u: goto label_352a48;
        case 0x352a4cu: goto label_352a4c;
        case 0x352a50u: goto label_352a50;
        default: break;
    }

    ctx->pc = 0x3529a8u;

label_3529a8:
    // 0x3529a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3529a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3529ac:
    // 0x3529ac: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3529acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3529b0:
    // 0x3529b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3529b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3529b4:
    // 0x3529b4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3529b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3529b8:
    // 0x3529b8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3529b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3529bc:
    // 0x3529bc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3529bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3529c0:
    // 0x3529c0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3529c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3529c4:
    // 0x3529c4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3529c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3529c8:
    // 0x3529c8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3529c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3529cc:
    // 0x3529cc: 0xc0d3208  jal         func_34C820
label_3529d0:
    if (ctx->pc == 0x3529D0u) {
        ctx->pc = 0x3529D4u;
        goto label_3529d4;
    }
    ctx->pc = 0x3529CCu;
    SET_GPR_U32(ctx, 31, 0x3529D4u);
    ctx->pc = 0x34C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C820u, 0x3529CCu, 0x3529D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3529D4u;
label_3529d4:
    // 0x3529d4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3529d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3529d8:
    // 0x3529d8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3529d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3529dc:
    // 0x3529dc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3529dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3529e0:
    // 0x3529e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3529e4:
    if (ctx->pc == 0x3529E4u) {
        ctx->pc = 0x3529E8u;
        goto label_3529e8;
    }
    ctx->pc = 0x3529E0u;
    {
        const bool branch_taken_0x3529e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3529e0) {
            ctx->pc = 0x352A38u;
            goto label_352a38;
        }
    }
    ctx->pc = 0x3529E8u;
label_3529e8:
    // 0x3529e8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3529e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3529ec:
    // 0x3529ec: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3529ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3529f0:
    // 0x3529f0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3529f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3529f4:
    // 0x3529f4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3529f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3529f8:
    // 0x3529f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3529f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3529fc:
    // 0x3529fc: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3529fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352a00:
    // 0x352a00: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352a04:
    // 0x352a04: 0x40f809  jalr        $v0
label_352a08:
    if (ctx->pc == 0x352A08u) {
        ctx->pc = 0x352A0Cu;
        goto label_352a0c;
    }
    ctx->pc = 0x352A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352A0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352A04u, 0x352A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352A0Cu;
label_352a0c:
    // 0x352a0c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352a10:
    // 0x352a10: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352a14:
    // 0x352a14: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352a18:
    if (ctx->pc == 0x352A18u) {
        ctx->pc = 0x352A1Cu;
        goto label_352a1c;
    }
    ctx->pc = 0x352A14u;
    {
        const bool branch_taken_0x352a14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352a14) {
            ctx->pc = 0x352A38u;
            goto label_352a38;
        }
    }
    ctx->pc = 0x352A1Cu;
label_352a1c:
    // 0x352a1c: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352a20:
    // 0x352a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352a24:
    // 0x352a24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352a28:
    if (ctx->pc == 0x352A28u) {
        ctx->pc = 0x352A2Cu;
        goto label_352a2c;
    }
    ctx->pc = 0x352A24u;
    {
        const bool branch_taken_0x352a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352a24) {
            ctx->pc = 0x352A38u;
            goto label_352a38;
        }
    }
    ctx->pc = 0x352A2Cu;
label_352a2c:
    // 0x352a2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352a30:
    // 0x352a30: 0x10000002  b           . + 4 + (0x2 << 2)
label_352a34:
    if (ctx->pc == 0x352A34u) {
        ctx->pc = 0x352A38u;
        goto label_352a38;
    }
    ctx->pc = 0x352A30u;
    {
        const bool branch_taken_0x352a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352a30) {
            ctx->pc = 0x352A3Cu;
            goto label_352a3c;
        }
    }
    ctx->pc = 0x352A38u;
label_352a38:
    // 0x352a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352a3c:
    // 0x352a3c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352a3cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352a40:
    // 0x352a40: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352a40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352a44:
    // 0x352a44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352a48:
    // 0x352a48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352a4c:
    // 0x352a4c: 0x3e00008  jr          $ra
label_352a50:
    if (ctx->pc == 0x352A50u) {
        ctx->pc = 0x352A54u;
        goto label_fallthrough_0x352a4c;
    }
    ctx->pc = 0x352A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352a4c:
    ctx->pc = 0x352A54u;
}
