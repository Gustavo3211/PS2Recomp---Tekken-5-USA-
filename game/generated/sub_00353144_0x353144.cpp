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

// Function: sub_00353144
// Address: 0x353144 - 0x3531f8
void sub_00353144_0x353144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353144_0x353144");
#endif

    switch (ctx->pc) {
        case 0x353144u: goto label_353144;
        case 0x353148u: goto label_353148;
        case 0x35314cu: goto label_35314c;
        case 0x353150u: goto label_353150;
        case 0x353154u: goto label_353154;
        case 0x353158u: goto label_353158;
        case 0x35315cu: goto label_35315c;
        case 0x353160u: goto label_353160;
        case 0x353164u: goto label_353164;
        case 0x353168u: goto label_353168;
        case 0x35316cu: goto label_35316c;
        case 0x353170u: goto label_353170;
        case 0x353174u: goto label_353174;
        case 0x353178u: goto label_353178;
        case 0x35317cu: goto label_35317c;
        case 0x353180u: goto label_353180;
        case 0x353184u: goto label_353184;
        case 0x353188u: goto label_353188;
        case 0x35318cu: goto label_35318c;
        case 0x353190u: goto label_353190;
        case 0x353194u: goto label_353194;
        case 0x353198u: goto label_353198;
        case 0x35319cu: goto label_35319c;
        case 0x3531a0u: goto label_3531a0;
        case 0x3531a4u: goto label_3531a4;
        case 0x3531a8u: goto label_3531a8;
        case 0x3531acu: goto label_3531ac;
        case 0x3531b0u: goto label_3531b0;
        case 0x3531b4u: goto label_3531b4;
        case 0x3531b8u: goto label_3531b8;
        case 0x3531bcu: goto label_3531bc;
        case 0x3531c0u: goto label_3531c0;
        case 0x3531c4u: goto label_3531c4;
        case 0x3531c8u: goto label_3531c8;
        case 0x3531ccu: goto label_3531cc;
        case 0x3531d0u: goto label_3531d0;
        case 0x3531d4u: goto label_3531d4;
        case 0x3531d8u: goto label_3531d8;
        case 0x3531dcu: goto label_3531dc;
        case 0x3531e0u: goto label_3531e0;
        case 0x3531e4u: goto label_3531e4;
        case 0x3531e8u: goto label_3531e8;
        case 0x3531ecu: goto label_3531ec;
        case 0x3531f0u: goto label_3531f0;
        case 0x3531f4u: goto label_3531f4;
        default: break;
    }

    ctx->pc = 0x353144u;

label_353144:
    // 0x353144: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_353148:
    // 0x353148: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x353148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_35314c:
    // 0x35314c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_353150:
    // 0x353150: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353150u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_353154:
    // 0x353154: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353154u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_353158:
    // 0x353158: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_35315c:
    // 0x35315c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x35315cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_353160:
    // 0x353160: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353164:
    // 0x353164: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x353164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353168:
    // 0x353168: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x353168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_35316c:
    // 0x35316c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x35316cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_353170:
    // 0x353170: 0xc0d5127  jal         func_35449C
label_353174:
    if (ctx->pc == 0x353174u) {
        ctx->pc = 0x353178u;
        goto label_353178;
    }
    ctx->pc = 0x353170u;
    SET_GPR_U32(ctx, 31, 0x353178u);
    ctx->pc = 0x35449Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35449Cu, 0x353170u, 0x353178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353178u;
label_353178:
    // 0x353178: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353178u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_35317c:
    // 0x35317c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353180:
    // 0x353180: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x353180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_353184:
    // 0x353184: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_353188:
    if (ctx->pc == 0x353188u) {
        ctx->pc = 0x35318Cu;
        goto label_35318c;
    }
    ctx->pc = 0x353184u;
    {
        const bool branch_taken_0x353184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353184) {
            ctx->pc = 0x3531DCu;
            goto label_3531dc;
        }
    }
    ctx->pc = 0x35318Cu;
label_35318c:
    // 0x35318c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353190:
    // 0x353190: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x353190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353194:
    // 0x353194: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x353194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353198:
    // 0x353198: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x353198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_35319c:
    // 0x35319c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3531a0:
    // 0x3531a0: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3531a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3531a4:
    // 0x3531a4: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x3531a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_3531a8:
    // 0x3531a8: 0x40f809  jalr        $v0
label_3531ac:
    if (ctx->pc == 0x3531ACu) {
        ctx->pc = 0x3531B0u;
        goto label_3531b0;
    }
    ctx->pc = 0x3531A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3531B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3531A8u, 0x3531B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3531B0u;
label_3531b0:
    // 0x3531b0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3531b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3531b4:
    // 0x3531b4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3531b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3531b8:
    // 0x3531b8: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_3531bc:
    if (ctx->pc == 0x3531BCu) {
        ctx->pc = 0x3531C0u;
        goto label_3531c0;
    }
    ctx->pc = 0x3531B8u;
    {
        const bool branch_taken_0x3531b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3531b8) {
            ctx->pc = 0x3531DCu;
            goto label_3531dc;
        }
    }
    ctx->pc = 0x3531C0u;
label_3531c0:
    // 0x3531c0: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x3531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3531c4:
    // 0x3531c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3531c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3531c8:
    // 0x3531c8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3531cc:
    if (ctx->pc == 0x3531CCu) {
        ctx->pc = 0x3531D0u;
        goto label_3531d0;
    }
    ctx->pc = 0x3531C8u;
    {
        const bool branch_taken_0x3531c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3531c8) {
            ctx->pc = 0x3531DCu;
            goto label_3531dc;
        }
    }
    ctx->pc = 0x3531D0u;
label_3531d0:
    // 0x3531d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3531d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3531d4:
    // 0x3531d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3531d8:
    if (ctx->pc == 0x3531D8u) {
        ctx->pc = 0x3531DCu;
        goto label_3531dc;
    }
    ctx->pc = 0x3531D4u;
    {
        const bool branch_taken_0x3531d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531d4) {
            ctx->pc = 0x3531E0u;
            goto label_3531e0;
        }
    }
    ctx->pc = 0x3531DCu;
label_3531dc:
    // 0x3531dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3531dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3531e0:
    // 0x3531e0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3531e0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3531e4:
    // 0x3531e4: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3531e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3531e8:
    // 0x3531e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3531e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3531ec:
    // 0x3531ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3531ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3531f0:
    // 0x3531f0: 0x3e00008  jr          $ra
label_3531f4:
    if (ctx->pc == 0x3531F4u) {
        ctx->pc = 0x3531F8u;
        goto label_fallthrough_0x3531f0;
    }
    ctx->pc = 0x3531F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3531F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3531f0:
    ctx->pc = 0x3531F8u;
}
