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

// Function: sub_00122038
// Address: 0x122038 - 0x1220a0
void sub_00122038_0x122038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122038_0x122038");
#endif

    switch (ctx->pc) {
        case 0x122078u: goto label_122078;
        default: break;
    }

    ctx->pc = 0x122038u;

    // 0x122038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12203c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x12203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x122040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122044: 0x2447fbe0  addiu       $a3, $v0, -0x420
    ctx->pc = 0x122044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x122048: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12204c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x122050: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x122050u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1EFBE0u));
    // 0x122054: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x122054u;
    {
        const bool branch_taken_0x122054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x122058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122054u;
        // 0x122058: 0x3c11001f  lui         $s1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122054) {
            ctx->pc = 0x122084u;
            goto label_122084;
        }
    }
    ctx->pc = 0x12205Cu;
    // 0x12205c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122060: 0x2630fb00  addiu       $s0, $s1, -0x500
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966016));
    // 0x122064: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x122064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x122068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12206c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12206cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122070: 0xc04a151  jal         func_128544
    ctx->pc = 0x122070u;
    SET_GPR_U32(ctx, 31, 0x122078u);
    ctx->pc = 0x122074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122070u;
    // 0x122074: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x122070u, 0x122078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122078u;
label_122078:
    // 0x122078: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x122078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x12207c: 0x2463fbe8  addiu       $v1, $v1, -0x418
    ctx->pc = 0x12207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966248));
    // 0x122080: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x122080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_122084:
    // 0x122084: 0x2622fb00  addiu       $v0, $s1, -0x500
    ctx->pc = 0x122084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966016));
    // 0x122088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12208c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12208cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x122090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122094: 0x3e00008  jr          $ra
    ctx->pc = 0x122094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122094u;
        // 0x122098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12209Cu;
    // 0x12209c: 0x0  nop
    ctx->pc = 0x12209cu;
    // NOP
    ctx->pc = 0x1220a0u;
}
