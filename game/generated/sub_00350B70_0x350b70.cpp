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

// Function: sub_00350B70
// Address: 0x350b70 - 0x350c30
void sub_00350B70_0x350b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350B70_0x350b70");
#endif

    switch (ctx->pc) {
        case 0x350b88u: goto label_350b88;
        case 0x350bc8u: goto label_350bc8;
        case 0x350bfcu: goto label_350bfc;
        case 0x350c08u: goto label_350c08;
        case 0x350c14u: goto label_350c14;
        default: break;
    }

    ctx->pc = 0x350b70u;

    // 0x350b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x350b74: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x350b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x350b78: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x350b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x350b7c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350b7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b80: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x350B80u;
    SET_GPR_U32(ctx, 31, 0x350B88u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x350B80u, 0x350B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B88u;
label_350b88:
    // 0x350b88: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x350b88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x350b8c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x350b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350b90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350B90u;
    {
        const bool branch_taken_0x350b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350b90) {
            ctx->pc = 0x350BA8u;
            goto label_350ba8;
        }
    }
    ctx->pc = 0x350B98u;
    // 0x350b98: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350b9c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x350b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x350ba0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x350BA0u;
    {
        const bool branch_taken_0x350ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350ba0) {
            ctx->pc = 0x350C18u;
            goto label_350c18;
        }
    }
    ctx->pc = 0x350BA8u;
label_350ba8:
    // 0x350ba8: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x350ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x350bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350bb0: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x350bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x350bb4: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x350bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
    // 0x350bb8: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x350bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x350bbc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x350bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bc0: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x350BC0u;
    SET_GPR_U32(ctx, 31, 0x350BC8u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x350BC0u, 0x350BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BC8u;
label_350bc8:
    // 0x350bc8: 0xaf82cbd0  sw          $v0, -0x3430($gp)
    ctx->pc = 0x350bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953936), GPR_U32(ctx, 2));
    // 0x350bcc: 0x8f82cbd0  lw          $v0, -0x3430($gp)
    ctx->pc = 0x350bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953936)));
    // 0x350bd0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350BD0u;
    {
        const bool branch_taken_0x350bd0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x350bd0) {
            ctx->pc = 0x350BE4u;
            goto label_350be4;
        }
    }
    ctx->pc = 0x350BD8u;
    // 0x350bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bdc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x350BDCu;
    {
        const bool branch_taken_0x350bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350bdc) {
            ctx->pc = 0x350C18u;
            goto label_350c18;
        }
    }
    ctx->pc = 0x350BE4u;
label_350be4:
    // 0x350be4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x350be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350be8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x350be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x350bec: 0x8fc40020  lw          $a0, 0x20($fp)
    ctx->pc = 0x350becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x350bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350bf4: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x350BF4u;
    SET_GPR_U32(ctx, 31, 0x350BFCu);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x350BF4u, 0x350BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BFCu;
label_350bfc:
    // 0x350bfc: 0x8f84cbd0  lw          $a0, -0x3430($gp)
    ctx->pc = 0x350bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953936)));
    // 0x350c00: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x350C00u;
    SET_GPR_U32(ctx, 31, 0x350C08u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x350C00u, 0x350C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C08u;
label_350c08:
    // 0x350c08: 0x8f84cbd0  lw          $a0, -0x3430($gp)
    ctx->pc = 0x350c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953936)));
    // 0x350c0c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x350C0Cu;
    SET_GPR_U32(ctx, 31, 0x350C14u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x350C0Cu, 0x350C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C14u;
label_350c14:
    // 0x350c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350c18:
    // 0x350c18: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350c18u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350c1c: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x350c1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350c20: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x350c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x350c24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x350c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x350c28: 0x3e00008  jr          $ra
    ctx->pc = 0x350C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350C30u;
}
