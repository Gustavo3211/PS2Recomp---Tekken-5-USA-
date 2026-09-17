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

// Function: sub_0035799C
// Address: 0x35799c - 0x357b8c
void sub_0035799C_0x35799c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035799C_0x35799c");
#endif

    switch (ctx->pc) {
        case 0x3579c4u: goto label_3579c4;
        case 0x357a10u: goto label_357a10;
        case 0x357a24u: goto label_357a24;
        case 0x357a38u: goto label_357a38;
        case 0x357a88u: goto label_357a88;
        case 0x357b70u: goto label_357b70;
        default: break;
    }

    ctx->pc = 0x35799cu;

    // 0x35799c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35799cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3579a0: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3579a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x3579a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3579a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3579a8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3579a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3579ac: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3579acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3579b0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3579b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3579b4: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3579b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3579b8: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3579b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3579bc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3579BCu;
    SET_GPR_U32(ctx, 31, 0x3579C4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3579BCu, 0x3579C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579C4u;
label_3579c4:
    // 0x3579c4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3579c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3579c8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3579c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3579cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3579ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3579d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3579d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3579d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3579d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3579d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3579d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3579dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3579dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3579e0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3579e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3579e4: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x3579e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x3579e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3579e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3579ec: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x3579ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x3579f0: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3579f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3579f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3579f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3579f8: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3579F8u;
    {
        const bool branch_taken_0x3579f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3579f8) {
            ctx->pc = 0x357B34u;
            goto label_357b34;
        }
    }
    ctx->pc = 0x357A00u;
    // 0x357a00: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x357a04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x357a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x357a08: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x357A08u;
    {
        const bool branch_taken_0x357a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357a08) {
            ctx->pc = 0x357B34u;
            goto label_357b34;
        }
    }
    ctx->pc = 0x357A10u;
label_357a10:
    // 0x357a10: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x357a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x357a14: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x357a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x357a18: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x357a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x357a1c: 0xc043860  jal         func_10E180
    ctx->pc = 0x357A1Cu;
    SET_GPR_U32(ctx, 31, 0x357A24u);
    ctx->pc = 0x10E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E180u, 0x357A1Cu, 0x357A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A24u;
label_357a24:
    // 0x357a24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357A24u;
    {
        const bool branch_taken_0x357a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357a24) {
            ctx->pc = 0x357A34u;
            goto label_357a34;
        }
    }
    ctx->pc = 0x357A2Cu;
    // 0x357a2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x357A2Cu;
    {
        const bool branch_taken_0x357a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357a2c) {
            ctx->pc = 0x357A6Cu;
            goto label_357a6c;
        }
    }
    ctx->pc = 0x357A34u;
label_357a34:
    // 0x357a34: 0xafc0001c  sw          $zero, 0x1C($fp)
    ctx->pc = 0x357a34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_357a38:
    // 0x357a38: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x357a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x357a3c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x357a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x357a40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x357a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x357a44: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x357a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x357a48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357A48u;
    {
        const bool branch_taken_0x357a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357a48) {
            ctx->pc = 0x357A58u;
            goto label_357a58;
        }
    }
    ctx->pc = 0x357A50u;
    // 0x357a50: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x357A50u;
    {
        const bool branch_taken_0x357a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357a50) {
            ctx->pc = 0x357A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357a10;
        }
    }
    ctx->pc = 0x357A58u;
label_357a58:
    // 0x357a58: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x357a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x357a5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357a60: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x357a60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x357a64: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x357A64u;
    {
        const bool branch_taken_0x357a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357a64) {
            ctx->pc = 0x357A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357a38;
        }
    }
    ctx->pc = 0x357A6Cu;
label_357a6c:
    // 0x357a6c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x357a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x357a70: 0x27c30014  addiu       $v1, $fp, 0x14
    ctx->pc = 0x357a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x357a74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a7c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x357a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a80: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x357A80u;
    SET_GPR_U32(ctx, 31, 0x357A88u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x357A80u, 0x357A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A88u;
label_357a88:
    // 0x357a88: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x357a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357a8c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x357a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x357a90: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x357a90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x357a94: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x357a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x357a98: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x357a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x357a9c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x357A9Cu;
    {
        const bool branch_taken_0x357a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357a9c) {
            ctx->pc = 0x357B20u;
            goto label_357b20;
        }
    }
    ctx->pc = 0x357AA4u;
    // 0x357aa4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x357aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x357aa8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x357aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x357aac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x357aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x357ab0: 0x24424ee0  addiu       $v0, $v0, 0x4EE0
    ctx->pc = 0x357ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
    // 0x357ab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x357ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357ab8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x357ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357abc: 0x400008  jr          $v0
    ctx->pc = 0x357ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x357AC4u: goto label_357ac4;
            case 0x357AD0u: goto label_357ad0;
            case 0x357AE4u: goto label_357ae4;
            case 0x357AF8u: goto label_357af8;
            case 0x357B0Cu: goto label_357b0c;
            case 0x357B20u: goto label_357b20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357ABCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x357AC4u;
label_357ac4:
    // 0x357ac4: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x357ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x357ac8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x357AC8u;
    {
        const bool branch_taken_0x357ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357ac8) {
            ctx->pc = 0x357B64u;
            goto label_357b64;
        }
    }
    ctx->pc = 0x357AD0u;
label_357ad0:
    // 0x357ad0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357ad4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357ad8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357adc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x357ADCu;
    {
        const bool branch_taken_0x357adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357adc) {
            ctx->pc = 0x357B64u;
            goto label_357b64;
        }
    }
    ctx->pc = 0x357AE4u;
label_357ae4:
    // 0x357ae4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357ae8: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x357ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x357aec: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357aecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357af0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x357AF0u;
    {
        const bool branch_taken_0x357af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357af0) {
            ctx->pc = 0x357B64u;
            goto label_357b64;
        }
    }
    ctx->pc = 0x357AF8u;
label_357af8:
    // 0x357af8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357afc: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x357afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x357b00: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357b00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357b04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x357B04u;
    {
        const bool branch_taken_0x357b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357b04) {
            ctx->pc = 0x357B64u;
            goto label_357b64;
        }
    }
    ctx->pc = 0x357B0Cu;
label_357b0c:
    // 0x357b0c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357b10: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x357b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x357b14: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357b14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357b18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x357B18u;
    {
        const bool branch_taken_0x357b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357b18) {
            ctx->pc = 0x357B64u;
            goto label_357b64;
        }
    }
    ctx->pc = 0x357B20u;
label_357b20:
    // 0x357b20: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357b24: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x357b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x357b28: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357b28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357b2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x357B2Cu;
    {
        const bool branch_taken_0x357b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357b2c) {
            ctx->pc = 0x357B64u;
            goto label_357b64;
        }
    }
    ctx->pc = 0x357B34u;
label_357b34:
    // 0x357b34: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x357b38: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x357b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x357b3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x357B3Cu;
    {
        const bool branch_taken_0x357b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357b3c) {
            ctx->pc = 0x357B58u;
            goto label_357b58;
        }
    }
    ctx->pc = 0x357B44u;
    // 0x357b44: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357b48: 0x3442fff5  ori         $v0, $v0, 0xFFF5
    ctx->pc = 0x357b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65525);
    // 0x357b4c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357b50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357B50u;
    {
        const bool branch_taken_0x357b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357b50) {
            ctx->pc = 0x357B64u;
            goto label_357b64;
        }
    }
    ctx->pc = 0x357B58u;
label_357b58:
    // 0x357b58: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357b5c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x357b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x357b60: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357b60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_357b64:
    // 0x357b64: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x357b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357b68: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x357B68u;
    SET_GPR_U32(ctx, 31, 0x357B70u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x357B68u, 0x357B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B70u;
label_357b70:
    // 0x357b70: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x357b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x357b74: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x357b74u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b78: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x357b78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357b7c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x357b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357b80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x357b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x357b84: 0x3e00008  jr          $ra
    ctx->pc = 0x357B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357B8Cu;
}
