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

// Function: sub_002EB988
// Address: 0x2eb988 - 0x2eb9e8
void sub_002EB988_0x2eb988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB988_0x2eb988");
#endif

    switch (ctx->pc) {
        case 0x2eb9a4u: goto label_2eb9a4;
        default: break;
    }

    ctx->pc = 0x2eb988u;

    // 0x2eb988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eb998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eb998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eb99c: 0xc0badd4  jal         func_2EB750
    ctx->pc = 0x2EB99Cu;
    SET_GPR_U32(ctx, 31, 0x2EB9A4u);
    ctx->pc = 0x2EB9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB99Cu;
    // 0x2eb9a0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB750u, 0x2EB99Cu, 0x2EB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9A4u;
label_2eb9a4:
    // 0x2eb9a4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eb9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eb9a8: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x2eb9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2eb9ac: 0x2463f340  addiu       $v1, $v1, -0xCC0
    ctx->pc = 0x2eb9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964032));
    // 0x2eb9b0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2eb9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2eb9b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2eb9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2eb9b8: 0x24840738  addiu       $a0, $a0, 0x738
    ctx->pc = 0x2eb9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1848));
    // 0x2eb9bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2eb9c0: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x2eb9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x2eb9c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eb9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb9c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2eb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2eb9cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb9ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb9d0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2eb9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2eb9d4: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2eb9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x2eb9d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9DCu;
        // 0x2eb9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB9E4u;
    // 0x2eb9e4: 0x0  nop
    ctx->pc = 0x2eb9e4u;
    // NOP
    ctx->pc = 0x2eb9e8u;
}
