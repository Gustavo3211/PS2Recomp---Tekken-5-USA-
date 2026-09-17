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

// Function: sub_00334450
// Address: 0x334450 - 0x3344e0
void sub_00334450_0x334450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334450_0x334450");
#endif

    switch (ctx->pc) {
        case 0x33447cu: goto label_33447c;
        case 0x334488u: goto label_334488;
        case 0x3344c0u: goto label_3344c0;
        default: break;
    }

    ctx->pc = 0x334450u;

    // 0x334450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334458: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x334458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x33445c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334460: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x334460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334464: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x334464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x334468: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x334468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33446c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334470: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x334470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x334474: 0xc043fd4  jal         func_10FF50
    ctx->pc = 0x334474u;
    SET_GPR_U32(ctx, 31, 0x33447Cu);
    ctx->pc = 0x334478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334474u;
    // 0x334478: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF50u, 0x334474u, 0x33447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33447Cu;
label_33447c:
    // 0x33447c: 0x8e030404  lw          $v1, 0x404($s0)
    ctx->pc = 0x33447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x334480: 0x5860000b  blezl       $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x334480u;
    {
        const bool branch_taken_0x334480 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x334480) {
            ctx->pc = 0x334484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334480u;
            // 0x334484: 0x2231826  xor         $v1, $s1, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3344B0u;
            goto label_3344b0;
        }
    }
    ctx->pc = 0x334488u;
label_334488:
    // 0x334488: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x334488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33448c: 0x50520008  beql        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x33448Cu;
    {
        const bool branch_taken_0x33448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x33448c) {
            ctx->pc = 0x334490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33448Cu;
            // 0x334490: 0x2231826  xor         $v1, $s1, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3344B0u;
            goto label_3344b0;
        }
    }
    ctx->pc = 0x334494u;
    // 0x334494: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x334494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x334498: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x334498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33449c: 0x0  nop
    ctx->pc = 0x33449cu;
    // NOP
    // 0x3344a0: 0x0  nop
    ctx->pc = 0x3344a0u;
    // NOP
    // 0x3344a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3344A4u;
    {
        const bool branch_taken_0x3344a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3344A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344A4u;
        // 0x3344a8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344a4) {
            ctx->pc = 0x334488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334488;
        }
    }
    ctx->pc = 0x3344ACu;
    // 0x3344ac: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x3344acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
label_3344b0:
    // 0x3344b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3344b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3344b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3344b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3344b8: 0xc043fee  jal         func_10FFB8
    ctx->pc = 0x3344B8u;
    SET_GPR_U32(ctx, 31, 0x3344C0u);
    ctx->pc = 0x3344BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3344B8u;
    // 0x3344bc: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFB8u, 0x3344B8u, 0x3344C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3344C0u;
label_3344c0:
    // 0x3344c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3344c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3344c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3344c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3344c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3344c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3344cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3344ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3344d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3344d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3344d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3344D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3344D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344D4u;
        // 0x3344d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3344D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3344DCu;
    // 0x3344dc: 0x0  nop
    ctx->pc = 0x3344dcu;
    // NOP
    ctx->pc = 0x3344e0u;
}
