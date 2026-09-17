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

// Function: sub_002FBAD8
// Address: 0x2fbad8 - 0x2fbb68
void sub_002FBAD8_0x2fbad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBAD8_0x2fbad8");
#endif

    switch (ctx->pc) {
        case 0x2fbb10u: goto label_2fbb10;
        case 0x2fbb24u: goto label_2fbb24;
        case 0x2fbb48u: goto label_2fbb48;
        case 0x2fbb50u: goto label_2fbb50;
        default: break;
    }

    ctx->pc = 0x2fbad8u;

    // 0x2fbad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fbadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fbae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fbae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fbae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fbae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fbaec: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2fbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fbaf0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FBAF0u;
    {
        const bool branch_taken_0x2fbaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbaf0) {
            ctx->pc = 0x2FBAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBAF0u;
            // 0x2fbaf4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB38u;
            goto label_2fbb38;
        }
    }
    ctx->pc = 0x2FBAF8u;
    // 0x2fbaf8: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2fbaf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2fbafc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FBAFCu;
    {
        const bool branch_taken_0x2fbafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAFCu;
        // 0x2fbb00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbafc) {
            ctx->pc = 0x2FBB34u;
            goto label_2fbb34;
        }
    }
    ctx->pc = 0x2FBB04u;
    // 0x2fbb04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBB04u;
    {
        const bool branch_taken_0x2fbb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB04u;
        // 0x2fbb08: 0x112180  sll         $a0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb04) {
            ctx->pc = 0x2FBB18u;
            goto label_2fbb18;
        }
    }
    ctx->pc = 0x2FBB0Cu;
    // 0x2fbb0c: 0x0  nop
    ctx->pc = 0x2fbb0cu;
    // NOP
label_2fbb10:
    // 0x2fbb10: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x2fbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2fbb14: 0x0  nop
    ctx->pc = 0x2fbb14u;
    // NOP
label_2fbb18:
    // 0x2fbb18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fbb18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2fbb1c: 0xc0beb02  jal         func_2FAC08
    ctx->pc = 0x2FBB1Cu;
    SET_GPR_U32(ctx, 31, 0x2FBB24u);
    ctx->pc = 0x2FBB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB1Cu;
    // 0x2fbb20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC08u, 0x2FBB1Cu, 0x2FBB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB24u;
label_2fbb24:
    // 0x2fbb24: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2fbb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2fbb28: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2fbb28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fbb2c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2FBB2Cu;
    {
        const bool branch_taken_0x2fbb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbb2c) {
            ctx->pc = 0x2FBB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBB2Cu;
            // 0x2fbb30: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbb10;
        }
    }
    ctx->pc = 0x2FBB34u;
label_2fbb34:
    // 0x2fbb34: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2fbb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2fbb38:
    // 0x2fbb38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBB38u;
    {
        const bool branch_taken_0x2fbb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbb38) {
            ctx->pc = 0x2FBB48u;
            goto label_2fbb48;
        }
    }
    ctx->pc = 0x2FBB40u;
    // 0x2fbb40: 0xc0bf3be  jal         func_2FCEF8
    ctx->pc = 0x2FBB40u;
    SET_GPR_U32(ctx, 31, 0x2FBB48u);
    ctx->pc = 0x2FCEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCEF8u, 0x2FBB40u, 0x2FBB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB48u;
label_2fbb48:
    // 0x2fbb48: 0xc0beeda  jal         func_2FBB68
    ctx->pc = 0x2FBB48u;
    SET_GPR_U32(ctx, 31, 0x2FBB50u);
    ctx->pc = 0x2FBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB48u;
    // 0x2fbb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB68u, 0x2FBB48u, 0x2FBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB50u;
label_2fbb50:
    // 0x2fbb50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fbb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbb54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fbb54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbb58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fbb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB5Cu;
        // 0x2fbb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBB64u;
    // 0x2fbb64: 0x0  nop
    ctx->pc = 0x2fbb64u;
    // NOP
    ctx->pc = 0x2fbb68u;
}
