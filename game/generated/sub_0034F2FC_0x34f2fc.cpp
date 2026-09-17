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

// Function: sub_0034F2FC
// Address: 0x34f2fc - 0x34f384
void sub_0034F2FC_0x34f2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F2FC_0x34f2fc");
#endif

    switch (ctx->pc) {
        case 0x34f2fcu: goto label_34f2fc;
        case 0x34f300u: goto label_34f300;
        case 0x34f304u: goto label_34f304;
        case 0x34f308u: goto label_34f308;
        case 0x34f30cu: goto label_34f30c;
        case 0x34f310u: goto label_34f310;
        case 0x34f314u: goto label_34f314;
        case 0x34f318u: goto label_34f318;
        case 0x34f31cu: goto label_34f31c;
        case 0x34f320u: goto label_34f320;
        case 0x34f324u: goto label_34f324;
        case 0x34f328u: goto label_34f328;
        case 0x34f32cu: goto label_34f32c;
        case 0x34f330u: goto label_34f330;
        case 0x34f334u: goto label_34f334;
        case 0x34f338u: goto label_34f338;
        case 0x34f33cu: goto label_34f33c;
        case 0x34f340u: goto label_34f340;
        case 0x34f344u: goto label_34f344;
        case 0x34f348u: goto label_34f348;
        case 0x34f34cu: goto label_34f34c;
        case 0x34f350u: goto label_34f350;
        case 0x34f354u: goto label_34f354;
        case 0x34f358u: goto label_34f358;
        case 0x34f35cu: goto label_34f35c;
        case 0x34f360u: goto label_34f360;
        case 0x34f364u: goto label_34f364;
        case 0x34f368u: goto label_34f368;
        case 0x34f36cu: goto label_34f36c;
        case 0x34f370u: goto label_34f370;
        case 0x34f374u: goto label_34f374;
        case 0x34f378u: goto label_34f378;
        case 0x34f37cu: goto label_34f37c;
        case 0x34f380u: goto label_34f380;
        default: break;
    }

    ctx->pc = 0x34f2fcu;

label_34f2fc:
    // 0x34f2fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f2fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f300:
    // 0x34f300: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f304:
    // 0x34f304: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f308:
    // 0x34f308: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f308u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f30c:
    // 0x34f30c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f310:
    // 0x34f310: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f310u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f314:
    // 0x34f314: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f314u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f318:
    // 0x34f318: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f31c:
    // 0x34f31c: 0xc0d3fc6  jal         func_34FF18
label_34f320:
    if (ctx->pc == 0x34F320u) {
        ctx->pc = 0x34F324u;
        goto label_34f324;
    }
    ctx->pc = 0x34F31Cu;
    SET_GPR_U32(ctx, 31, 0x34F324u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F31Cu, 0x34F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F324u;
label_34f324:
    // 0x34f324: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f324u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34f328:
    // 0x34f328: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f32c:
    // 0x34f32c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f330:
    if (ctx->pc == 0x34F330u) {
        ctx->pc = 0x34F334u;
        goto label_34f334;
    }
    ctx->pc = 0x34F32Cu;
    {
        const bool branch_taken_0x34f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f32c) {
            ctx->pc = 0x34F344u;
            goto label_34f344;
        }
    }
    ctx->pc = 0x34F334u;
label_34f334:
    // 0x34f334: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f338:
    // 0x34f338: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f33c:
    // 0x34f33c: 0x1000000b  b           . + 4 + (0xB << 2)
label_34f340:
    if (ctx->pc == 0x34F340u) {
        ctx->pc = 0x34F344u;
        goto label_34f344;
    }
    ctx->pc = 0x34F33Cu;
    {
        const bool branch_taken_0x34f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f33c) {
            ctx->pc = 0x34F36Cu;
            goto label_34f36c;
        }
    }
    ctx->pc = 0x34F344u;
label_34f344:
    // 0x34f344: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f348:
    // 0x34f348: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34f34c:
    // 0x34f34c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x34f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_34f350:
    // 0x34f350: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34f350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f354:
    // 0x34f354: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34f354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f358:
    // 0x34f358: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34f358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f35c:
    // 0x34f35c: 0x40f809  jalr        $v0
label_34f360:
    if (ctx->pc == 0x34F360u) {
        ctx->pc = 0x34F364u;
        goto label_34f364;
    }
    ctx->pc = 0x34F35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F364u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F35Cu, 0x34F364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F364u;
label_34f364:
    // 0x34f364: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34f364u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34f368:
    // 0x34f368: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34f368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f36c:
    // 0x34f36c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f36cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f370:
    // 0x34f370: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34f370u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f374:
    // 0x34f374: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f378:
    // 0x34f378: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f37c:
    // 0x34f37c: 0x3e00008  jr          $ra
label_34f380:
    if (ctx->pc == 0x34F380u) {
        ctx->pc = 0x34F384u;
        goto label_fallthrough_0x34f37c;
    }
    ctx->pc = 0x34F37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f37c:
    ctx->pc = 0x34F384u;
}
