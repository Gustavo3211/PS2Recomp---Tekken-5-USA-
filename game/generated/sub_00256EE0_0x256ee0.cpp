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

// Function: sub_00256EE0
// Address: 0x256ee0 - 0x256f70
void sub_00256EE0_0x256ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256EE0_0x256ee0");
#endif

    switch (ctx->pc) {
        case 0x256efcu: goto label_256efc;
        case 0x256f08u: goto label_256f08;
        case 0x256f14u: goto label_256f14;
        case 0x256f30u: goto label_256f30;
        default: break;
    }

    ctx->pc = 0x256ee0u;

    // 0x256ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256ee8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x256ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x256eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x256ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256ef4: 0xc095b82  jal         func_256E08
    ctx->pc = 0x256EF4u;
    SET_GPR_U32(ctx, 31, 0x256EFCu);
    ctx->pc = 0x256EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256EF4u;
    // 0x256ef8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256E08u, 0x256EF4u, 0x256EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256EFCu;
label_256efc:
    // 0x256efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f00: 0xc095bdc  jal         func_256F70
    ctx->pc = 0x256F00u;
    SET_GPR_U32(ctx, 31, 0x256F08u);
    ctx->pc = 0x256F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F00u;
    // 0x256f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F70u, 0x256F00u, 0x256F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F08u;
label_256f08:
    // 0x256f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f0c: 0xc095b4e  jal         func_256D38
    ctx->pc = 0x256F0Cu;
    SET_GPR_U32(ctx, 31, 0x256F14u);
    ctx->pc = 0x256F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F0Cu;
    // 0x256f10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256D38u, 0x256F0Cu, 0x256F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F14u;
label_256f14:
    // 0x256f14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x256f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f18: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x256f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x256f1c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x256f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256f20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x256f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x256f24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256f28: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x256f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x256f2c: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x256f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_256f30:
    // 0x256f30: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x256f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x256f34: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x256f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x256f38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x256f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256f3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x256f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256f40: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x256f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x256f44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256f48: 0x78820140  lq          $v0, 0x140($a0)
    ctx->pc = 0x256f48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x256f4c: 0x28e50019  slti        $a1, $a3, 0x19
    ctx->pc = 0x256f4cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x256f50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x256f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x256f54: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x256F54u;
    {
        const bool branch_taken_0x256f54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x256F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F54u;
        // 0x256f58: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f54) {
            ctx->pc = 0x256F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256f30;
        }
    }
    ctx->pc = 0x256F5Cu;
    // 0x256f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x256f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256f68: 0x3e00008  jr          $ra
    ctx->pc = 0x256F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F68u;
        // 0x256f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256F70u;
}
