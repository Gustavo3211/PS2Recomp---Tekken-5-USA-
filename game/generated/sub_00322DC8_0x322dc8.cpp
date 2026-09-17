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

// Function: sub_00322DC8
// Address: 0x322dc8 - 0x322e68
void sub_00322DC8_0x322dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322DC8_0x322dc8");
#endif

    switch (ctx->pc) {
        case 0x322e04u: goto label_322e04;
        case 0x322e28u: goto label_322e28;
        case 0x322e48u: goto label_322e48;
        case 0x322e54u: goto label_322e54;
        default: break;
    }

    ctx->pc = 0x322dc8u;

    // 0x322dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322dd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x322dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322de0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x322de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x322de4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x322DE4u;
    {
        const bool branch_taken_0x322de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x322DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DE4u;
        // 0x322de8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322de4) {
            ctx->pc = 0x322E40u;
            goto label_322e40;
        }
    }
    ctx->pc = 0x322DECu;
    // 0x322dec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x322DECu;
    {
        const bool branch_taken_0x322dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DECu;
        // 0x322df0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322dec) {
            ctx->pc = 0x322E20u;
            goto label_322e20;
        }
    }
    ctx->pc = 0x322DF4u;
    // 0x322df4: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x322DF4u;
    {
        const bool branch_taken_0x322df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322df4) {
            ctx->pc = 0x322DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322DF4u;
            // 0x322df8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322E58u;
            goto label_322e58;
        }
    }
    ctx->pc = 0x322DFCu;
    // 0x322dfc: 0xc0c8b9a  jal         func_322E68
    ctx->pc = 0x322DFCu;
    SET_GPR_U32(ctx, 31, 0x322E04u);
    ctx->pc = 0x322E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E68u, 0x322DFCu, 0x322E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E04u;
label_322e04:
    // 0x322e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e08: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x322e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x322e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322e18: 0x80c8c10  j           func_323040
    ctx->pc = 0x322E18u;
    ctx->pc = 0x322E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E18u;
    // 0x322e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323040u, 0x322E18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x322E20u;
label_322e20:
    // 0x322e20: 0xc0c8b9a  jal         func_322E68
    ctx->pc = 0x322E20u;
    SET_GPR_U32(ctx, 31, 0x322E28u);
    ctx->pc = 0x322E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E68u, 0x322E20u, 0x322E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E28u;
label_322e28:
    // 0x322e28: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x322e28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322e2c: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x322e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x322e30: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x322e30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x322e34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x322E34u;
    {
        const bool branch_taken_0x322e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E34u;
        // 0x322e38: 0x7e020040  sq          $v0, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e34) {
            ctx->pc = 0x322E54u;
            goto label_322e54;
        }
    }
    ctx->pc = 0x322E3Cu;
    // 0x322e3c: 0x0  nop
    ctx->pc = 0x322e3cu;
    // NOP
label_322e40:
    // 0x322e40: 0xc0c8b9a  jal         func_322E68
    ctx->pc = 0x322E40u;
    SET_GPR_U32(ctx, 31, 0x322E48u);
    ctx->pc = 0x322E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E68u, 0x322E40u, 0x322E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E48u;
label_322e48:
    // 0x322e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e4c: 0xc0c8bd2  jal         func_322F48
    ctx->pc = 0x322E4Cu;
    SET_GPR_U32(ctx, 31, 0x322E54u);
    ctx->pc = 0x322E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E4Cu;
    // 0x322e50: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F48u, 0x322E4Cu, 0x322E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E54u;
label_322e54:
    // 0x322e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322e58:
    // 0x322e58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322e60: 0x3e00008  jr          $ra
    ctx->pc = 0x322E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E60u;
        // 0x322e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322E68u;
}
