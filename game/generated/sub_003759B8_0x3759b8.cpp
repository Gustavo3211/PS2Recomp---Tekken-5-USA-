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

// Function: sub_003759B8
// Address: 0x3759b8 - 0x375a38
void sub_003759B8_0x3759b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003759B8_0x3759b8");
#endif

    switch (ctx->pc) {
        case 0x3759e8u: goto label_3759e8;
        default: break;
    }

    ctx->pc = 0x3759b8u;

    // 0x3759b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3759b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3759bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3759bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3759c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3759c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3759c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3759c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759c8: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x3759c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x3759cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3759ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3759d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3759d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3759d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3759d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3759d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3759dc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3759dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3759e0: 0xc0cd388  jal         func_334E20
    ctx->pc = 0x3759E0u;
    SET_GPR_U32(ctx, 31, 0x3759E8u);
    ctx->pc = 0x3759E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3759E0u;
    // 0x3759e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E20u, 0x3759E0u, 0x3759E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759E8u;
label_3759e8:
    // 0x3759e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3759E8u;
    {
        const bool branch_taken_0x3759e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3759ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3759E8u;
        // 0x3759ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3759e8) {
            ctx->pc = 0x375A08u;
            goto label_375a08;
        }
    }
    ctx->pc = 0x3759F0u;
    // 0x3759f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3759f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3759f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3759f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3759f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3759f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3759fc: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3759FCu;
    ctx->pc = 0x375A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3759FCu;
    // 0x375a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375A04u;
    // 0x375a04: 0x0  nop
    ctx->pc = 0x375a04u;
    // NOP
label_375a08:
    // 0x375a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375a0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375a14: 0x3e00008  jr          $ra
    ctx->pc = 0x375A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A14u;
        // 0x375a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375A1Cu;
    // 0x375a1c: 0x0  nop
    ctx->pc = 0x375a1cu;
    // NOP
    // 0x375a20: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x375a24: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x375a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x375a28: 0x24632360  addiu       $v1, $v1, 0x2360
    ctx->pc = 0x375a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9056));
    // 0x375a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x375A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A2Cu;
        // 0x375a30: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375A34u;
    // 0x375a34: 0x0  nop
    ctx->pc = 0x375a34u;
    // NOP
    ctx->pc = 0x375a38u;
}
