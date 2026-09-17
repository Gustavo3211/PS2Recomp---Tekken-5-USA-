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

// Function: sub_00353A2C
// Address: 0x353a2c - 0x353b78
void sub_00353A2C_0x353a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353A2C_0x353a2c");
#endif

    switch (ctx->pc) {
        case 0x353a50u: goto label_353a50;
        case 0x353a84u: goto label_353a84;
        case 0x353aa0u: goto label_353aa0;
        case 0x353ab8u: goto label_353ab8;
        case 0x353af4u: goto label_353af4;
        case 0x353b04u: goto label_353b04;
        case 0x353b20u: goto label_353b20;
        case 0x353b58u: goto label_353b58;
        default: break;
    }

    ctx->pc = 0x353a2cu;

    // 0x353a2c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x353a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x353a30: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x353a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x353a34: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x353a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x353a38: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353a38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a3c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353a40: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x353a40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x353a44: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x353a44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x353a48: 0xc0d5025  jal         func_354094
    ctx->pc = 0x353A48u;
    SET_GPR_U32(ctx, 31, 0x353A50u);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x353A48u, 0x353A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A50u;
label_353a50:
    // 0x353a50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353A50u;
    {
        const bool branch_taken_0x353a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353a50) {
            ctx->pc = 0x353A68u;
            goto label_353a68;
        }
    }
    ctx->pc = 0x353A58u;
    // 0x353a58: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353a5c: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x353a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x353a60: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x353A60u;
    {
        const bool branch_taken_0x353a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a60) {
            ctx->pc = 0x353B60u;
            goto label_353b60;
        }
    }
    ctx->pc = 0x353A68u;
label_353a68:
    // 0x353a68: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x353a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x353a6c: 0x27c30014  addiu       $v1, $fp, 0x14
    ctx->pc = 0x353a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x353a70: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x353a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353a74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x353a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a78: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x353a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a7c: 0xc0d4f63  jal         func_353D8C
    ctx->pc = 0x353A7Cu;
    SET_GPR_U32(ctx, 31, 0x353A84u);
    ctx->pc = 0x353D8Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353D8Cu, 0x353A7Cu, 0x353A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A84u;
label_353a84:
    // 0x353a84: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353a84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x353a88: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x353a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x353a8c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x353a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x353a90: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x353a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x353a94: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x353a94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x353a98: 0xc0d54e8  jal         func_3553A0
    ctx->pc = 0x353A98u;
    SET_GPR_U32(ctx, 31, 0x353AA0u);
    ctx->pc = 0x3553A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3553A0u, 0x353A98u, 0x353AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353AA0u;
label_353aa0:
    // 0x353aa0: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x353aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x353aa4: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x353aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x353aa8: 0x8fc40030  lw          $a0, 0x30($fp)
    ctx->pc = 0x353aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x353aac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x353aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ab0: 0xc0d5232  jal         func_3548C8
    ctx->pc = 0x353AB0u;
    SET_GPR_U32(ctx, 31, 0x353AB8u);
    ctx->pc = 0x3548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3548C8u, 0x353AB0u, 0x353AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353AB8u;
label_353ab8:
    // 0x353ab8: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x353ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x353abc: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x353abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x353ac0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353AC0u;
    {
        const bool branch_taken_0x353ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353ac0) {
            ctx->pc = 0x353AD8u;
            goto label_353ad8;
        }
    }
    ctx->pc = 0x353AC8u;
    // 0x353ac8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353acc: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x353accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x353ad0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x353AD0u;
    {
        const bool branch_taken_0x353ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ad0) {
            ctx->pc = 0x353B60u;
            goto label_353b60;
        }
    }
    ctx->pc = 0x353AD8u;
label_353ad8:
    // 0x353ad8: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x353ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x353adc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x353adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x353ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x353ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ae4: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x353ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353ae8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x353ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x353aec: 0xc04a58e  jal         func_129638
    ctx->pc = 0x353AECu;
    SET_GPR_U32(ctx, 31, 0x353AF4u);
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x353AECu, 0x353AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353AF4u;
label_353af4:
    // 0x353af4: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x353af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x353af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353afc: 0xc0d5a05  jal         func_356814
    ctx->pc = 0x353AFCu;
    SET_GPR_U32(ctx, 31, 0x353B04u);
    ctx->pc = 0x356814u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356814u, 0x353AFCu, 0x353B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B04u;
label_353b04:
    // 0x353b04: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353b04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x353b08: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353b0c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x353B0Cu;
    {
        const bool branch_taken_0x353b0c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x353b0c) {
            ctx->pc = 0x353B2Cu;
            goto label_353b2c;
        }
    }
    ctx->pc = 0x353B14u;
    // 0x353b14: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x353b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x353b18: 0xc0d52b3  jal         func_354ACC
    ctx->pc = 0x353B18u;
    SET_GPR_U32(ctx, 31, 0x353B20u);
    ctx->pc = 0x354ACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354ACCu, 0x353B18u, 0x353B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B20u;
label_353b20:
    // 0x353b20: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353b24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x353B24u;
    {
        const bool branch_taken_0x353b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b24) {
            ctx->pc = 0x353B60u;
            goto label_353b60;
        }
    }
    ctx->pc = 0x353B2Cu;
label_353b2c:
    // 0x353b2c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353b30: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x353b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x353b34: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x353b34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x353b38: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x353b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x353b3c: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x353b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x353b40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353b44: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x353b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x353b48: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x353b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x353b4c: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x353b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x353b50: 0xc0d52d4  jal         func_354B50
    ctx->pc = 0x353B50u;
    SET_GPR_U32(ctx, 31, 0x353B58u);
    ctx->pc = 0x354B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B50u, 0x353B50u, 0x353B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B58u;
label_353b58:
    // 0x353b58: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x353b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x353b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_353b60:
    // 0x353b60: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353b60u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b64: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x353b64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353b68: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x353b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353b6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x353b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353b70: 0x3e00008  jr          $ra
    ctx->pc = 0x353B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353B78u;
}
