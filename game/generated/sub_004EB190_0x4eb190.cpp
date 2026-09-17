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

// Function: sub_004EB190
// Address: 0x4eb190 - 0x4eb1f8
void sub_004EB190_0x4eb190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB190_0x4eb190");
#endif

    switch (ctx->pc) {
        case 0x4eb1e0u: goto label_4eb1e0;
        default: break;
    }

    ctx->pc = 0x4eb190u;

    // 0x4eb190: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4eb190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4eb194: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eb194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eb198: 0x8c431208  lw          $v1, 0x1208($v0)
    ctx->pc = 0x4eb198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4eb19c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4eb19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4eb1a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eb1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eb1a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eb1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb1a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4eb1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4eb1ac: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x4eb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x4eb1b0: 0x240704b6  addiu       $a3, $zero, 0x4B6
    ctx->pc = 0x4eb1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1206));
    // 0x4eb1b4: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x4eb1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4eb1b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4eb1b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4eb1bc: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4eb1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4eb1c0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x4eb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4eb1c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4eb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4eb1c8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4eb1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eb1cc: 0xa6060160  sh          $a2, 0x160($s0)
    ctx->pc = 0x4eb1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 6));
    // 0x4eb1d0: 0xa607000c  sh          $a3, 0xC($s0)
    ctx->pc = 0x4eb1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x4eb1d4: 0xa608014a  sh          $t0, 0x14A($s0)
    ctx->pc = 0x4eb1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 8));
    // 0x4eb1d8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4EB1D8u;
    SET_GPR_U32(ctx, 31, 0x4EB1E0u);
    ctx->pc = 0x4EB1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB1D8u;
    // 0x4eb1dc: 0xa4a4fa44  sh          $a0, -0x5BC($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294965828), (uint16_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4EB1D8u, 0x4EB1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB1E0u;
label_4eb1e0:
    // 0x4eb1e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4eb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4eb1e4: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4eb1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eb1e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4eb1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eb1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eb1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB1F0u;
        // 0x4eb1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB1F8u;
}
