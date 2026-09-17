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

// Function: sub_00100ED8
// Address: 0x100ed8 - 0x100f68
void sub_00100ED8_0x100ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100ED8_0x100ed8");
#endif

    switch (ctx->pc) {
        case 0x100f30u: goto label_100f30;
        case 0x100f40u: goto label_100f40;
        case 0x100f50u: goto label_100f50;
        case 0x100f58u: goto label_100f58;
        default: break;
    }

    ctx->pc = 0x100ed8u;

    // 0x100ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100edc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x100edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x100ee0: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x100EE0u;
    {
        const bool branch_taken_0x100ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x100EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EE0u;
        // 0x100ee4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ee0) {
            ctx->pc = 0x100F28u;
            goto label_100f28;
        }
    }
    ctx->pc = 0x100EE8u;
    // 0x100ee8: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x100ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x100eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100EECu;
    {
        const bool branch_taken_0x100eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EECu;
        // 0x100ef0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100eec) {
            ctx->pc = 0x100F08u;
            goto label_100f08;
        }
    }
    ctx->pc = 0x100EF4u;
    // 0x100ef4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x100ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100ef8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100EF8u;
    {
        const bool branch_taken_0x100ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x100EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EF8u;
        // 0x100efc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ef8) {
            ctx->pc = 0x100F18u;
            goto label_100f18;
        }
    }
    ctx->pc = 0x100F00u;
    // 0x100f00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x100F00u;
    {
        const bool branch_taken_0x100f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f00) {
            ctx->pc = 0x100F48u;
            goto label_100f48;
        }
    }
    ctx->pc = 0x100F08u;
label_100f08:
    // 0x100f08: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100F08u;
    {
        const bool branch_taken_0x100f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x100f08) {
            ctx->pc = 0x100F28u;
            goto label_100f28;
        }
    }
    ctx->pc = 0x100F10u;
    // 0x100f10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x100F10u;
    {
        const bool branch_taken_0x100f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f10) {
            ctx->pc = 0x100F48u;
            goto label_100f48;
        }
    }
    ctx->pc = 0x100F18u;
label_100f18:
    // 0x100f18: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x100f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x100f1c: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x100f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935488)));
    // 0x100f20: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100F20u;
    {
        const bool branch_taken_0x100f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x100f20) {
            ctx->pc = 0x100F38u;
            goto label_100f38;
        }
    }
    ctx->pc = 0x100F28u;
label_100f28:
    // 0x100f28: 0xc040192  jal         func_100648
    ctx->pc = 0x100F28u;
    SET_GPR_U32(ctx, 31, 0x100F30u);
    ctx->pc = 0x100648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100648u, 0x100F28u, 0x100F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F30u;
label_100f30:
    // 0x100f30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100F30u;
    {
        const bool branch_taken_0x100f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f30) {
            ctx->pc = 0x100F50u;
            goto label_100f50;
        }
    }
    ctx->pc = 0x100F38u;
label_100f38:
    // 0x100f38: 0xc04017a  jal         func_1005E8
    ctx->pc = 0x100F38u;
    SET_GPR_U32(ctx, 31, 0x100F40u);
    ctx->pc = 0x1005E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E8u, 0x100F38u, 0x100F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F40u;
label_100f40:
    // 0x100f40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100F40u;
    {
        const bool branch_taken_0x100f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f40) {
            ctx->pc = 0x100F50u;
            goto label_100f50;
        }
    }
    ctx->pc = 0x100F48u;
label_100f48:
    // 0x100f48: 0xc04017a  jal         func_1005E8
    ctx->pc = 0x100F48u;
    SET_GPR_U32(ctx, 31, 0x100F50u);
    ctx->pc = 0x1005E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E8u, 0x100F48u, 0x100F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F50u;
label_100f50:
    // 0x100f50: 0xc04034a  jal         func_100D28
    ctx->pc = 0x100F50u;
    SET_GPR_U32(ctx, 31, 0x100F58u);
    ctx->pc = 0x100D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100D28u, 0x100F50u, 0x100F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F58u;
label_100f58:
    // 0x100f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x100F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F5Cu;
        // 0x100f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100F64u;
    // 0x100f64: 0x0  nop
    ctx->pc = 0x100f64u;
    // NOP
    ctx->pc = 0x100f68u;
}
