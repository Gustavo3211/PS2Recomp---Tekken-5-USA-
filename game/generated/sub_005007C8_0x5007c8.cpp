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

// Function: sub_005007C8
// Address: 0x5007c8 - 0x500838
void sub_005007C8_0x5007c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005007C8_0x5007c8");
#endif

    switch (ctx->pc) {
        case 0x5007ecu: goto label_5007ec;
        default: break;
    }

    ctx->pc = 0x5007c8u;

    // 0x5007c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5007c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5007cc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x5007ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x5007d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5007d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5007d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5007d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5007d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x5007d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5007dc: 0x8c44cfa4  lw          $a0, -0x305C($v0)
    ctx->pc = 0x5007dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFA4u));
    // 0x5007e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x5007e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x5007e4: 0xc13faa6  jal         func_4FEA98
    ctx->pc = 0x5007E4u;
    SET_GPR_U32(ctx, 31, 0x5007ECu);
    ctx->pc = 0x5007E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5007E4u;
    // 0x5007e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEA98u, 0x5007E4u, 0x5007ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5007ECu;
label_5007ec:
    // 0x5007ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5007ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5007f0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x5007f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x5007f4: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x5007f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x5007f8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x5007f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5007fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x5007fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500800: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x500800u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x500804: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x500804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x500808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50080c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x500810: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x500810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500814: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x500814u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x500818: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x500818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50081c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x500820: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x500820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500824: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x500824u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x500828: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x500828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50082c: 0x3e00008  jr          $ra
    ctx->pc = 0x50082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50082Cu;
        // 0x500830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50082Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500834u;
    // 0x500834: 0x0  nop
    ctx->pc = 0x500834u;
    // NOP
    ctx->pc = 0x500838u;
}
