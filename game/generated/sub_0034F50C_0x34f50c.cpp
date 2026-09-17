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

// Function: sub_0034F50C
// Address: 0x34f50c - 0x34f5e0
void sub_0034F50C_0x34f50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F50C_0x34f50c");
#endif

    switch (ctx->pc) {
        case 0x34f50cu: goto label_34f50c;
        case 0x34f510u: goto label_34f510;
        case 0x34f514u: goto label_34f514;
        case 0x34f518u: goto label_34f518;
        case 0x34f51cu: goto label_34f51c;
        case 0x34f520u: goto label_34f520;
        case 0x34f524u: goto label_34f524;
        case 0x34f528u: goto label_34f528;
        case 0x34f52cu: goto label_34f52c;
        case 0x34f530u: goto label_34f530;
        case 0x34f534u: goto label_34f534;
        case 0x34f538u: goto label_34f538;
        case 0x34f53cu: goto label_34f53c;
        case 0x34f540u: goto label_34f540;
        case 0x34f544u: goto label_34f544;
        case 0x34f548u: goto label_34f548;
        case 0x34f54cu: goto label_34f54c;
        case 0x34f550u: goto label_34f550;
        case 0x34f554u: goto label_34f554;
        case 0x34f558u: goto label_34f558;
        case 0x34f55cu: goto label_34f55c;
        case 0x34f560u: goto label_34f560;
        case 0x34f564u: goto label_34f564;
        case 0x34f568u: goto label_34f568;
        case 0x34f56cu: goto label_34f56c;
        case 0x34f570u: goto label_34f570;
        case 0x34f574u: goto label_34f574;
        case 0x34f578u: goto label_34f578;
        case 0x34f57cu: goto label_34f57c;
        case 0x34f580u: goto label_34f580;
        case 0x34f584u: goto label_34f584;
        case 0x34f588u: goto label_34f588;
        case 0x34f58cu: goto label_34f58c;
        case 0x34f590u: goto label_34f590;
        case 0x34f594u: goto label_34f594;
        case 0x34f598u: goto label_34f598;
        case 0x34f59cu: goto label_34f59c;
        case 0x34f5a0u: goto label_34f5a0;
        case 0x34f5a4u: goto label_34f5a4;
        case 0x34f5a8u: goto label_34f5a8;
        case 0x34f5acu: goto label_34f5ac;
        case 0x34f5b0u: goto label_34f5b0;
        case 0x34f5b4u: goto label_34f5b4;
        case 0x34f5b8u: goto label_34f5b8;
        case 0x34f5bcu: goto label_34f5bc;
        case 0x34f5c0u: goto label_34f5c0;
        case 0x34f5c4u: goto label_34f5c4;
        case 0x34f5c8u: goto label_34f5c8;
        case 0x34f5ccu: goto label_34f5cc;
        case 0x34f5d0u: goto label_34f5d0;
        case 0x34f5d4u: goto label_34f5d4;
        case 0x34f5d8u: goto label_34f5d8;
        case 0x34f5dcu: goto label_34f5dc;
        default: break;
    }

    ctx->pc = 0x34f50cu;

label_34f50c:
    // 0x34f50c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f510:
    // 0x34f510: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f514:
    // 0x34f514: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f518:
    // 0x34f518: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f518u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f51c:
    // 0x34f51c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f520:
    // 0x34f520: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f520u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f524:
    // 0x34f524: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f524u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f528:
    // 0x34f528: 0xc0d3f53  jal         func_34FD4C
label_34f52c:
    if (ctx->pc == 0x34F52Cu) {
        ctx->pc = 0x34F530u;
        goto label_34f530;
    }
    ctx->pc = 0x34F528u;
    SET_GPR_U32(ctx, 31, 0x34F530u);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34F528u, 0x34F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F530u;
label_34f530:
    // 0x34f530: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f530u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34f534:
    // 0x34f534: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f538:
    // 0x34f538: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34f53c:
    if (ctx->pc == 0x34F53Cu) {
        ctx->pc = 0x34F540u;
        goto label_34f540;
    }
    ctx->pc = 0x34F538u;
    {
        const bool branch_taken_0x34f538 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f538) {
            ctx->pc = 0x34F54Cu;
            goto label_34f54c;
        }
    }
    ctx->pc = 0x34F540u;
label_34f540:
    // 0x34f540: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f544:
    // 0x34f544: 0x10000020  b           . + 4 + (0x20 << 2)
label_34f548:
    if (ctx->pc == 0x34F548u) {
        ctx->pc = 0x34F54Cu;
        goto label_34f54c;
    }
    ctx->pc = 0x34F544u;
    {
        const bool branch_taken_0x34f544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f544) {
            ctx->pc = 0x34F5C8u;
            goto label_34f5c8;
        }
    }
    ctx->pc = 0x34F54Cu;
label_34f54c:
    // 0x34f54c: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f550:
    // 0x34f550: 0xc0d3fc6  jal         func_34FF18
label_34f554:
    if (ctx->pc == 0x34F554u) {
        ctx->pc = 0x34F558u;
        goto label_34f558;
    }
    ctx->pc = 0x34F550u;
    SET_GPR_U32(ctx, 31, 0x34F558u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F550u, 0x34F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F558u;
label_34f558:
    // 0x34f558: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34f558u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34f55c:
    // 0x34f55c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f560:
    // 0x34f560: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f564:
    if (ctx->pc == 0x34F564u) {
        ctx->pc = 0x34F568u;
        goto label_34f568;
    }
    ctx->pc = 0x34F560u;
    {
        const bool branch_taken_0x34f560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f560) {
            ctx->pc = 0x34F578u;
            goto label_34f578;
        }
    }
    ctx->pc = 0x34F568u;
label_34f568:
    // 0x34f568: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f56c:
    // 0x34f56c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f570:
    // 0x34f570: 0x10000015  b           . + 4 + (0x15 << 2)
label_34f574:
    if (ctx->pc == 0x34F574u) {
        ctx->pc = 0x34F578u;
        goto label_34f578;
    }
    ctx->pc = 0x34F570u;
    {
        const bool branch_taken_0x34f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f570) {
            ctx->pc = 0x34F5C8u;
            goto label_34f5c8;
        }
    }
    ctx->pc = 0x34F578u;
label_34f578:
    // 0x34f578: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f57c:
    // 0x34f57c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f580:
    // 0x34f580: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34f580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34f584:
    // 0x34f584: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34f584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f588:
    // 0x34f588: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f58c:
    // 0x34f58c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f590:
    // 0x34f590: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34f590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34f594:
    // 0x34f594: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f598:
    // 0x34f598: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f59c:
    // 0x34f59c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34f5a0:
    // 0x34f5a0: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f5a4:
    // 0x34f5a4: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f5a8:
    // 0x34f5a8: 0x40f809  jalr        $v0
label_34f5ac:
    if (ctx->pc == 0x34F5ACu) {
        ctx->pc = 0x34F5B0u;
        goto label_34f5b0;
    }
    ctx->pc = 0x34F5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F5B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F5A8u, 0x34F5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F5B0u;
label_34f5b0:
    // 0x34f5b0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34f5b4:
    // 0x34f5b4: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f5b8:
    // 0x34f5b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f5bc:
    // 0x34f5bc: 0xc0d3f96  jal         func_34FE58
label_34f5c0:
    if (ctx->pc == 0x34F5C0u) {
        ctx->pc = 0x34F5C4u;
        goto label_34f5c4;
    }
    ctx->pc = 0x34F5BCu;
    SET_GPR_U32(ctx, 31, 0x34F5C4u);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34F5BCu, 0x34F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F5C4u;
label_34f5c4:
    // 0x34f5c4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f5c8:
    // 0x34f5c8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f5c8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f5cc:
    // 0x34f5cc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34f5ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f5d0:
    // 0x34f5d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34f5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f5d4:
    // 0x34f5d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f5d8:
    // 0x34f5d8: 0x3e00008  jr          $ra
label_34f5dc:
    if (ctx->pc == 0x34F5DCu) {
        ctx->pc = 0x34F5E0u;
        goto label_fallthrough_0x34f5d8;
    }
    ctx->pc = 0x34F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f5d8:
    ctx->pc = 0x34F5E0u;
}
