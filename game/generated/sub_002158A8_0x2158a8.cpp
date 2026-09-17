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

// Function: sub_002158A8
// Address: 0x2158a8 - 0x215948
void sub_002158A8_0x2158a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002158A8_0x2158a8");
#endif

    ctx->pc = 0x2158a8u;

    // 0x2158a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2158a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2158ac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2158acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2158b0: 0x8c6288a8  lw          $v0, -0x7758($v1)
    ctx->pc = 0x2158b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2158b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2158b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2158b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2158b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158bc: 0x471824  and         $v1, $v0, $a3
    ctx->pc = 0x2158bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2158c0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2158c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2158c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2158c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2158c8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2158c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2158cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2158ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2158d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2158d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2158d4: 0xa0a3002b  sb          $v1, 0x2B($a1)
    ctx->pc = 0x2158d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x2158d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2158d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2158dc: 0x10660010  beq         $v1, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2158DCu;
    {
        const bool branch_taken_0x2158dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158DCu;
        // 0x2158e0: 0xa0a2002c  sb          $v0, 0x2C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 44), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158dc) {
            ctx->pc = 0x215920u;
            goto label_215920;
        }
    }
    ctx->pc = 0x2158E4u;
    // 0x2158e4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2158e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2158e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2158E8u;
    {
        const bool branch_taken_0x2158e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158e8) {
            ctx->pc = 0x215900u;
            goto label_215900;
        }
    }
    ctx->pc = 0x2158F0u;
    // 0x2158f0: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2158F0u;
    {
        const bool branch_taken_0x2158f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158f0) {
            ctx->pc = 0x2158F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158F0u;
            // 0x2158f4: 0xa0a0002d  sb          $zero, 0x2D($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215930u;
            goto label_215930;
        }
    }
    ctx->pc = 0x2158F8u;
    // 0x2158f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2158F8u;
    {
        const bool branch_taken_0x2158f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158F8u;
        // 0x2158fc: 0x8ca20044  lw          $v0, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158f8) {
            ctx->pc = 0x215938u;
            goto label_215938;
        }
    }
    ctx->pc = 0x215900u;
label_215900:
    // 0x215900: 0x5067000b  beql        $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x215900u;
    {
        const bool branch_taken_0x215900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x215900) {
            ctx->pc = 0x215904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215900u;
            // 0x215904: 0xa0a6002d  sb          $a2, 0x2D($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215930u;
            goto label_215930;
        }
    }
    ctx->pc = 0x215908u;
    // 0x215908: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21590c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21590Cu;
    {
        const bool branch_taken_0x21590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21590c) {
            ctx->pc = 0x215910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21590Cu;
            // 0x215910: 0xa0a0002d  sb          $zero, 0x2D($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215930u;
            goto label_215930;
        }
    }
    ctx->pc = 0x215914u;
    // 0x215914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x215914u;
    {
        const bool branch_taken_0x215914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215914u;
        // 0x215918: 0x8ca20044  lw          $v0, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215914) {
            ctx->pc = 0x215938u;
            goto label_215938;
        }
    }
    ctx->pc = 0x21591Cu;
    // 0x21591c: 0x0  nop
    ctx->pc = 0x21591cu;
    // NOP
label_215920:
    // 0x215920: 0xa0a6002e  sb          $a2, 0x2E($a1)
    ctx->pc = 0x215920u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 46), (uint8_t)GPR_U32(ctx, 6));
    // 0x215924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x215924u;
    {
        const bool branch_taken_0x215924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215924u;
        // 0x215928: 0xa0a0002d  sb          $zero, 0x2D($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215924) {
            ctx->pc = 0x215934u;
            goto label_215934;
        }
    }
    ctx->pc = 0x21592Cu;
    // 0x21592c: 0x0  nop
    ctx->pc = 0x21592cu;
    // NOP
label_215930:
    // 0x215930: 0xa0a0002e  sb          $zero, 0x2E($a1)
    ctx->pc = 0x215930u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 46), (uint8_t)GPR_U32(ctx, 0));
label_215934:
    // 0x215934: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x215934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_215938:
    // 0x215938: 0xa0a00032  sb          $zero, 0x32($a1)
    ctx->pc = 0x215938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x21593c: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x21593cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x215940: 0x3e00008  jr          $ra
    ctx->pc = 0x215940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215940u;
        // 0x215944: 0xa0a00031  sb          $zero, 0x31($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215948u;
}
