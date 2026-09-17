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

// Function: sub_004FD8D0
// Address: 0x4fd8d0 - 0x4fd948
void sub_004FD8D0_0x4fd8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FD8D0_0x4fd8d0");
#endif

    ctx->pc = 0x4fd8d0u;

    // 0x4fd8d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4fd8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd8d4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x4fd8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4fd8d8: 0x30c47fff  andi        $a0, $a2, 0x7FFF
    ctx->pc = 0x4fd8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x4fd8dc: 0x1ca00018  bgtz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4FD8DCu;
    {
        const bool branch_taken_0x4fd8dc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x4FD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD8DCu;
        // 0x4fd8e0: 0x63c02  srl         $a3, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd8dc) {
            ctx->pc = 0x4FD940u;
            goto label_4fd940;
        }
    }
    ctx->pc = 0x4FD8E4u;
    // 0x4fd8e4: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x4fd8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x4fd8e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fd8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fd8ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4fd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4fd8f0: 0x10e30013  beq         $a3, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4FD8F0u;
    {
        const bool branch_taken_0x4fd8f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD8F0u;
        // 0x4fd8f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd8f0) {
            ctx->pc = 0x4FD940u;
            goto label_4fd940;
        }
    }
    ctx->pc = 0x4FD8F8u;
    // 0x4fd8f8: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x4fd8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x4fd8fc: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x4fd8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x4fd900: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4fd900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fd904: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x4FD904u;
    {
        const bool branch_taken_0x4fd904 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD904u;
        // 0x4fd908: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd904) {
            ctx->pc = 0x4FD940u;
            goto label_4fd940;
        }
    }
    ctx->pc = 0x4FD90Cu;
    // 0x4fd90c: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x4fd90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x4fd910: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4fd910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fd914: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4fd914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fd918: 0x10e40009  beq         $a3, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FD918u;
    {
        const bool branch_taken_0x4fd918 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x4FD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD918u;
        // 0x4fd91c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd918) {
            ctx->pc = 0x4FD940u;
            goto label_4fd940;
        }
    }
    ctx->pc = 0x4FD920u;
    // 0x4fd920: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fd920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fd924: 0x54e20006  bnel        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FD924u;
    {
        const bool branch_taken_0x4fd924 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fd924) {
            ctx->pc = 0x4FD928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FD924u;
            // 0x4fd928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD940u;
            goto label_4fd940;
        }
    }
    ctx->pc = 0x4FD92Cu;
    // 0x4fd92c: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x4fd92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x4fd930: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x4fd930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4fd934: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4fd934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fd938: 0x3e00008  jr          $ra
    ctx->pc = 0x4FD938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD938u;
        // 0x4fd93c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FD938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FD940u;
label_4fd940:
    // 0x4fd940: 0x3e00008  jr          $ra
    ctx->pc = 0x4FD940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FD940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FD948u;
}
