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

// Function: sub_0012FD20
// Address: 0x12fd20 - 0x12fd88
void sub_0012FD20_0x12fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FD20_0x12fd20");
#endif

    switch (ctx->pc) {
        case 0x12fd44u: goto label_12fd44;
        default: break;
    }

    ctx->pc = 0x12fd20u;

    // 0x12fd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fd24: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12fd24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fd2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12fd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12fd34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12fd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd38: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12fd3c: 0xc04bfde  jal         func_12FF78
    ctx->pc = 0x12FD3Cu;
    SET_GPR_U32(ctx, 31, 0x12FD44u);
    ctx->pc = 0x12FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD3Cu;
    // 0x12fd40: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF78u, 0x12FD3Cu, 0x12FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD44u;
label_12fd44:
    // 0x12fd44: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12fd48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12fd48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd4c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x12fd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12fd50: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12fd50u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12fd54: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FD54u;
    {
        const bool branch_taken_0x12fd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD54u;
        // 0x12fd58: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd54) {
            ctx->pc = 0x12FD68u;
            goto label_12fd68;
        }
    }
    ctx->pc = 0x12FD5Cu;
    // 0x12fd5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12FD5Cu;
    {
        const bool branch_taken_0x12fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD5Cu;
        // 0x12fd60: 0x3063efff  andi        $v1, $v1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd5c) {
            ctx->pc = 0x12FD70u;
            goto label_12fd70;
        }
    }
    ctx->pc = 0x12FD64u;
    // 0x12fd64: 0x0  nop
    ctx->pc = 0x12fd64u;
    // NOP
label_12fd68:
    // 0x12fd68: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x12fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x12fd6c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x12fd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_12fd70:
    // 0x12fd70: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x12fd70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fd74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fd78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12fd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD7Cu;
        // 0x12fd80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FD84u;
    // 0x12fd84: 0x0  nop
    ctx->pc = 0x12fd84u;
    // NOP
    ctx->pc = 0x12fd88u;
}
