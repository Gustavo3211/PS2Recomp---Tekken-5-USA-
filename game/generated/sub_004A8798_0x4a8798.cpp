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

// Function: sub_004A8798
// Address: 0x4a8798 - 0x4a8878
void sub_004A8798_0x4a8798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8798_0x4a8798");
#endif

    ctx->pc = 0x4a8798u;

    // 0x4a8798: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4a8798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a879c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a87a0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4a87a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4a87a4: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4a87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a87a8: 0x2c451000  sltiu       $a1, $v0, 0x1000
    ctx->pc = 0x4a87a8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x4a87ac: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x4a87acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4a87b0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4A87B0u;
    {
        const bool branch_taken_0x4a87b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A87B0u;
        // 0x4a87b4: 0x31b83  sra         $v1, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a87b0) {
            ctx->pc = 0x4A8860u;
            goto label_4a8860;
        }
    }
    ctx->pc = 0x4A87B8u;
    // 0x4a87b8: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A87B8u;
    {
        const bool branch_taken_0x4a87b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A87B8u;
        // 0x4a87bc: 0x41c00  sll         $v1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a87b8) {
            ctx->pc = 0x4A8808u;
            goto label_4a8808;
        }
    }
    ctx->pc = 0x4A87C0u;
    // 0x4a87c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a87c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a87c4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a87c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a87c8: 0x31d83  sra         $v1, $v1, 22
    ctx->pc = 0x4a87c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x4a87cc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a87ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a87d0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a87d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a87d4: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x4a87d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x4a87d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a87d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a87dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a87dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a87e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a87e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a87e4: 0x308303fc  andi        $v1, $a0, 0x3FC
    ctx->pc = 0x4a87e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1020);
    // 0x4a87e8: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x4a87e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a87ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a87ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a87f0: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x4a87f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x4a87f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a87f8: 0x8c84f100  lw          $a0, -0xF00($a0)
    ctx->pc = 0x4a87f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963456)));
    // 0x4a87fc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4A87FCu;
    {
        const bool branch_taken_0x4a87fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A87FCu;
        // 0x4a8800: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a87fc) {
            ctx->pc = 0x4A886Cu;
            goto label_4a886c;
        }
    }
    ctx->pc = 0x4A8804u;
    // 0x4a8804: 0x0  nop
    ctx->pc = 0x4a8804u;
    // NOP
label_4a8808:
    // 0x4a8808: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a8808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a880c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a880cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a8810: 0x31c83  sra         $v1, $v1, 18
    ctx->pc = 0x4a8810u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 18));
    // 0x4a8814: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a8814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a8818: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a8818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a881c: 0x30823fff  andi        $v0, $a0, 0x3FFF
    ctx->pc = 0x4a881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x4a8820: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a8820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a8824: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a8824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a8828: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a8828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a882c: 0x308303fc  andi        $v1, $a0, 0x3FC
    ctx->pc = 0x4a882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1020);
    // 0x4a8830: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a8830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a8834: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a8834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a8838: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a8838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a883c: 0x308203fc  andi        $v0, $a0, 0x3FC
    ctx->pc = 0x4a883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1020);
    // 0x4a8840: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4a8840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a8844: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x4a8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x4a8848: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a8848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a884c: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x4a884cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x4a8850: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a8850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a8854: 0x8c84f100  lw          $a0, -0xF00($a0)
    ctx->pc = 0x4a8854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963456)));
    // 0x4a8858: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8858u;
        // 0x4a885c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8860u;
label_4a8860:
    // 0x4a8860: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x4a8860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x4a8864: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a8864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a8868: 0x8c84f100  lw          $a0, -0xF00($a0)
    ctx->pc = 0x4a8868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963456)));
label_4a886c:
    // 0x4a886c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A886Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A886Cu;
        // 0x4a8870: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A886Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8874u;
    // 0x4a8874: 0x0  nop
    ctx->pc = 0x4a8874u;
    // NOP
    ctx->pc = 0x4a8878u;
}
