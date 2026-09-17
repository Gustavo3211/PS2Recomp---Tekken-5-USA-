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

// Function: sub_0034E948
// Address: 0x34e948 - 0x34eacc
void sub_0034E948_0x34e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E948_0x34e948");
#endif

    switch (ctx->pc) {
        case 0x34e98cu: goto label_34e98c;
        case 0x34e9a0u: goto label_34e9a0;
        case 0x34ea00u: goto label_34ea00;
        case 0x34ea28u: goto label_34ea28;
        case 0x34ea70u: goto label_34ea70;
        case 0x34ea84u: goto label_34ea84;
        default: break;
    }

    ctx->pc = 0x34e948u;

    // 0x34e948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e94c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34e950: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34e950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34e954: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e954u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e958: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e95c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e960: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e960u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e964: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34e964u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34e968: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e96c: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34e970: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34e970u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34e974: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34e978: 0x24420117  addiu       $v0, $v0, 0x117
    ctx->pc = 0x34e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 279));
    // 0x34e97c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34e980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34e980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e984: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x34E984u;
    SET_GPR_U32(ctx, 31, 0x34E98Cu);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x34E984u, 0x34E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E98Cu;
label_34e98c:
    // 0x34e98c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34e990: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e990u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e994: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e998: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34E998u;
    SET_GPR_U32(ctx, 31, 0x34E9A0u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34E998u, 0x34E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E9A0u;
label_34e9a0:
    // 0x34e9a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34e9a4: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34e9a8: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x34e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e9ac: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e9b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34e9b4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34e9b8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e9bc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e9c0: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34e9c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34e9c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E9C4u;
    {
        const bool branch_taken_0x34e9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e9c4) {
            ctx->pc = 0x34E9DCu;
            goto label_34e9dc;
        }
    }
    ctx->pc = 0x34E9CCu;
    // 0x34e9cc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e9d0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34e9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34e9d4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x34E9D4u;
    {
        const bool branch_taken_0x34e9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e9d4) {
            ctx->pc = 0x34EAB4u;
            goto label_34eab4;
        }
    }
    ctx->pc = 0x34E9DCu;
label_34e9dc:
    // 0x34e9dc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e9e0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34e9e4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34e9e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34e9ec: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e9f0: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34e9f4: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e9f8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E9F8u;
    SET_GPR_U32(ctx, 31, 0x34EA00u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E9F8u, 0x34EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA00u;
label_34ea00:
    // 0x34ea00: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ea04: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34ea08: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34ea0c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ea10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x34ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34ea14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34ea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea18: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34ea1c: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34ea1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ea20: 0xc04a125  jal         func_128494
    ctx->pc = 0x34EA20u;
    SET_GPR_U32(ctx, 31, 0x34EA28u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34EA20u, 0x34EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA28u;
label_34ea28:
    // 0x34ea28: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ea2c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ea30: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34ea34: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ea38: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ea3c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34ea40: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ea44: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34ea48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34ea4c: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ea50: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ea54: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34ea58: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x34ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x34ea5c: 0x8fc5001c  lw          $a1, 0x1C($fp)
    ctx->pc = 0x34ea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ea60: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34ea60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34ea64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34ea64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ea68: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34EA68u;
    SET_GPR_U32(ctx, 31, 0x34EA70u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34EA68u, 0x34EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA70u;
label_34ea70:
    // 0x34ea70: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34ea74: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34ea78: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34ea7c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34EA7Cu;
    SET_GPR_U32(ctx, 31, 0x34EA84u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34EA7Cu, 0x34EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA84u;
label_34ea84:
    // 0x34ea84: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34ea88: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EA88u;
    {
        const bool branch_taken_0x34ea88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34ea88) {
            ctx->pc = 0x34EAA0u;
            goto label_34eaa0;
        }
    }
    ctx->pc = 0x34EA90u;
    // 0x34ea90: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34ea94: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34ea98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34EA98u;
    {
        const bool branch_taken_0x34ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ea98) {
            ctx->pc = 0x34EAB4u;
            goto label_34eab4;
        }
    }
    ctx->pc = 0x34EAA0u;
label_34eaa0:
    // 0x34eaa0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34eaa4: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34eaa8: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34eaac: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34eab0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34eab4:
    // 0x34eab4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34eab4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eab8: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34eab8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34eabc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34eabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eac0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34eac4: 0x3e00008  jr          $ra
    ctx->pc = 0x34EAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EACCu;
}
