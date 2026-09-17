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

// Function: sub_00343D80
// Address: 0x343d80 - 0x343df0
void sub_00343D80_0x343d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343D80_0x343d80");
#endif

    switch (ctx->pc) {
        case 0x343da8u: goto label_343da8;
        case 0x343dc8u: goto label_343dc8;
        default: break;
    }

    ctx->pc = 0x343d80u;

    // 0x343d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x343d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x343d84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x343d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x343d88: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x343d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x343d8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x343d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x343d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x343d94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x343d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x343d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x343d9c: 0x94460008  lhu         $a2, 0x8($v0)
    ctx->pc = 0x343d9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x343da0: 0xc0ce6f8  jal         func_339BE0
    ctx->pc = 0x343DA0u;
    SET_GPR_U32(ctx, 31, 0x343DA8u);
    ctx->pc = 0x343DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DA0u;
    // 0x343da4: 0x94450006  lhu         $a1, 0x6($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339BE0u, 0x343DA0u, 0x343DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DA8u;
label_343da8:
    // 0x343da8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x343da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x343dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x343db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343db4: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x343DB4u;
    {
        const bool branch_taken_0x343db4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x343DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DB4u;
        // 0x343db8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343db4) {
            ctx->pc = 0x343DD8u;
            goto label_343dd8;
        }
    }
    ctx->pc = 0x343DBCu;
    // 0x343dbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x343dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x343dc0: 0xc0cf25c  jal         func_33C970
    ctx->pc = 0x343DC0u;
    SET_GPR_U32(ctx, 31, 0x343DC8u);
    ctx->pc = 0x343DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DC0u;
    // 0x343dc4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x343DC0u, 0x343DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DC8u;
label_343dc8:
    // 0x343dc8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x343dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x343dcc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x343dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343dd4: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x343dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
label_343dd8:
    // 0x343dd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x343dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343ddc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x343ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343de0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x343de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343de4: 0x3e00008  jr          $ra
    ctx->pc = 0x343DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DE4u;
        // 0x343de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343DECu;
    // 0x343dec: 0x0  nop
    ctx->pc = 0x343decu;
    // NOP
    ctx->pc = 0x343df0u;
}
