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

// Function: sub_00511918
// Address: 0x511918 - 0x511960
void sub_00511918_0x511918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511918_0x511918");
#endif

    ctx->pc = 0x511918u;

    // 0x511918: 0x2487000c  addiu       $a3, $a0, 0xC
    ctx->pc = 0x511918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x51191c: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x51191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x511920: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x511920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x511924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x511924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x511928: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x511928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x51192c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x51192Cu;
    {
        const bool branch_taken_0x51192c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x511930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51192Cu;
        // 0x511930: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51192c) {
            ctx->pc = 0x511948u;
            goto label_511948;
        }
    }
    ctx->pc = 0x511934u;
    // 0x511934: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x511934u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x511938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x511938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51193c: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x51193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x511940: 0x3e00008  jr          $ra
    ctx->pc = 0x511940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511940u;
        // 0x511944: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511948u;
label_511948:
    // 0x511948: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x511948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x51194c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x51194cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511950: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x511950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x511954: 0xac660054  sw          $a2, 0x54($v1)
    ctx->pc = 0x511954u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8FF0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D4u, _value); } while (0);
    // 0x511958: 0x3e00008  jr          $ra
    ctx->pc = 0x511958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511958u;
        // 0x51195c: 0xac650050  sw          $a1, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511960u;
}
