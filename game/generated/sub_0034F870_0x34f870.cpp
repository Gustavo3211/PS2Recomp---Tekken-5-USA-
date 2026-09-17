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

// Function: sub_0034F870
// Address: 0x34f870 - 0x34f944
void sub_0034F870_0x34f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F870_0x34f870");
#endif

    switch (ctx->pc) {
        case 0x34f870u: goto label_34f870;
        case 0x34f874u: goto label_34f874;
        case 0x34f878u: goto label_34f878;
        case 0x34f87cu: goto label_34f87c;
        case 0x34f880u: goto label_34f880;
        case 0x34f884u: goto label_34f884;
        case 0x34f888u: goto label_34f888;
        case 0x34f88cu: goto label_34f88c;
        case 0x34f890u: goto label_34f890;
        case 0x34f894u: goto label_34f894;
        case 0x34f898u: goto label_34f898;
        case 0x34f89cu: goto label_34f89c;
        case 0x34f8a0u: goto label_34f8a0;
        case 0x34f8a4u: goto label_34f8a4;
        case 0x34f8a8u: goto label_34f8a8;
        case 0x34f8acu: goto label_34f8ac;
        case 0x34f8b0u: goto label_34f8b0;
        case 0x34f8b4u: goto label_34f8b4;
        case 0x34f8b8u: goto label_34f8b8;
        case 0x34f8bcu: goto label_34f8bc;
        case 0x34f8c0u: goto label_34f8c0;
        case 0x34f8c4u: goto label_34f8c4;
        case 0x34f8c8u: goto label_34f8c8;
        case 0x34f8ccu: goto label_34f8cc;
        case 0x34f8d0u: goto label_34f8d0;
        case 0x34f8d4u: goto label_34f8d4;
        case 0x34f8d8u: goto label_34f8d8;
        case 0x34f8dcu: goto label_34f8dc;
        case 0x34f8e0u: goto label_34f8e0;
        case 0x34f8e4u: goto label_34f8e4;
        case 0x34f8e8u: goto label_34f8e8;
        case 0x34f8ecu: goto label_34f8ec;
        case 0x34f8f0u: goto label_34f8f0;
        case 0x34f8f4u: goto label_34f8f4;
        case 0x34f8f8u: goto label_34f8f8;
        case 0x34f8fcu: goto label_34f8fc;
        case 0x34f900u: goto label_34f900;
        case 0x34f904u: goto label_34f904;
        case 0x34f908u: goto label_34f908;
        case 0x34f90cu: goto label_34f90c;
        case 0x34f910u: goto label_34f910;
        case 0x34f914u: goto label_34f914;
        case 0x34f918u: goto label_34f918;
        case 0x34f91cu: goto label_34f91c;
        case 0x34f920u: goto label_34f920;
        case 0x34f924u: goto label_34f924;
        case 0x34f928u: goto label_34f928;
        case 0x34f92cu: goto label_34f92c;
        case 0x34f930u: goto label_34f930;
        case 0x34f934u: goto label_34f934;
        case 0x34f938u: goto label_34f938;
        case 0x34f93cu: goto label_34f93c;
        case 0x34f940u: goto label_34f940;
        default: break;
    }

    ctx->pc = 0x34f870u;

label_34f870:
    // 0x34f870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f874:
    // 0x34f874: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f878:
    // 0x34f878: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f87c:
    // 0x34f87c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f87cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f880:
    // 0x34f880: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f880u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f884:
    // 0x34f884: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f884u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f888:
    // 0x34f888: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f888u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f88c:
    // 0x34f88c: 0xc0d3f53  jal         func_34FD4C
label_34f890:
    if (ctx->pc == 0x34F890u) {
        ctx->pc = 0x34F894u;
        goto label_34f894;
    }
    ctx->pc = 0x34F88Cu;
    SET_GPR_U32(ctx, 31, 0x34F894u);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34F88Cu, 0x34F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F894u;
label_34f894:
    // 0x34f894: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34f898:
    // 0x34f898: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f89c:
    // 0x34f89c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34f8a0:
    if (ctx->pc == 0x34F8A0u) {
        ctx->pc = 0x34F8A4u;
        goto label_34f8a4;
    }
    ctx->pc = 0x34F89Cu;
    {
        const bool branch_taken_0x34f89c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f89c) {
            ctx->pc = 0x34F8B0u;
            goto label_34f8b0;
        }
    }
    ctx->pc = 0x34F8A4u;
label_34f8a4:
    // 0x34f8a4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f8a8:
    // 0x34f8a8: 0x10000020  b           . + 4 + (0x20 << 2)
label_34f8ac:
    if (ctx->pc == 0x34F8ACu) {
        ctx->pc = 0x34F8B0u;
        goto label_34f8b0;
    }
    ctx->pc = 0x34F8A8u;
    {
        const bool branch_taken_0x34f8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f8a8) {
            ctx->pc = 0x34F92Cu;
            goto label_34f92c;
        }
    }
    ctx->pc = 0x34F8B0u;
label_34f8b0:
    // 0x34f8b0: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f8b4:
    // 0x34f8b4: 0xc0d3fc6  jal         func_34FF18
label_34f8b8:
    if (ctx->pc == 0x34F8B8u) {
        ctx->pc = 0x34F8BCu;
        goto label_34f8bc;
    }
    ctx->pc = 0x34F8B4u;
    SET_GPR_U32(ctx, 31, 0x34F8BCu);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F8B4u, 0x34F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8BCu;
label_34f8bc:
    // 0x34f8bc: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34f8c0:
    // 0x34f8c0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f8c4:
    // 0x34f8c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f8c8:
    if (ctx->pc == 0x34F8C8u) {
        ctx->pc = 0x34F8CCu;
        goto label_34f8cc;
    }
    ctx->pc = 0x34F8C4u;
    {
        const bool branch_taken_0x34f8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f8c4) {
            ctx->pc = 0x34F8DCu;
            goto label_34f8dc;
        }
    }
    ctx->pc = 0x34F8CCu;
label_34f8cc:
    // 0x34f8cc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f8d0:
    // 0x34f8d0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f8d4:
    // 0x34f8d4: 0x10000015  b           . + 4 + (0x15 << 2)
label_34f8d8:
    if (ctx->pc == 0x34F8D8u) {
        ctx->pc = 0x34F8DCu;
        goto label_34f8dc;
    }
    ctx->pc = 0x34F8D4u;
    {
        const bool branch_taken_0x34f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f8d4) {
            ctx->pc = 0x34F92Cu;
            goto label_34f92c;
        }
    }
    ctx->pc = 0x34F8DCu;
label_34f8dc:
    // 0x34f8dc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f8e0:
    // 0x34f8e0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f8e4:
    // 0x34f8e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34f8e8:
    // 0x34f8e8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f8ec:
    // 0x34f8ec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f8f0:
    // 0x34f8f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f8f4:
    // 0x34f8f4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34f8f8:
    // 0x34f8f8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f8fc:
    // 0x34f8fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f900:
    // 0x34f900: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x34f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_34f904:
    // 0x34f904: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34f904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f908:
    // 0x34f908: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34f908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f90c:
    // 0x34f90c: 0x40f809  jalr        $v0
label_34f910:
    if (ctx->pc == 0x34F910u) {
        ctx->pc = 0x34F914u;
        goto label_34f914;
    }
    ctx->pc = 0x34F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F914u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F90Cu, 0x34F914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F914u;
label_34f914:
    // 0x34f914: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34f914u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34f918:
    // 0x34f918: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f91c:
    // 0x34f91c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f920:
    // 0x34f920: 0xc0d3f96  jal         func_34FE58
label_34f924:
    if (ctx->pc == 0x34F924u) {
        ctx->pc = 0x34F928u;
        goto label_34f928;
    }
    ctx->pc = 0x34F920u;
    SET_GPR_U32(ctx, 31, 0x34F928u);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34F920u, 0x34F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F928u;
label_34f928:
    // 0x34f928: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f92c:
    // 0x34f92c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f92cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f930:
    // 0x34f930: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34f930u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f934:
    // 0x34f934: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34f934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f938:
    // 0x34f938: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f93c:
    // 0x34f93c: 0x3e00008  jr          $ra
label_34f940:
    if (ctx->pc == 0x34F940u) {
        ctx->pc = 0x34F944u;
        goto label_fallthrough_0x34f93c;
    }
    ctx->pc = 0x34F93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f93c:
    ctx->pc = 0x34F944u;
}
