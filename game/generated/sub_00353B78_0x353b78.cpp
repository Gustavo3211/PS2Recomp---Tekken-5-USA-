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

// Function: sub_00353B78
// Address: 0x353b78 - 0x353c50
void sub_00353B78_0x353b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353B78_0x353b78");
#endif

    switch (ctx->pc) {
        case 0x353b98u: goto label_353b98;
        case 0x353bc4u: goto label_353bc4;
        case 0x353bd8u: goto label_353bd8;
        case 0x353c08u: goto label_353c08;
        case 0x353c34u: goto label_353c34;
        default: break;
    }

    ctx->pc = 0x353b78u;

    // 0x353b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353b7c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x353b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x353b80: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x353b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x353b84: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353b84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b88: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353b88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353b8c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x353b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x353b90: 0xc0d5025  jal         func_354094
    ctx->pc = 0x353B90u;
    SET_GPR_U32(ctx, 31, 0x353B98u);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x353B90u, 0x353B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B98u;
label_353b98:
    // 0x353b98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353B98u;
    {
        const bool branch_taken_0x353b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353b98) {
            ctx->pc = 0x353BB0u;
            goto label_353bb0;
        }
    }
    ctx->pc = 0x353BA0u;
    // 0x353ba0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353ba4: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x353ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x353ba8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x353BA8u;
    {
        const bool branch_taken_0x353ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ba8) {
            ctx->pc = 0x353C38u;
            goto label_353c38;
        }
    }
    ctx->pc = 0x353BB0u;
label_353bb0:
    // 0x353bb0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353bb4: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x353bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x353bb8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x353bbc: 0xc0d54e8  jal         func_3553A0
    ctx->pc = 0x353BBCu;
    SET_GPR_U32(ctx, 31, 0x353BC4u);
    ctx->pc = 0x3553A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3553A0u, 0x353BBCu, 0x353BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353BC4u;
label_353bc4:
    // 0x353bc4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x353bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x353bc8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353bcc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x353bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x353bd0: 0xc0d5288  jal         func_354A20
    ctx->pc = 0x353BD0u;
    SET_GPR_U32(ctx, 31, 0x353BD8u);
    ctx->pc = 0x354A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354A20u, 0x353BD0u, 0x353BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353BD8u;
label_353bd8:
    // 0x353bd8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x353bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x353bdc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x353bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x353be0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353BE0u;
    {
        const bool branch_taken_0x353be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353be0) {
            ctx->pc = 0x353BF8u;
            goto label_353bf8;
        }
    }
    ctx->pc = 0x353BE8u;
    // 0x353be8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353bec: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x353becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x353bf0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x353BF0u;
    {
        const bool branch_taken_0x353bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353bf0) {
            ctx->pc = 0x353C38u;
            goto label_353c38;
        }
    }
    ctx->pc = 0x353BF8u;
label_353bf8:
    // 0x353bf8: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x353bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x353bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x353bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353c00: 0xc0d5a05  jal         func_356814
    ctx->pc = 0x353C00u;
    SET_GPR_U32(ctx, 31, 0x353C08u);
    ctx->pc = 0x356814u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356814u, 0x353C00u, 0x353C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C08u;
label_353c08:
    // 0x353c08: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x353c08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x353c0c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x353c10: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353C10u;
    {
        const bool branch_taken_0x353c10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x353c10) {
            ctx->pc = 0x353C24u;
            goto label_353c24;
        }
    }
    ctx->pc = 0x353C18u;
    // 0x353c18: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x353c1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x353C1Cu;
    {
        const bool branch_taken_0x353c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c1c) {
            ctx->pc = 0x353C38u;
            goto label_353c38;
        }
    }
    ctx->pc = 0x353C24u;
label_353c24:
    // 0x353c24: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x353c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x353c28: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x353c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353c2c: 0xc0d52d4  jal         func_354B50
    ctx->pc = 0x353C2Cu;
    SET_GPR_U32(ctx, 31, 0x353C34u);
    ctx->pc = 0x354B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B50u, 0x353C2Cu, 0x353C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C34u;
label_353c34:
    // 0x353c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353c38:
    // 0x353c38: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353c38u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c3c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x353c3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353c40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x353c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x353c44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x353c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353c48: 0x3e00008  jr          $ra
    ctx->pc = 0x353C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353C50u;
}
