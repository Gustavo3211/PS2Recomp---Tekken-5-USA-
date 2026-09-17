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

// Function: sub_00343DF0
// Address: 0x343df0 - 0x343e60
void sub_00343DF0_0x343df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343DF0_0x343df0");
#endif

    switch (ctx->pc) {
        case 0x343e1cu: goto label_343e1c;
        case 0x343e30u: goto label_343e30;
        default: break;
    }

    ctx->pc = 0x343df0u;

    // 0x343df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x343df4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x343df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x343df8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x343df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x343dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x343e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x343e04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x343e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x343e08: 0x94650020  lhu         $a1, 0x20($v1)
    ctx->pc = 0x343e08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x343e0c: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x343E0Cu;
    {
        const bool branch_taken_0x343e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x343E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E0Cu;
        // 0x343e10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e0c) {
            ctx->pc = 0x343E20u;
            goto label_343e20;
        }
    }
    ctx->pc = 0x343E14u;
    // 0x343e14: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x343E14u;
    SET_GPR_U32(ctx, 31, 0x343E1Cu);
    ctx->pc = 0x343E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E14u;
    // 0x343e18: 0x52942  srl         $a1, $a1, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x343E14u, 0x343E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E1Cu;
label_343e1c:
    // 0x343e1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x343e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_343e20:
    // 0x343e20: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x343e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x343e24: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x343e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x343e28: 0xc0cf25c  jal         func_33C970
    ctx->pc = 0x343E28u;
    SET_GPR_U32(ctx, 31, 0x343E30u);
    ctx->pc = 0x343E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E28u;
    // 0x343e2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x343E28u, 0x343E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E30u;
label_343e30:
    // 0x343e30: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x343e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x343e34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x343e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343e38: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x343e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x343e3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x343e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343e40: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x343e40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x343e44: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x343e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x343e48: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x343e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x343e4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x343e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x343e50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x343e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343e54: 0x3e00008  jr          $ra
    ctx->pc = 0x343E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E54u;
        // 0x343e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343E5Cu;
    // 0x343e5c: 0x0  nop
    ctx->pc = 0x343e5cu;
    // NOP
    ctx->pc = 0x343e60u;
}
