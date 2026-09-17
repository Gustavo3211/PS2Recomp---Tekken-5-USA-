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

// Function: sub_0034E070
// Address: 0x34e070 - 0x34e1cc
void sub_0034E070_0x34e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E070_0x34e070");
#endif

    switch (ctx->pc) {
        case 0x34e0acu: goto label_34e0ac;
        case 0x34e10cu: goto label_34e10c;
        case 0x34e134u: goto label_34e134;
        case 0x34e170u: goto label_34e170;
        case 0x34e184u: goto label_34e184;
        default: break;
    }

    ctx->pc = 0x34e070u;

    // 0x34e070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e074: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34e078: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34e07c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e07cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e080: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e080u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e084: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e084u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e088: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e088u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e08c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e090: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34e094: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34e094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34e098: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e09c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e0a0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e0a4: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34E0A4u;
    SET_GPR_U32(ctx, 31, 0x34E0ACu);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34E0A4u, 0x34E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E0ACu;
label_34e0ac:
    // 0x34e0ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34e0b0: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e0b4: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e0b8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e0bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34e0c0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34e0c4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e0c8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e0cc: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34e0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34e0d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E0D0u;
    {
        const bool branch_taken_0x34e0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e0d0) {
            ctx->pc = 0x34E0E8u;
            goto label_34e0e8;
        }
    }
    ctx->pc = 0x34E0D8u;
    // 0x34e0d8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e0dc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34e0e0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x34E0E0u;
    {
        const bool branch_taken_0x34e0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e0e0) {
            ctx->pc = 0x34E1B4u;
            goto label_34e1b4;
        }
    }
    ctx->pc = 0x34E0E8u;
label_34e0e8:
    // 0x34e0e8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e0ec: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34e0f0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34e0f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34e0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34e0f8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e0fc: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34e100: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e104: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E104u;
    SET_GPR_U32(ctx, 31, 0x34E10Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E104u, 0x34E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E10Cu;
label_34e10c:
    // 0x34e10c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e110: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34e114: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34e114u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34e118: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e11c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x34e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x34e120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e124: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34e124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e128: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34e128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e12c: 0xc04a125  jal         func_128494
    ctx->pc = 0x34E12Cu;
    SET_GPR_U32(ctx, 31, 0x34E134u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34E12Cu, 0x34E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E134u;
label_34e134:
    // 0x34e134: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e138: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e13c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34e140: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e144: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34e148: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34e148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34e14c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e150: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e154: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34e154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34e158: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x34e158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34e15c: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x34e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e160: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34e160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e164: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34e164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e168: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34E168u;
    SET_GPR_U32(ctx, 31, 0x34E170u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34E168u, 0x34E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E170u;
label_34e170:
    // 0x34e170: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34e170u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34e174: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34e178: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e17c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34E17Cu;
    SET_GPR_U32(ctx, 31, 0x34E184u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34E17Cu, 0x34E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E184u;
label_34e184:
    // 0x34e184: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e188: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E188u;
    {
        const bool branch_taken_0x34e188 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e188) {
            ctx->pc = 0x34E1A0u;
            goto label_34e1a0;
        }
    }
    ctx->pc = 0x34E190u;
    // 0x34e190: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e194: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34e194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34e198: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34E198u;
    {
        const bool branch_taken_0x34e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e198) {
            ctx->pc = 0x34E1B4u;
            goto label_34e1b4;
        }
    }
    ctx->pc = 0x34E1A0u;
label_34e1a0:
    // 0x34e1a0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e1a4: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34e1a8: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34e1ac: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e1b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34e1b4:
    // 0x34e1b4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e1b4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e1b8: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34e1b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e1bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34e1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e1c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34e1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x34E1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E1CCu;
}
