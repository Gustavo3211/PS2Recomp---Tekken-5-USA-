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

// Function: sub_00353CF0
// Address: 0x353cf0 - 0x353d8c
void sub_00353CF0_0x353cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353CF0_0x353cf0");
#endif

    switch (ctx->pc) {
        case 0x353d0cu: goto label_353d0c;
        case 0x353d40u: goto label_353d40;
        case 0x353d6cu: goto label_353d6c;
        default: break;
    }

    ctx->pc = 0x353cf0u;

    // 0x353cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353cf4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x353cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x353cf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x353cfc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353cfcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d00: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353d00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353d04: 0xc0d5025  jal         func_354094
    ctx->pc = 0x353D04u;
    SET_GPR_U32(ctx, 31, 0x353D0Cu);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x353D04u, 0x353D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D0Cu;
label_353d0c:
    // 0x353d0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353D0Cu;
    {
        const bool branch_taken_0x353d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353d0c) {
            ctx->pc = 0x353D24u;
            goto label_353d24;
        }
    }
    ctx->pc = 0x353D14u;
    // 0x353d14: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353d18: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x353d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x353d1c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x353D1Cu;
    {
        const bool branch_taken_0x353d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d1c) {
            ctx->pc = 0x353D74u;
            goto label_353d74;
        }
    }
    ctx->pc = 0x353D24u;
label_353d24:
    // 0x353d24: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x353d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x353d28: 0x27c3000c  addiu       $v1, $fp, 0xC
    ctx->pc = 0x353d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x353d2c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x353d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353d30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x353d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d34: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x353d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d38: 0xc0d4f63  jal         func_353D8C
    ctx->pc = 0x353D38u;
    SET_GPR_U32(ctx, 31, 0x353D40u);
    ctx->pc = 0x353D8Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353D8Cu, 0x353D38u, 0x353D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D40u;
label_353d40:
    // 0x353d40: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353d40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x353d44: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353d48: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353D48u;
    {
        const bool branch_taken_0x353d48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x353d48) {
            ctx->pc = 0x353D5Cu;
            goto label_353d5c;
        }
    }
    ctx->pc = 0x353D50u;
    // 0x353d50: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353d54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x353D54u;
    {
        const bool branch_taken_0x353d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d54) {
            ctx->pc = 0x353D74u;
            goto label_353d74;
        }
    }
    ctx->pc = 0x353D5Cu;
label_353d5c:
    // 0x353d5c: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x353d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x353d60: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x353d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353d64: 0xc0d5ee3  jal         func_357B8C
    ctx->pc = 0x353D64u;
    SET_GPR_U32(ctx, 31, 0x353D6Cu);
    ctx->pc = 0x357B8Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357B8Cu, 0x353D64u, 0x353D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D6Cu;
label_353d6c:
    // 0x353d6c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x353d70: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_353d74:
    // 0x353d74: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353d74u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d78: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353d78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353d7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353d80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353d84: 0x3e00008  jr          $ra
    ctx->pc = 0x353D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353D8Cu;
}
