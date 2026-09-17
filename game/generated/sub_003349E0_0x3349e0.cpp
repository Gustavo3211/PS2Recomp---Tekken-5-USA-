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

// Function: sub_003349E0
// Address: 0x3349e0 - 0x334ad8
void sub_003349E0_0x3349e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003349E0_0x3349e0");
#endif

    switch (ctx->pc) {
        case 0x334a2cu: goto label_334a2c;
        default: break;
    }

    ctx->pc = 0x3349e0u;

    // 0x3349e0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3349e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3349e4: 0x2446ff80  addiu       $a2, $v0, -0x80
    ctx->pc = 0x3349e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x3349e8: 0x8cc30408  lw          $v1, 0x408($a2)
    ctx->pc = 0x3349e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440388u));
    // 0x3349ec: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3349ECu;
    {
        const bool branch_taken_0x3349ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3349F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349ECu;
        // 0x3349f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349ec) {
            ctx->pc = 0x334AD0u;
            goto label_334ad0;
        }
    }
    ctx->pc = 0x3349F4u;
    // 0x3349f4: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x3349f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x3349f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3349f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000a000
    // 0x3349fc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3349fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x334a00: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x334A00u;
    {
        const bool branch_taken_0x334a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A00u;
        // 0x334a04: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a00) {
            ctx->pc = 0x334A5Cu;
            goto label_334a5c;
        }
    }
    ctx->pc = 0x334A08u;
    // 0x334a08: 0x2404fc00  addiu       $a0, $zero, -0x400
    ctx->pc = 0x334a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x334a0c: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x334a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x334a10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x334a10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e020
    // 0x334a14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x334a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x334a18: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x334a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x334a1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334a20: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x334a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334a24: 0x40f  sync.p
    ctx->pc = 0x334a24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x334a28: 0xf  sync
    ctx->pc = 0x334a28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_334a2c:
    // 0x334a2c: 0x0  nop
    ctx->pc = 0x334a2cu;
    // NOP
    // 0x334a30: 0x0  nop
    ctx->pc = 0x334a30u;
    // NOP
    // 0x334a34: 0x0  nop
    ctx->pc = 0x334a34u;
    // NOP
    // 0x334a38: 0x0  nop
    ctx->pc = 0x334a38u;
    // NOP
    // 0x334a3c: 0x0  nop
    ctx->pc = 0x334a3cu;
    // NOP
    // 0x334a40: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x334A40u;
    {
        const bool branch_taken_0x334a40 = (false);
        if (branch_taken_0x334a40) {
            ctx->pc = 0x334A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334a2c;
        }
    }
    ctx->pc = 0x334A48u;
    // 0x334a48: 0x0  nop
    ctx->pc = 0x334a48u;
    // NOP
    // 0x334a4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x334a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334a50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x334a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x334a54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334a58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x334a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_334a5c:
    // 0x334a5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334a60: 0x8cc60204  lw          $a2, 0x204($a2)
    ctx->pc = 0x334a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 516)));
    // 0x334a64: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x334a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x334a68: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x334a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x334a6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x334a6cu;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 0)); // MMIO: 0x1000a020
    // 0x334a70: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x334a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x334a74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x334a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334a78: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x334A78u;
    {
        const bool branch_taken_0x334a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x334a78) {
            ctx->pc = 0x334A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334A78u;
            // 0x334a7c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334A90u;
            goto label_334a90;
        }
    }
    ctx->pc = 0x334A80u;
    // 0x334a80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x334a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x334a84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334A84u;
    {
        const bool branch_taken_0x334a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A84u;
        // 0x334a88: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a84) {
            ctx->pc = 0x334A98u;
            goto label_334a98;
        }
    }
    ctx->pc = 0x334A8Cu;
    // 0x334a8c: 0x0  nop
    ctx->pc = 0x334a8cu;
    // NOP
label_334a90:
    // 0x334a90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x334a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x334a94: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x334a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_334a98:
    // 0x334a98: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x334a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x334a9c: 0xac22a030  sw          $v0, -0x5FD0($at)
    ctx->pc = 0x334a9cu;
    runtime->Store32(rdram, ctx, 0x1000A030u, GPR_U32(ctx, 2)); // MMIO: 0x1000a030
    // 0x334aa0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334aa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x334aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x334aa8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x334aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334aac: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x334aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x334ab0: 0x3c061001  lui         $a2, 0x1001
    ctx->pc = 0x334ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4097 << 16));
    // 0x334ab4: 0x8cc6a030  lw          $a2, -0x5FD0($a2)
    ctx->pc = 0x334ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000A030u)); // MMIO: 0x1000a030
    // 0x334ab8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x334ab8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x334abc: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x334abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x334ac0: 0x24050185  addiu       $a1, $zero, 0x185
    ctx->pc = 0x334ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x334ac4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x334ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x334ac8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x334ac8u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 5)); // MMIO: 0x1000a000
    // 0x334acc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x334accu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u)); // MMIO: 0x1000a000
label_334ad0:
    // 0x334ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x334AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334AD8u;
}
