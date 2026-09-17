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

// Function: sub_0034CFEC
// Address: 0x34cfec - 0x34d188
void sub_0034CFEC_0x34cfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CFEC_0x34cfec");
#endif

    switch (ctx->pc) {
        case 0x34d038u: goto label_34d038;
        case 0x34d098u: goto label_34d098;
        case 0x34d0c0u: goto label_34d0c0;
        case 0x34d12cu: goto label_34d12c;
        case 0x34d140u: goto label_34d140;
        default: break;
    }

    ctx->pc = 0x34cfecu;

    // 0x34cfec: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34cfecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34cff0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34cff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34cff4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34cff8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34cff8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cffc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d000: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34d000u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34d004: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34d004u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34d008: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34d008u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34d00c: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x34d010: 0xafc90014  sw          $t1, 0x14($fp)
    ctx->pc = 0x34d010u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
    // 0x34d014: 0xafca0018  sw          $t2, 0x18($fp)
    ctx->pc = 0x34d014u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 10));
    // 0x34d018: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d01c: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34d020: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34d020u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x34d024: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x34d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34d028: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34d028u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34d02c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d030: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34D030u;
    SET_GPR_U32(ctx, 31, 0x34D038u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34D030u, 0x34D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D038u;
label_34d038:
    // 0x34d038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34d03c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34d040: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d044: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34d048: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d04c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34d050: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34d050u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34d054: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d058: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34d058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34d05c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D05Cu;
    {
        const bool branch_taken_0x34d05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d05c) {
            ctx->pc = 0x34D074u;
            goto label_34d074;
        }
    }
    ctx->pc = 0x34D064u;
    // 0x34d064: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d068: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34d06c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x34D06Cu;
    {
        const bool branch_taken_0x34d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d06c) {
            ctx->pc = 0x34D170u;
            goto label_34d170;
        }
    }
    ctx->pc = 0x34D074u;
label_34d074:
    // 0x34d074: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d078: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34d078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34d07c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34d080: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d084: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34d084u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34d088: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x34d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x34d08c: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d090: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D090u;
    SET_GPR_U32(ctx, 31, 0x34D098u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D090u, 0x34D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D098u;
label_34d098:
    // 0x34d098: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d09c: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d0a0: 0xafc20028  sw          $v0, 0x28($fp)
    ctx->pc = 0x34d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x34d0a4: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x34d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d0a8: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x34d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x34d0ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34d0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d0b0: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d0b4: 0x8fc60020  lw          $a2, 0x20($fp)
    ctx->pc = 0x34d0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34d0b8: 0xc04a125  jal         func_128494
    ctx->pc = 0x34D0B8u;
    SET_GPR_U32(ctx, 31, 0x34D0C0u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34D0B8u, 0x34D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0C0u;
label_34d0c0:
    // 0x34d0c0: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x34d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d0c4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d0c8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34d0cc: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x34d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d0d0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d0d4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34d0d8: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x34d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d0dc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d0e0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x34d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x34d0e4: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x34d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d0e8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34d0ec: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x34d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x34d0f0: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x34d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d0f4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34d0f8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x34d0fc: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x34d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d100: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d104: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34d108: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x34d108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d10c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34d110: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34d110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34d114: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d118: 0x8fc50028  lw          $a1, 0x28($fp)
    ctx->pc = 0x34d118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34d11c: 0x8fc6001c  lw          $a2, 0x1C($fp)
    ctx->pc = 0x34d11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d120: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34d120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d124: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34D124u;
    SET_GPR_U32(ctx, 31, 0x34D12Cu);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34D124u, 0x34D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D12Cu;
label_34d12c:
    // 0x34d12c: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34d130: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x34d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x34d134: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d138: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34D138u;
    SET_GPR_U32(ctx, 31, 0x34D140u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34D138u, 0x34D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D140u;
label_34d140:
    // 0x34d140: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34d144: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D144u;
    {
        const bool branch_taken_0x34d144 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d144) {
            ctx->pc = 0x34D15Cu;
            goto label_34d15c;
        }
    }
    ctx->pc = 0x34D14Cu;
    // 0x34d14c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d150: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34d150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34d154: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34D154u;
    {
        const bool branch_taken_0x34d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d154) {
            ctx->pc = 0x34D170u;
            goto label_34d170;
        }
    }
    ctx->pc = 0x34D15Cu;
label_34d15c:
    // 0x34d15c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d160: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d164: 0xafc2002c  sw          $v0, 0x2C($fp)
    ctx->pc = 0x34d164u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x34d168: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x34d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x34d16c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34d170:
    // 0x34d170: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d170u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d174: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34d174u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34d178: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34d178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34d17c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34d17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34d180: 0x3e00008  jr          $ra
    ctx->pc = 0x34D180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D188u;
}
