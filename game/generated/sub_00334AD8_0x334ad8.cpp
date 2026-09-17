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

// Function: sub_00334AD8
// Address: 0x334ad8 - 0x334b58
void sub_00334AD8_0x334ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334AD8_0x334ad8");
#endif

    ctx->pc = 0x334ad8u;

    // 0x334ad8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x334ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334adc: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x334adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x334ae0: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x334ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x334ae4: 0xdd070408  ld          $a3, 0x408($t0)
    ctx->pc = 0x334ae4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 1032)));
    // 0x334ae8: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x334ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x334aec: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x334AECu;
    {
        const bool branch_taken_0x334aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x334AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AECu;
        // 0x334af0: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334aec) {
            ctx->pc = 0x334B4Cu;
            goto label_334b4c;
        }
    }
    ctx->pc = 0x334AF4u;
    // 0x334af4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x334af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x334af8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x334af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x334afc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x334afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x334b00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x334b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x334b04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x334b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x334b08: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x334b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x334b0c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x334b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x334b10: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x334b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x334b14: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x334b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x334b18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x334b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x334b1c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x334b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x334b20: 0x34843c10  ori         $a0, $a0, 0x3C10
    ctx->pc = 0x334b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15376);
    // 0x334b24: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x334b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x334b28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x334b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x334b2c: 0xfd020408  sd          $v0, 0x408($t0)
    ctx->pc = 0x334b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 1032), GPR_U64(ctx, 2));
    // 0x334b30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x334b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x334b34: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x334b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x334b38: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x334b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x334b3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x334b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u)); // MMIO: 0x1000a000
    // 0x334b40: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x334b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x334b44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334b44u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 2)); // MMIO: 0x1000a000
    // 0x334b48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x334b48u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u)); // MMIO: 0x1000a000
label_334b4c:
    // 0x334b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x334B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334B54u;
    // 0x334b54: 0x0  nop
    ctx->pc = 0x334b54u;
    // NOP
    ctx->pc = 0x334b58u;
}
