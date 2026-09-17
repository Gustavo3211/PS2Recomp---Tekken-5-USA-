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

// Function: sub_00239AE0
// Address: 0x239ae0 - 0x239b40
void sub_00239AE0_0x239ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239AE0_0x239ae0");
#endif

    switch (ctx->pc) {
        case 0x239b00u: goto label_239b00;
        case 0x239b0cu: goto label_239b0c;
        default: break;
    }

    ctx->pc = 0x239ae0u;

    // 0x239ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239ae4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x239ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x239ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239aec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x239aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239af4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x239af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239af8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239afc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239b00:
    // 0x239b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b04: 0xc08e6a8  jal         func_239AA0
    ctx->pc = 0x239B04u;
    SET_GPR_U32(ctx, 31, 0x239B0Cu);
    ctx->pc = 0x239B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B04u;
    // 0x239b08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239AA0u, 0x239B04u, 0x239B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B0Cu;
label_239b0c:
    // 0x239b0c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x239b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x239b10: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x239b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x239b14: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x239b14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x239b18: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x239B18u;
    {
        const bool branch_taken_0x239b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x239B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B18u;
        // 0x239b1c: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b18) {
            ctx->pc = 0x239B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239b00;
        }
    }
    ctx->pc = 0x239B20u;
    // 0x239b20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x239b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239b2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239b2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239b30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x239b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239b34: 0x3e00008  jr          $ra
    ctx->pc = 0x239B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B34u;
        // 0x239b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239B3Cu;
    // 0x239b3c: 0x0  nop
    ctx->pc = 0x239b3cu;
    // NOP
    ctx->pc = 0x239b40u;
}
