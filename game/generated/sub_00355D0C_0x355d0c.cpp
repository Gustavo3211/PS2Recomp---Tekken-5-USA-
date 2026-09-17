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

// Function: sub_00355D0C
// Address: 0x355d0c - 0x355ef4
void sub_00355D0C_0x355d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355D0C_0x355d0c");
#endif

    switch (ctx->pc) {
        case 0x355d34u: goto label_355d34;
        case 0x355d94u: goto label_355d94;
        case 0x355db0u: goto label_355db0;
        case 0x355dc4u: goto label_355dc4;
        case 0x355e14u: goto label_355e14;
        case 0x355ed8u: goto label_355ed8;
        default: break;
    }

    ctx->pc = 0x355d0cu;

    // 0x355d0c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x355d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x355d10: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x355d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x355d14: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x355d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x355d18: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355d18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355d1c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x355d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x355d20: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x355d20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x355d24: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x355d24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x355d28: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x355d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x355d2c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x355D2Cu;
    SET_GPR_U32(ctx, 31, 0x355D34u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x355D2Cu, 0x355D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D34u;
label_355d34:
    // 0x355d34: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355d38: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x355d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355d3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355d40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x355d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x355d44: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x355d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x355d48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x355d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355d4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x355d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x355d50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x355d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355d54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x355d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x355d58: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x355d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x355d5c: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x355d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x355d60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x355d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355d64: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x355d64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x355d68: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x355d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x355d6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x355d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x355d70: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x355D70u;
    {
        const bool branch_taken_0x355d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d70) {
            ctx->pc = 0x355EC0u;
            goto label_355ec0;
        }
    }
    ctx->pc = 0x355D78u;
    // 0x355d78: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x355d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x355d7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x355d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355d80: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x355d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x355d84: 0x2786c748  addiu       $a2, $gp, -0x38B8
    ctx->pc = 0x355d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952776));
    // 0x355d88: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x355d88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355d8c: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x355D8Cu;
    SET_GPR_U32(ctx, 31, 0x355D94u);
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x355D8Cu, 0x355D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D94u;
label_355d94:
    // 0x355d94: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355d98: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x355d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355d9c: 0x27c60020  addiu       $a2, $fp, 0x20
    ctx->pc = 0x355d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x355da0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355da4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x355da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x355da8: 0xc04355a  jal         func_10D568
    ctx->pc = 0x355DA8u;
    SET_GPR_U32(ctx, 31, 0x355DB0u);
    ctx->pc = 0x10D568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D568u, 0x355DA8u, 0x355DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DB0u;
label_355db0:
    // 0x355db0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355DB0u;
    {
        const bool branch_taken_0x355db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355db0) {
            ctx->pc = 0x355DC0u;
            goto label_355dc0;
        }
    }
    ctx->pc = 0x355DB8u;
    // 0x355db8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x355DB8u;
    {
        const bool branch_taken_0x355db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355db8) {
            ctx->pc = 0x355DF8u;
            goto label_355df8;
        }
    }
    ctx->pc = 0x355DC0u;
label_355dc0:
    // 0x355dc0: 0xafc00060  sw          $zero, 0x60($fp)
    ctx->pc = 0x355dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 0));
label_355dc4:
    // 0x355dc4: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x355dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x355dc8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x355dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x355dcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x355dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x355dd0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x355dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x355dd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355DD4u;
    {
        const bool branch_taken_0x355dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355dd4) {
            ctx->pc = 0x355DE4u;
            goto label_355de4;
        }
    }
    ctx->pc = 0x355DDCu;
    // 0x355ddc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x355DDCu;
    {
        const bool branch_taken_0x355ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355ddc) {
            ctx->pc = 0x355D94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355d94;
        }
    }
    ctx->pc = 0x355DE4u;
label_355de4:
    // 0x355de4: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x355de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x355de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355dec: 0xafc20060  sw          $v0, 0x60($fp)
    ctx->pc = 0x355decu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 2));
    // 0x355df0: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x355DF0u;
    {
        const bool branch_taken_0x355df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355df0) {
            ctx->pc = 0x355DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355dc4;
        }
    }
    ctx->pc = 0x355DF8u;
label_355df8:
    // 0x355df8: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x355df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x355dfc: 0x27c30014  addiu       $v1, $fp, 0x14
    ctx->pc = 0x355dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x355e00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x355e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x355e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355e08: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x355e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355e0c: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x355E0Cu;
    SET_GPR_U32(ctx, 31, 0x355E14u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x355E0Cu, 0x355E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355E14u;
label_355e14:
    // 0x355e14: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x355e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x355e18: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x355e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x355e1c: 0xafc20064  sw          $v0, 0x64($fp)
    ctx->pc = 0x355e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 2));
    // 0x355e20: 0x8fc30064  lw          $v1, 0x64($fp)
    ctx->pc = 0x355e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x355e24: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x355e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x355e28: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x355E28u;
    {
        const bool branch_taken_0x355e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e28) {
            ctx->pc = 0x355EACu;
            goto label_355eac;
        }
    }
    ctx->pc = 0x355E30u;
    // 0x355e30: 0x8fc20064  lw          $v0, 0x64($fp)
    ctx->pc = 0x355e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x355e34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x355e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x355e38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x355e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x355e3c: 0x24424e40  addiu       $v0, $v0, 0x4E40
    ctx->pc = 0x355e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20032));
    // 0x355e40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x355e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355e44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x355e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355e48: 0x400008  jr          $v0
    ctx->pc = 0x355E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x355E50u: goto label_355e50;
            case 0x355E5Cu: goto label_355e5c;
            case 0x355E70u: goto label_355e70;
            case 0x355E84u: goto label_355e84;
            case 0x355E98u: goto label_355e98;
            case 0x355EACu: goto label_355eac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355E48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x355E50u;
label_355e50:
    // 0x355e50: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x355e50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x355e54: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x355E54u;
    {
        const bool branch_taken_0x355e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e54) {
            ctx->pc = 0x355ECCu;
            goto label_355ecc;
        }
    }
    ctx->pc = 0x355E5Cu;
label_355e5c:
    // 0x355e5c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x355e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x355e60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x355e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x355e64: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x355e64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x355e68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x355E68u;
    {
        const bool branch_taken_0x355e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e68) {
            ctx->pc = 0x355ECCu;
            goto label_355ecc;
        }
    }
    ctx->pc = 0x355E70u;
label_355e70:
    // 0x355e70: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x355e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x355e74: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x355e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x355e78: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x355e78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x355e7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x355E7Cu;
    {
        const bool branch_taken_0x355e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e7c) {
            ctx->pc = 0x355ECCu;
            goto label_355ecc;
        }
    }
    ctx->pc = 0x355E84u;
label_355e84:
    // 0x355e84: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x355e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x355e88: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x355e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x355e8c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x355e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x355e90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x355E90u;
    {
        const bool branch_taken_0x355e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e90) {
            ctx->pc = 0x355ECCu;
            goto label_355ecc;
        }
    }
    ctx->pc = 0x355E98u;
label_355e98:
    // 0x355e98: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x355e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x355e9c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x355e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x355ea0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x355ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x355ea4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x355EA4u;
    {
        const bool branch_taken_0x355ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355ea4) {
            ctx->pc = 0x355ECCu;
            goto label_355ecc;
        }
    }
    ctx->pc = 0x355EACu;
label_355eac:
    // 0x355eac: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x355eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x355eb0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x355eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x355eb4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x355eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x355eb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x355EB8u;
    {
        const bool branch_taken_0x355eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355eb8) {
            ctx->pc = 0x355ECCu;
            goto label_355ecc;
        }
    }
    ctx->pc = 0x355EC0u;
label_355ec0:
    // 0x355ec0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x355ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x355ec4: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x355ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x355ec8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x355ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_355ecc:
    // 0x355ecc: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x355eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x355ed0: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x355ED0u;
    SET_GPR_U32(ctx, 31, 0x355ED8u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x355ED0u, 0x355ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355ED8u;
label_355ed8:
    // 0x355ed8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x355ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x355edc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x355edcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ee0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x355ee0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x355ee4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x355ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x355ee8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x355ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x355eec: 0x3e00008  jr          $ra
    ctx->pc = 0x355EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355EF4u;
}
