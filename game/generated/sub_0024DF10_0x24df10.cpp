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

// Function: sub_0024DF10
// Address: 0x24df10 - 0x24df80
void sub_0024DF10_0x24df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DF10_0x24df10");
#endif

    ctx->pc = 0x24df10u;

    // 0x24df10: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24df14: 0x2443fc40  addiu       $v1, $v0, -0x3C0
    ctx->pc = 0x24df14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966336));
    // 0x24df18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24df18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df1c: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x24df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3AFD44u));
    // 0x24df20: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x24DF20u;
    {
        const bool branch_taken_0x24df20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF20u;
        // 0x24df24: 0x2466fed0  addiu       $a2, $v1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df20) {
            ctx->pc = 0x24DF78u;
            goto label_24df78;
        }
    }
    ctx->pc = 0x24DF28u;
    // 0x24df28: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x24df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x24df2c: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x24df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    // 0x24df30: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x24df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x24df34: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24DF34u;
    {
        const bool branch_taken_0x24df34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24df34) {
            ctx->pc = 0x24DF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DF34u;
            // 0x24df38: 0xac430100  sw          $v1, 0x100($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF3Cu;
            goto label_24df3c;
        }
    }
    ctx->pc = 0x24DF3Cu;
label_24df3c:
    // 0x24df3c: 0x8cc30100  lw          $v1, 0x100($a2)
    ctx->pc = 0x24df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x24df40: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x24df40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df44: 0xaca00104  sw          $zero, 0x104($a1)
    ctx->pc = 0x24df44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
    // 0x24df48: 0xaca30100  sw          $v1, 0x100($a1)
    ctx->pc = 0x24df48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 3));
    // 0x24df4c: 0xac650104  sw          $a1, 0x104($v1)
    ctx->pc = 0x24df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 5));
    // 0x24df50: 0xacc50100  sw          $a1, 0x100($a2)
    ctx->pc = 0x24df50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 5));
    // 0x24df54: 0xaca40108  sw          $a0, 0x108($a1)
    ctx->pc = 0x24df54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 4));
    // 0x24df58: 0xa4a0011c  sh          $zero, 0x11C($a1)
    ctx->pc = 0x24df58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x24df5c: 0xaca00118  sw          $zero, 0x118($a1)
    ctx->pc = 0x24df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 0));
    // 0x24df60: 0xaca00110  sw          $zero, 0x110($a1)
    ctx->pc = 0x24df60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 272), GPR_U32(ctx, 0));
    // 0x24df64: 0xaca00114  sw          $zero, 0x114($a1)
    ctx->pc = 0x24df64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 0));
    // 0x24df68: 0xaca00120  sw          $zero, 0x120($a1)
    ctx->pc = 0x24df68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
    // 0x24df6c: 0x8cc3026c  lw          $v1, 0x26C($a2)
    ctx->pc = 0x24df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 620)));
    // 0x24df70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24df74: 0xacc3026c  sw          $v1, 0x26C($a2)
    ctx->pc = 0x24df74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 620), GPR_U32(ctx, 3));
label_24df78:
    // 0x24df78: 0x3e00008  jr          $ra
    ctx->pc = 0x24DF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DF80u;
}
