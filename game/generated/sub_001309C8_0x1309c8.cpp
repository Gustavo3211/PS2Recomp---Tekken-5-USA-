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

// Function: sub_001309C8
// Address: 0x1309c8 - 0x130a30
void sub_001309C8_0x1309c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001309C8_0x1309c8");
#endif

    switch (ctx->pc) {
        case 0x1309f8u: goto label_1309f8;
        default: break;
    }

    ctx->pc = 0x1309c8u;

    // 0x1309c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1309c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1309cc: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1309ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1309d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1309d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1309d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1309d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309d8: 0x24424c98  addiu       $v0, $v0, 0x4C98
    ctx->pc = 0x1309d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19608));
    // 0x1309dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1309dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1309e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1309e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1309e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1309e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309e8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1309e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1309ec: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1309ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1309f0: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x1309F0u;
    SET_GPR_U32(ctx, 31, 0x1309F8u);
    ctx->pc = 0x1309F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309F0u;
    // 0x1309f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x1309F0u, 0x1309F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309F8u;
label_1309f8:
    // 0x1309f8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1309F8u;
    {
        const bool branch_taken_0x1309f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309F8u;
        // 0x1309fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309f8) {
            ctx->pc = 0x130A18u;
            goto label_130a18;
        }
    }
    ctx->pc = 0x130A00u;
    // 0x130a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130a0c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x130A0Cu;
    ctx->pc = 0x130A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A0Cu;
    // 0x130a10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x130A14u;
    // 0x130a14: 0x0  nop
    ctx->pc = 0x130a14u;
    // NOP
label_130a18:
    // 0x130a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130a24: 0x3e00008  jr          $ra
    ctx->pc = 0x130A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A24u;
        // 0x130a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130A2Cu;
    // 0x130a2c: 0x0  nop
    ctx->pc = 0x130a2cu;
    // NOP
    ctx->pc = 0x130a30u;
}
