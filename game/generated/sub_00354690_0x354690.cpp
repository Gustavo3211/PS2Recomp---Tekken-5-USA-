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

// Function: sub_00354690
// Address: 0x354690 - 0x354728
void sub_00354690_0x354690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354690_0x354690");
#endif

    switch (ctx->pc) {
        case 0x354690u: goto label_354690;
        case 0x354694u: goto label_354694;
        case 0x354698u: goto label_354698;
        case 0x35469cu: goto label_35469c;
        case 0x3546a0u: goto label_3546a0;
        case 0x3546a4u: goto label_3546a4;
        case 0x3546a8u: goto label_3546a8;
        case 0x3546acu: goto label_3546ac;
        case 0x3546b0u: goto label_3546b0;
        case 0x3546b4u: goto label_3546b4;
        case 0x3546b8u: goto label_3546b8;
        case 0x3546bcu: goto label_3546bc;
        case 0x3546c0u: goto label_3546c0;
        case 0x3546c4u: goto label_3546c4;
        case 0x3546c8u: goto label_3546c8;
        case 0x3546ccu: goto label_3546cc;
        case 0x3546d0u: goto label_3546d0;
        case 0x3546d4u: goto label_3546d4;
        case 0x3546d8u: goto label_3546d8;
        case 0x3546dcu: goto label_3546dc;
        case 0x3546e0u: goto label_3546e0;
        case 0x3546e4u: goto label_3546e4;
        case 0x3546e8u: goto label_3546e8;
        case 0x3546ecu: goto label_3546ec;
        case 0x3546f0u: goto label_3546f0;
        case 0x3546f4u: goto label_3546f4;
        case 0x3546f8u: goto label_3546f8;
        case 0x3546fcu: goto label_3546fc;
        case 0x354700u: goto label_354700;
        case 0x354704u: goto label_354704;
        case 0x354708u: goto label_354708;
        case 0x35470cu: goto label_35470c;
        case 0x354710u: goto label_354710;
        case 0x354714u: goto label_354714;
        case 0x354718u: goto label_354718;
        case 0x35471cu: goto label_35471c;
        case 0x354720u: goto label_354720;
        case 0x354724u: goto label_354724;
        default: break;
    }

    ctx->pc = 0x354690u;

label_354690:
    // 0x354690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_354694:
    // 0x354694: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_354698:
    // 0x354698: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x354698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_35469c:
    // 0x35469c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35469cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3546a0:
    // 0x3546a0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3546a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3546a4:
    // 0x3546a4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3546a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3546a8:
    // 0x3546a8: 0xc0d5288  jal         func_354A20
label_3546ac:
    if (ctx->pc == 0x3546ACu) {
        ctx->pc = 0x3546B0u;
        goto label_3546b0;
    }
    ctx->pc = 0x3546A8u;
    SET_GPR_U32(ctx, 31, 0x3546B0u);
    ctx->pc = 0x354A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354A20u, 0x3546A8u, 0x3546B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546B0u;
label_3546b0:
    // 0x3546b0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3546b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3546b4:
    // 0x3546b4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3546b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3546b8:
    // 0x3546b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3546bc:
    if (ctx->pc == 0x3546BCu) {
        ctx->pc = 0x3546C0u;
        goto label_3546c0;
    }
    ctx->pc = 0x3546B8u;
    {
        const bool branch_taken_0x3546b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3546b8) {
            ctx->pc = 0x3546D0u;
            goto label_3546d0;
        }
    }
    ctx->pc = 0x3546C0u;
label_3546c0:
    // 0x3546c0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3546c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_3546c4:
    // 0x3546c4: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x3546c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
label_3546c8:
    // 0x3546c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3546cc:
    if (ctx->pc == 0x3546CCu) {
        ctx->pc = 0x3546D0u;
        goto label_3546d0;
    }
    ctx->pc = 0x3546C8u;
    {
        const bool branch_taken_0x3546c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546c8) {
            ctx->pc = 0x354710u;
            goto label_354710;
        }
    }
    ctx->pc = 0x3546D0u;
label_3546d0:
    // 0x3546d0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3546d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3546d4:
    // 0x3546d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3546d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3546d8:
    // 0x3546d8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3546d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3546dc:
    // 0x3546dc: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x3546dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3546e0:
    // 0x3546e0: 0x40f809  jalr        $v0
label_3546e4:
    if (ctx->pc == 0x3546E4u) {
        ctx->pc = 0x3546E8u;
        goto label_3546e8;
    }
    ctx->pc = 0x3546E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3546E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3546E0u, 0x3546E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3546E8u;
label_3546e8:
    // 0x3546e8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3546e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3546ec:
    // 0x3546ec: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3546ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3546f0:
    // 0x3546f0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_3546f4:
    if (ctx->pc == 0x3546F4u) {
        ctx->pc = 0x3546F8u;
        goto label_3546f8;
    }
    ctx->pc = 0x3546F0u;
    {
        const bool branch_taken_0x3546f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3546f0) {
            ctx->pc = 0x354704u;
            goto label_354704;
        }
    }
    ctx->pc = 0x3546F8u;
label_3546f8:
    // 0x3546f8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3546f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3546fc:
    // 0x3546fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_354700:
    if (ctx->pc == 0x354700u) {
        ctx->pc = 0x354704u;
        goto label_354704;
    }
    ctx->pc = 0x3546FCu;
    {
        const bool branch_taken_0x3546fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546fc) {
            ctx->pc = 0x354710u;
            goto label_354710;
        }
    }
    ctx->pc = 0x354704u;
label_354704:
    // 0x354704: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x354704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_354708:
    // 0x354708: 0xc0d52b3  jal         func_354ACC
label_35470c:
    if (ctx->pc == 0x35470Cu) {
        ctx->pc = 0x354710u;
        goto label_354710;
    }
    ctx->pc = 0x354708u;
    SET_GPR_U32(ctx, 31, 0x354710u);
    ctx->pc = 0x354ACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354ACCu, 0x354708u, 0x354710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354710u;
label_354710:
    // 0x354710: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354710u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_354714:
    // 0x354714: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354714u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_354718:
    // 0x354718: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x354718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35471c:
    // 0x35471c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35471cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_354720:
    // 0x354720: 0x3e00008  jr          $ra
label_354724:
    if (ctx->pc == 0x354724u) {
        ctx->pc = 0x354728u;
        goto label_fallthrough_0x354720;
    }
    ctx->pc = 0x354720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x354720:
    ctx->pc = 0x354728u;
}
