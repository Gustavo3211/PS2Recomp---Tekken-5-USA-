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

// Function: sub_00352568
// Address: 0x352568 - 0x352614
void sub_00352568_0x352568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352568_0x352568");
#endif

    switch (ctx->pc) {
        case 0x352568u: goto label_352568;
        case 0x35256cu: goto label_35256c;
        case 0x352570u: goto label_352570;
        case 0x352574u: goto label_352574;
        case 0x352578u: goto label_352578;
        case 0x35257cu: goto label_35257c;
        case 0x352580u: goto label_352580;
        case 0x352584u: goto label_352584;
        case 0x352588u: goto label_352588;
        case 0x35258cu: goto label_35258c;
        case 0x352590u: goto label_352590;
        case 0x352594u: goto label_352594;
        case 0x352598u: goto label_352598;
        case 0x35259cu: goto label_35259c;
        case 0x3525a0u: goto label_3525a0;
        case 0x3525a4u: goto label_3525a4;
        case 0x3525a8u: goto label_3525a8;
        case 0x3525acu: goto label_3525ac;
        case 0x3525b0u: goto label_3525b0;
        case 0x3525b4u: goto label_3525b4;
        case 0x3525b8u: goto label_3525b8;
        case 0x3525bcu: goto label_3525bc;
        case 0x3525c0u: goto label_3525c0;
        case 0x3525c4u: goto label_3525c4;
        case 0x3525c8u: goto label_3525c8;
        case 0x3525ccu: goto label_3525cc;
        case 0x3525d0u: goto label_3525d0;
        case 0x3525d4u: goto label_3525d4;
        case 0x3525d8u: goto label_3525d8;
        case 0x3525dcu: goto label_3525dc;
        case 0x3525e0u: goto label_3525e0;
        case 0x3525e4u: goto label_3525e4;
        case 0x3525e8u: goto label_3525e8;
        case 0x3525ecu: goto label_3525ec;
        case 0x3525f0u: goto label_3525f0;
        case 0x3525f4u: goto label_3525f4;
        case 0x3525f8u: goto label_3525f8;
        case 0x3525fcu: goto label_3525fc;
        case 0x352600u: goto label_352600;
        case 0x352604u: goto label_352604;
        case 0x352608u: goto label_352608;
        case 0x35260cu: goto label_35260c;
        case 0x352610u: goto label_352610;
        default: break;
    }

    ctx->pc = 0x352568u;

label_352568:
    // 0x352568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35256c:
    // 0x35256c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352570:
    // 0x352570: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352574:
    // 0x352574: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352578:
    // 0x352578: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352578u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_35257c:
    // 0x35257c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352580:
    // 0x352580: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352580u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352584:
    // 0x352584: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352588:
    // 0x352588: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_35258c:
    // 0x35258c: 0xc0d3073  jal         func_34C1CC
label_352590:
    if (ctx->pc == 0x352590u) {
        ctx->pc = 0x352594u;
        goto label_352594;
    }
    ctx->pc = 0x35258Cu;
    SET_GPR_U32(ctx, 31, 0x352594u);
    ctx->pc = 0x34C1CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C1CCu, 0x35258Cu, 0x352594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352594u;
label_352594:
    // 0x352594: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352594u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352598:
    // 0x352598: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35259c:
    // 0x35259c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x35259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3525a0:
    // 0x3525a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3525a4:
    if (ctx->pc == 0x3525A4u) {
        ctx->pc = 0x3525A8u;
        goto label_3525a8;
    }
    ctx->pc = 0x3525A0u;
    {
        const bool branch_taken_0x3525a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525a0) {
            ctx->pc = 0x3525F8u;
            goto label_3525f8;
        }
    }
    ctx->pc = 0x3525A8u;
label_3525a8:
    // 0x3525a8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3525a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3525ac:
    // 0x3525ac: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3525acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3525b0:
    // 0x3525b0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3525b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3525b4:
    // 0x3525b4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3525b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3525b8:
    // 0x3525b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3525b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3525bc:
    // 0x3525bc: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3525bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3525c0:
    // 0x3525c0: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x3525c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3525c4:
    // 0x3525c4: 0x40f809  jalr        $v0
label_3525c8:
    if (ctx->pc == 0x3525C8u) {
        ctx->pc = 0x3525CCu;
        goto label_3525cc;
    }
    ctx->pc = 0x3525C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3525CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3525C4u, 0x3525CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3525CCu;
label_3525cc:
    // 0x3525cc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3525ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3525d0:
    // 0x3525d0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3525d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3525d4:
    // 0x3525d4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_3525d8:
    if (ctx->pc == 0x3525D8u) {
        ctx->pc = 0x3525DCu;
        goto label_3525dc;
    }
    ctx->pc = 0x3525D4u;
    {
        const bool branch_taken_0x3525d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3525d4) {
            ctx->pc = 0x3525F8u;
            goto label_3525f8;
        }
    }
    ctx->pc = 0x3525DCu;
label_3525dc:
    // 0x3525dc: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x3525dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3525e0:
    // 0x3525e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3525e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3525e4:
    // 0x3525e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3525e8:
    if (ctx->pc == 0x3525E8u) {
        ctx->pc = 0x3525ECu;
        goto label_3525ec;
    }
    ctx->pc = 0x3525E4u;
    {
        const bool branch_taken_0x3525e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3525e4) {
            ctx->pc = 0x3525F8u;
            goto label_3525f8;
        }
    }
    ctx->pc = 0x3525ECu;
label_3525ec:
    // 0x3525ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3525ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3525f0:
    // 0x3525f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3525f4:
    if (ctx->pc == 0x3525F4u) {
        ctx->pc = 0x3525F8u;
        goto label_3525f8;
    }
    ctx->pc = 0x3525F0u;
    {
        const bool branch_taken_0x3525f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525f0) {
            ctx->pc = 0x3525FCu;
            goto label_3525fc;
        }
    }
    ctx->pc = 0x3525F8u;
label_3525f8:
    // 0x3525f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3525f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3525fc:
    // 0x3525fc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3525fcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352600:
    // 0x352600: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352600u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352604:
    // 0x352604: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352608:
    // 0x352608: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35260c:
    // 0x35260c: 0x3e00008  jr          $ra
label_352610:
    if (ctx->pc == 0x352610u) {
        ctx->pc = 0x352614u;
        goto label_fallthrough_0x35260c;
    }
    ctx->pc = 0x35260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35260Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35260c:
    ctx->pc = 0x352614u;
}
