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

// Function: sub_004923C0
// Address: 0x4923c0 - 0x492440
void sub_004923C0_0x4923c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004923C0_0x4923c0");
#endif

    ctx->pc = 0x4923c0u;

    // 0x4923c0: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x4923c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x4923c4: 0x24421500  addiu       $v0, $v0, 0x1500
    ctx->pc = 0x4923c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x4923c8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4923c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4923cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4923ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4923d0: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x4923d0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD04u));
    // 0x4923d4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4923D4u;
    {
        const bool branch_taken_0x4923d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4923D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4923D4u;
        // 0x4923d8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4923d4) {
            ctx->pc = 0x4923F0u;
            goto label_4923f0;
        }
    }
    ctx->pc = 0x4923DCu;
    // 0x4923dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4923dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4923e0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4923e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4923e4: 0x8422e806  lh          $v0, -0x17FA($at)
    ctx->pc = 0x4923e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294961158)));
    // 0x4923e8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4923E8u;
    {
        const bool branch_taken_0x4923e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4923e8) {
            ctx->pc = 0x492438u;
            goto label_492438;
        }
    }
    ctx->pc = 0x4923F0u;
label_4923f0:
    // 0x4923f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4923f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4923f4: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4923f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4923f8: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4923f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4923fc: 0x24670058  addiu       $a3, $v1, 0x58
    ctx->pc = 0x4923fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x492400: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x492400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x492404: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x492404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x492408: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x492408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x49240c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x492410: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x492410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x492414: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x492414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x492418: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x492418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x49241c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x49241cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x492420: 0x9502d602  lhu         $v0, -0x29FE($t0)
    ctx->pc = 0x492420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D602u));
    // 0x492424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x492428: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x492428u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49242c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x49242cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x492430: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x492430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x492434: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x492434u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_492438:
    // 0x492438: 0x3e00008  jr          $ra
    ctx->pc = 0x492438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492440u;
}
