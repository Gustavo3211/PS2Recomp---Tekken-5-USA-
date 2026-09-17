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

// Function: sub_00375AB8
// Address: 0x375ab8 - 0x375b38
void sub_00375AB8_0x375ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375AB8_0x375ab8");
#endif

    switch (ctx->pc) {
        case 0x375ae8u: goto label_375ae8;
        default: break;
    }

    ctx->pc = 0x375ab8u;

    // 0x375ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375abc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375ac0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x375ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x375ac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ac8: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x375ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
    // 0x375acc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x375ad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375ad4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x375ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ad8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x375ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x375adc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x375adcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x375ae0: 0xc0cd388  jal         func_334E20
    ctx->pc = 0x375AE0u;
    SET_GPR_U32(ctx, 31, 0x375AE8u);
    ctx->pc = 0x375AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375AE0u;
    // 0x375ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E20u, 0x375AE0u, 0x375AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375AE8u;
label_375ae8:
    // 0x375ae8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x375AE8u;
    {
        const bool branch_taken_0x375ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x375AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375AE8u;
        // 0x375aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375ae8) {
            ctx->pc = 0x375B08u;
            goto label_375b08;
        }
    }
    ctx->pc = 0x375AF0u;
    // 0x375af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375af4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375af8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375afc: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375AFCu;
    ctx->pc = 0x375B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375AFCu;
    // 0x375b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375B04u;
    // 0x375b04: 0x0  nop
    ctx->pc = 0x375b04u;
    // NOP
label_375b08:
    // 0x375b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375b14: 0x3e00008  jr          $ra
    ctx->pc = 0x375B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B14u;
        // 0x375b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375B1Cu;
    // 0x375b1c: 0x0  nop
    ctx->pc = 0x375b1cu;
    // NOP
    // 0x375b20: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x375b24: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x375b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x375b28: 0x246323f0  addiu       $v1, $v1, 0x23F0
    ctx->pc = 0x375b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9200));
    // 0x375b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x375B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B2Cu;
        // 0x375b30: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375B34u;
    // 0x375b34: 0x0  nop
    ctx->pc = 0x375b34u;
    // NOP
    ctx->pc = 0x375b38u;
}
