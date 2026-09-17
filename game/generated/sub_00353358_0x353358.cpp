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

// Function: sub_00353358
// Address: 0x353358 - 0x353414
void sub_00353358_0x353358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353358_0x353358");
#endif

    switch (ctx->pc) {
        case 0x353358u: goto label_353358;
        case 0x35335cu: goto label_35335c;
        case 0x353360u: goto label_353360;
        case 0x353364u: goto label_353364;
        case 0x353368u: goto label_353368;
        case 0x35336cu: goto label_35336c;
        case 0x353370u: goto label_353370;
        case 0x353374u: goto label_353374;
        case 0x353378u: goto label_353378;
        case 0x35337cu: goto label_35337c;
        case 0x353380u: goto label_353380;
        case 0x353384u: goto label_353384;
        case 0x353388u: goto label_353388;
        case 0x35338cu: goto label_35338c;
        case 0x353390u: goto label_353390;
        case 0x353394u: goto label_353394;
        case 0x353398u: goto label_353398;
        case 0x35339cu: goto label_35339c;
        case 0x3533a0u: goto label_3533a0;
        case 0x3533a4u: goto label_3533a4;
        case 0x3533a8u: goto label_3533a8;
        case 0x3533acu: goto label_3533ac;
        case 0x3533b0u: goto label_3533b0;
        case 0x3533b4u: goto label_3533b4;
        case 0x3533b8u: goto label_3533b8;
        case 0x3533bcu: goto label_3533bc;
        case 0x3533c0u: goto label_3533c0;
        case 0x3533c4u: goto label_3533c4;
        case 0x3533c8u: goto label_3533c8;
        case 0x3533ccu: goto label_3533cc;
        case 0x3533d0u: goto label_3533d0;
        case 0x3533d4u: goto label_3533d4;
        case 0x3533d8u: goto label_3533d8;
        case 0x3533dcu: goto label_3533dc;
        case 0x3533e0u: goto label_3533e0;
        case 0x3533e4u: goto label_3533e4;
        case 0x3533e8u: goto label_3533e8;
        case 0x3533ecu: goto label_3533ec;
        case 0x3533f0u: goto label_3533f0;
        case 0x3533f4u: goto label_3533f4;
        case 0x3533f8u: goto label_3533f8;
        case 0x3533fcu: goto label_3533fc;
        case 0x353400u: goto label_353400;
        case 0x353404u: goto label_353404;
        case 0x353408u: goto label_353408;
        case 0x35340cu: goto label_35340c;
        case 0x353410u: goto label_353410;
        default: break;
    }

    ctx->pc = 0x353358u;

label_353358:
    // 0x353358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35335c:
    // 0x35335c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35335cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_353360:
    // 0x353360: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_353364:
    // 0x353364: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353364u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_353368:
    // 0x353368: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353368u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_35336c:
    // 0x35336c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_353370:
    // 0x353370: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x353370u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_353374:
    // 0x353374: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353378:
    // 0x353378: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x353378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35337c:
    // 0x35337c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x35337cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353380:
    // 0x353380: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x353380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_353384:
    // 0x353384: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x353384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_353388:
    // 0x353388: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x353388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_35338c:
    // 0x35338c: 0xc0d51ca  jal         func_354728
label_353390:
    if (ctx->pc == 0x353390u) {
        ctx->pc = 0x353394u;
        goto label_353394;
    }
    ctx->pc = 0x35338Cu;
    SET_GPR_U32(ctx, 31, 0x353394u);
    ctx->pc = 0x354728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354728u, 0x35338Cu, 0x353394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353394u;
label_353394:
    // 0x353394: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353394u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_353398:
    // 0x353398: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35339c:
    // 0x35339c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x35339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3533a0:
    // 0x3533a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3533a4:
    if (ctx->pc == 0x3533A4u) {
        ctx->pc = 0x3533A8u;
        goto label_3533a8;
    }
    ctx->pc = 0x3533A0u;
    {
        const bool branch_taken_0x3533a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3533a0) {
            ctx->pc = 0x3533F8u;
            goto label_3533f8;
        }
    }
    ctx->pc = 0x3533A8u;
label_3533a8:
    // 0x3533a8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3533a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3533ac:
    // 0x3533ac: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3533acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3533b0:
    // 0x3533b0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3533b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3533b4:
    // 0x3533b4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3533b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3533b8:
    // 0x3533b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3533b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3533bc:
    // 0x3533bc: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3533bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3533c0:
    // 0x3533c0: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x3533c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_3533c4:
    // 0x3533c4: 0x40f809  jalr        $v0
label_3533c8:
    if (ctx->pc == 0x3533C8u) {
        ctx->pc = 0x3533CCu;
        goto label_3533cc;
    }
    ctx->pc = 0x3533C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3533CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3533C4u, 0x3533CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3533CCu;
label_3533cc:
    // 0x3533cc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3533ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3533d0:
    // 0x3533d0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3533d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3533d4:
    // 0x3533d4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_3533d8:
    if (ctx->pc == 0x3533D8u) {
        ctx->pc = 0x3533DCu;
        goto label_3533dc;
    }
    ctx->pc = 0x3533D4u;
    {
        const bool branch_taken_0x3533d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3533d4) {
            ctx->pc = 0x3533F8u;
            goto label_3533f8;
        }
    }
    ctx->pc = 0x3533DCu;
label_3533dc:
    // 0x3533dc: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x3533dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3533e0:
    // 0x3533e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3533e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3533e4:
    // 0x3533e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3533e8:
    if (ctx->pc == 0x3533E8u) {
        ctx->pc = 0x3533ECu;
        goto label_3533ec;
    }
    ctx->pc = 0x3533E4u;
    {
        const bool branch_taken_0x3533e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3533e4) {
            ctx->pc = 0x3533F8u;
            goto label_3533f8;
        }
    }
    ctx->pc = 0x3533ECu;
label_3533ec:
    // 0x3533ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3533ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3533f0:
    // 0x3533f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3533f4:
    if (ctx->pc == 0x3533F4u) {
        ctx->pc = 0x3533F8u;
        goto label_3533f8;
    }
    ctx->pc = 0x3533F0u;
    {
        const bool branch_taken_0x3533f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3533f0) {
            ctx->pc = 0x3533FCu;
            goto label_3533fc;
        }
    }
    ctx->pc = 0x3533F8u;
label_3533f8:
    // 0x3533f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3533f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3533fc:
    // 0x3533fc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3533fcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_353400:
    // 0x353400: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353400u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_353404:
    // 0x353404: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_353408:
    // 0x353408: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35340c:
    // 0x35340c: 0x3e00008  jr          $ra
label_353410:
    if (ctx->pc == 0x353410u) {
        ctx->pc = 0x353414u;
        goto label_fallthrough_0x35340c;
    }
    ctx->pc = 0x35340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35340Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35340c:
    ctx->pc = 0x353414u;
}
