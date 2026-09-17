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

// Function: sub_00319A3C
// Address: 0x319a3c - 0x319c58
void sub_00319A3C_0x319a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319A3C_0x319a3c");
#endif

    switch (ctx->pc) {
        case 0x319a74u: goto label_319a74;
        case 0x319aa4u: goto label_319aa4;
        case 0x319ab8u: goto label_319ab8;
        case 0x319ad4u: goto label_319ad4;
        case 0x319ae8u: goto label_319ae8;
        case 0x319b0cu: goto label_319b0c;
        case 0x319b30u: goto label_319b30;
        case 0x319b48u: goto label_319b48;
        case 0x319b7cu: goto label_319b7c;
        case 0x319bb4u: goto label_319bb4;
        case 0x319bc8u: goto label_319bc8;
        case 0x319becu: goto label_319bec;
        case 0x319c1cu: goto label_319c1c;
        case 0x319c40u: goto label_319c40;
        default: break;
    }

    ctx->pc = 0x319a3cu;

    // 0x319a3c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319a40: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x319a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x319a44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x319a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x319a48: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319a48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a4c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x319a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x319a50: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319a54: 0x8c4343c4  lw          $v1, 0x43C4($v0)
    ctx->pc = 0x319a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x319a58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x319a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319a5c: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x319A5Cu;
    {
        const bool branch_taken_0x319a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x319a5c) {
            ctx->pc = 0x319C40u;
            goto label_319c40;
        }
    }
    ctx->pc = 0x319A64u;
    // 0x319a64: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319a68: 0x8c6443c0  lw          $a0, 0x43C0($v1)
    ctx->pc = 0x319a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17344)));
    // 0x319a6c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x319A6Cu;
    SET_GPR_U32(ctx, 31, 0x319A74u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x319A6Cu, 0x319A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A74u;
label_319a74:
    // 0x319a74: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319a78: 0x8c6244c8  lw          $v0, 0x44C8($v1)
    ctx->pc = 0x319a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17608)));
    // 0x319a7c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x319A7Cu;
    {
        const bool branch_taken_0x319a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319a7c) {
            ctx->pc = 0x319B84u;
            goto label_319b84;
        }
    }
    ctx->pc = 0x319A84u;
    // 0x319a84: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319a88: 0x8c6244c4  lw          $v0, 0x44C4($v1)
    ctx->pc = 0x319a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17604)));
    // 0x319a8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x319a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x319a90: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319a94: 0x8c6443c4  lw          $a0, 0x43C4($v1)
    ctx->pc = 0x319a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17348)));
    // 0x319a98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a9c: 0xc0d6a2a  jal         func_35A8A8
    ctx->pc = 0x319A9Cu;
    SET_GPR_U32(ctx, 31, 0x319AA4u);
    ctx->pc = 0x35A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A8A8u, 0x319A9Cu, 0x319AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AA4u;
label_319aa4:
    // 0x319aa4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319aa8: 0x246243d8  addiu       $v0, $v1, 0x43D8
    ctx->pc = 0x319aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17368));
    // 0x319aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ab0: 0xc0dceca  jal         func_373B28
    ctx->pc = 0x319AB0u;
    SET_GPR_U32(ctx, 31, 0x319AB8u);
    ctx->pc = 0x373B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B28u, 0x319AB0u, 0x319AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AB8u;
label_319ab8:
    // 0x319ab8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x319AB8u;
    {
        const bool branch_taken_0x319ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319ab8) {
            ctx->pc = 0x319B84u;
            goto label_319b84;
        }
    }
    ctx->pc = 0x319AC0u;
    // 0x319ac0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319ac4: 0x246243d8  addiu       $v0, $v1, 0x43D8
    ctx->pc = 0x319ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17368));
    // 0x319ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319acc: 0xc0dceda  jal         func_373B68
    ctx->pc = 0x319ACCu;
    SET_GPR_U32(ctx, 31, 0x319AD4u);
    ctx->pc = 0x373B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B68u, 0x319ACCu, 0x319AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AD4u;
label_319ad4:
    // 0x319ad4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319ad8: 0x8c6443c4  lw          $a0, 0x43C4($v1)
    ctx->pc = 0x319ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17348)));
    // 0x319adc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x319adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319ae0: 0xc0d6a06  jal         func_35A818
    ctx->pc = 0x319AE0u;
    SET_GPR_U32(ctx, 31, 0x319AE8u);
    ctx->pc = 0x35A818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A818u, 0x319AE0u, 0x319AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AE8u;
label_319ae8:
    // 0x319ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x319ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319af0: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x319AF0u;
    {
        const bool branch_taken_0x319af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x319af0) {
            ctx->pc = 0x319B84u;
            goto label_319b84;
        }
    }
    ctx->pc = 0x319AF8u;
    // 0x319af8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319afc: 0x246243d8  addiu       $v0, $v1, 0x43D8
    ctx->pc = 0x319afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17368));
    // 0x319b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319b04: 0xc0dcee5  jal         func_373B94
    ctx->pc = 0x319B04u;
    SET_GPR_U32(ctx, 31, 0x319B0Cu);
    ctx->pc = 0x373B94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B94u, 0x319B04u, 0x319B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B0Cu;
label_319b0c:
    // 0x319b0c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b10: 0x8c6244cc  lw          $v0, 0x44CC($v1)
    ctx->pc = 0x319b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17612)));
    // 0x319b14: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x319B14u;
    {
        const bool branch_taken_0x319b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319b14) {
            ctx->pc = 0x319B84u;
            goto label_319b84;
        }
    }
    ctx->pc = 0x319B1Cu;
    // 0x319b1c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b20: 0x246243d8  addiu       $v0, $v1, 0x43D8
    ctx->pc = 0x319b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17368));
    // 0x319b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319b28: 0xc0dceca  jal         func_373B28
    ctx->pc = 0x319B28u;
    SET_GPR_U32(ctx, 31, 0x319B30u);
    ctx->pc = 0x373B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B28u, 0x319B28u, 0x319B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B30u;
label_319b30:
    // 0x319b30: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x319B30u;
    {
        const bool branch_taken_0x319b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319b30) {
            ctx->pc = 0x319B84u;
            goto label_319b84;
        }
    }
    ctx->pc = 0x319B38u;
    // 0x319b38: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b3c: 0x8c4443c4  lw          $a0, 0x43C4($v0)
    ctx->pc = 0x319b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x319b40: 0xc0d6a1e  jal         func_35A878
    ctx->pc = 0x319B40u;
    SET_GPR_U32(ctx, 31, 0x319B48u);
    ctx->pc = 0x35A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A878u, 0x319B40u, 0x319B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B48u;
label_319b48:
    // 0x319b48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x319b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319b4c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b50: 0xac6243c4  sw          $v0, 0x43C4($v1)
    ctx->pc = 0x319b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17348), GPR_U32(ctx, 2));
    // 0x319b54: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b58: 0xac4044c8  sw          $zero, 0x44C8($v0)
    ctx->pc = 0x319b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17608), GPR_U32(ctx, 0));
    // 0x319b5c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b60: 0xac6044bc  sw          $zero, 0x44BC($v1)
    ctx->pc = 0x319b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17596), GPR_U32(ctx, 0));
    // 0x319b64: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b68: 0xac4044cc  sw          $zero, 0x44CC($v0)
    ctx->pc = 0x319b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17612), GPR_U32(ctx, 0));
    // 0x319b6c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b70: 0x8c6443c0  lw          $a0, 0x43C0($v1)
    ctx->pc = 0x319b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17344)));
    // 0x319b74: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x319B74u;
    SET_GPR_U32(ctx, 31, 0x319B7Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x319B74u, 0x319B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B7Cu;
label_319b7c:
    // 0x319b7c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x319B7Cu;
    {
        const bool branch_taken_0x319b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319b7c) {
            ctx->pc = 0x319C40u;
            goto label_319c40;
        }
    }
    ctx->pc = 0x319B84u;
label_319b84:
    // 0x319b84: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b88: 0x8c6244c8  lw          $v0, 0x44C8($v1)
    ctx->pc = 0x319b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17608)));
    // 0x319b8c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x319B8Cu;
    {
        const bool branch_taken_0x319b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319b8c) {
            ctx->pc = 0x319C30u;
            goto label_319c30;
        }
    }
    ctx->pc = 0x319B94u;
    // 0x319b94: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319b98: 0x8c6244bc  lw          $v0, 0x44BC($v1)
    ctx->pc = 0x319b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17596)));
    // 0x319b9c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x319B9Cu;
    {
        const bool branch_taken_0x319b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319b9c) {
            ctx->pc = 0x319BECu;
            goto label_319bec;
        }
    }
    ctx->pc = 0x319BA4u;
    // 0x319ba4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319ba8: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x319ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x319bac: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x319BACu;
    SET_GPR_U32(ctx, 31, 0x319BB4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x319BACu, 0x319BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BB4u;
label_319bb4:
    // 0x319bb4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319bb8: 0x246240d4  addiu       $v0, $v1, 0x40D4
    ctx->pc = 0x319bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16596));
    // 0x319bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319bc0: 0xc0dcdf1  jal         func_3737C4
    ctx->pc = 0x319BC0u;
    SET_GPR_U32(ctx, 31, 0x319BC8u);
    ctx->pc = 0x3737C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737C4u, 0x319BC0u, 0x319BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BC8u;
label_319bc8:
    // 0x319bc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319BC8u;
    {
        const bool branch_taken_0x319bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319bc8) {
            ctx->pc = 0x319BDCu;
            goto label_319bdc;
        }
    }
    ctx->pc = 0x319BD0u;
    // 0x319bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319bd4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319bd8: 0xac6244bc  sw          $v0, 0x44BC($v1)
    ctx->pc = 0x319bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17596), GPR_U32(ctx, 2));
label_319bdc:
    // 0x319bdc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319be0: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x319be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x319be4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x319BE4u;
    SET_GPR_U32(ctx, 31, 0x319BECu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x319BE4u, 0x319BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BECu;
label_319bec:
    // 0x319bec: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319bf0: 0x8c6244bc  lw          $v0, 0x44BC($v1)
    ctx->pc = 0x319bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17596)));
    // 0x319bf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x319BF4u;
    {
        const bool branch_taken_0x319bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319bf4) {
            ctx->pc = 0x319C30u;
            goto label_319c30;
        }
    }
    ctx->pc = 0x319BFCu;
    // 0x319bfc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319c00: 0x8c6244c0  lw          $v0, 0x44C0($v1)
    ctx->pc = 0x319c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17600)));
    // 0x319c04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x319C04u;
    {
        const bool branch_taken_0x319c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319c04) {
            ctx->pc = 0x319C30u;
            goto label_319c30;
        }
    }
    ctx->pc = 0x319C0Cu;
    // 0x319c0c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319c10: 0x8c4443c4  lw          $a0, 0x43C4($v0)
    ctx->pc = 0x319c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x319c14: 0xc0d6a12  jal         func_35A848
    ctx->pc = 0x319C14u;
    SET_GPR_U32(ctx, 31, 0x319C1Cu);
    ctx->pc = 0x35A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A848u, 0x319C14u, 0x319C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C1Cu;
label_319c1c:
    // 0x319c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319c20: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319c24: 0xac6244c8  sw          $v0, 0x44C8($v1)
    ctx->pc = 0x319c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17608), GPR_U32(ctx, 2));
    // 0x319c28: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319c2c: 0xac4044c0  sw          $zero, 0x44C0($v0)
    ctx->pc = 0x319c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17600), GPR_U32(ctx, 0));
label_319c30:
    // 0x319c30: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319c34: 0x8c6443c0  lw          $a0, 0x43C0($v1)
    ctx->pc = 0x319c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17344)));
    // 0x319c38: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x319C38u;
    SET_GPR_U32(ctx, 31, 0x319C40u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x319C38u, 0x319C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C40u;
label_319c40:
    // 0x319c40: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319c40u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c44: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x319c44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319c48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x319c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x319c4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x319c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319c50: 0x3e00008  jr          $ra
    ctx->pc = 0x319C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319C58u;
}
