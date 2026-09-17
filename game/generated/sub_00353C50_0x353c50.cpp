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

// Function: sub_00353C50
// Address: 0x353c50 - 0x353cf0
void sub_00353C50_0x353c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353C50_0x353c50");
#endif

    switch (ctx->pc) {
        case 0x353c6cu: goto label_353c6c;
        case 0x353c98u: goto label_353c98;
        case 0x353cacu: goto label_353cac;
        case 0x353cd8u: goto label_353cd8;
        default: break;
    }

    ctx->pc = 0x353c50u;

    // 0x353c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353c54: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x353c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x353c58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x353c5c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353c5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c60: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353c60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353c64: 0xc0d5025  jal         func_354094
    ctx->pc = 0x353C64u;
    SET_GPR_U32(ctx, 31, 0x353C6Cu);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x353C64u, 0x353C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C6Cu;
label_353c6c:
    // 0x353c6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353C6Cu;
    {
        const bool branch_taken_0x353c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353c6c) {
            ctx->pc = 0x353C84u;
            goto label_353c84;
        }
    }
    ctx->pc = 0x353C74u;
    // 0x353c74: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353c78: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x353c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x353c7c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x353C7Cu;
    {
        const bool branch_taken_0x353c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c7c) {
            ctx->pc = 0x353CD8u;
            goto label_353cd8;
        }
    }
    ctx->pc = 0x353C84u;
label_353c84:
    // 0x353c84: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353c88: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x353c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x353c8c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x353c90: 0xc0d54e8  jal         func_3553A0
    ctx->pc = 0x353C90u;
    SET_GPR_U32(ctx, 31, 0x353C98u);
    ctx->pc = 0x3553A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3553A0u, 0x353C90u, 0x353C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C98u;
label_353c98:
    // 0x353c98: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x353c98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x353c9c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353ca0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x353ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x353ca4: 0xc0d5288  jal         func_354A20
    ctx->pc = 0x353CA4u;
    SET_GPR_U32(ctx, 31, 0x353CACu);
    ctx->pc = 0x354A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354A20u, 0x353CA4u, 0x353CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CACu;
label_353cac:
    // 0x353cac: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353cacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x353cb0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353cb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353CB4u;
    {
        const bool branch_taken_0x353cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353cb4) {
            ctx->pc = 0x353CCCu;
            goto label_353ccc;
        }
    }
    ctx->pc = 0x353CBCu;
    // 0x353cbc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353cc0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x353cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x353cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353CC4u;
    {
        const bool branch_taken_0x353cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353cc4) {
            ctx->pc = 0x353CD8u;
            goto label_353cd8;
        }
    }
    ctx->pc = 0x353CCCu;
label_353ccc:
    // 0x353ccc: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x353cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353cd0: 0xc0d52b3  jal         func_354ACC
    ctx->pc = 0x353CD0u;
    SET_GPR_U32(ctx, 31, 0x353CD8u);
    ctx->pc = 0x354ACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354ACCu, 0x353CD0u, 0x353CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CD8u;
label_353cd8:
    // 0x353cd8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353cd8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cdc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353cdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353ce0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353ce4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x353CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353CF0u;
}
