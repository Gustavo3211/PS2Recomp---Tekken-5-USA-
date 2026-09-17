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

// Function: sub_003348E8
// Address: 0x3348e8 - 0x3349e0
void sub_003348E8_0x3348e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003348E8_0x3348e8");
#endif

    switch (ctx->pc) {
        case 0x334934u: goto label_334934;
        default: break;
    }

    ctx->pc = 0x3348e8u;

    // 0x3348e8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3348e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3348ec: 0x2446ff80  addiu       $a2, $v0, -0x80
    ctx->pc = 0x3348ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x3348f0: 0x8cc30404  lw          $v1, 0x404($a2)
    ctx->pc = 0x3348f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440384u));
    // 0x3348f4: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3348F4u;
    {
        const bool branch_taken_0x3348f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3348F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348F4u;
        // 0x3348f8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348f4) {
            ctx->pc = 0x3349D8u;
            goto label_3349d8;
        }
    }
    ctx->pc = 0x3348FCu;
    // 0x3348fc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x3348fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x334900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x334900u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10009000
    // 0x334904: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x334904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x334908: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x334908u;
    {
        const bool branch_taken_0x334908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334908u;
        // 0x33490c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334908) {
            ctx->pc = 0x334964u;
            goto label_334964;
        }
    }
    ctx->pc = 0x334910u;
    // 0x334910: 0x2404fc00  addiu       $a0, $zero, -0x400
    ctx->pc = 0x334910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x334914: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x334914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x334918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x334918u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e020
    // 0x33491c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x33491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x334920: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x334920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x334924: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334928: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x334928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33492c: 0x40f  sync.p
    ctx->pc = 0x33492cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x334930: 0xf  sync
    ctx->pc = 0x334930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_334934:
    // 0x334934: 0x0  nop
    ctx->pc = 0x334934u;
    // NOP
    // 0x334938: 0x0  nop
    ctx->pc = 0x334938u;
    // NOP
    // 0x33493c: 0x0  nop
    ctx->pc = 0x33493cu;
    // NOP
    // 0x334940: 0x0  nop
    ctx->pc = 0x334940u;
    // NOP
    // 0x334944: 0x0  nop
    ctx->pc = 0x334944u;
    // NOP
    // 0x334948: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x334948u;
    {
        const bool branch_taken_0x334948 = (false);
        if (branch_taken_0x334948) {
            ctx->pc = 0x334934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334934;
        }
    }
    ctx->pc = 0x334950u;
    // 0x334950: 0x0  nop
    ctx->pc = 0x334950u;
    // NOP
    // 0x334954: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x334954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334958: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x334958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x33495c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33495cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334960: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x334960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_334964:
    // 0x334964: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334968: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x334968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33496c: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x33496cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x334970: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x334970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x334974: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x334974u;
    runtime->Store32(rdram, ctx, 0x10009020u, GPR_U32(ctx, 0)); // MMIO: 0x10009020
    // 0x334978: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x334978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x33497c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33497cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334980: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x334980u;
    {
        const bool branch_taken_0x334980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x334980) {
            ctx->pc = 0x334984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334980u;
            // 0x334984: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334998u;
            goto label_334998;
        }
    }
    ctx->pc = 0x334988u;
    // 0x334988: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x334988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33498c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33498Cu;
    {
        const bool branch_taken_0x33498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33498Cu;
        // 0x334990: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33498c) {
            ctx->pc = 0x3349A0u;
            goto label_3349a0;
        }
    }
    ctx->pc = 0x334994u;
    // 0x334994: 0x0  nop
    ctx->pc = 0x334994u;
    // NOP
label_334998:
    // 0x334998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x334998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33499c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x33499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_3349a0:
    // 0x3349a0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3349a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3349a4: 0xac229030  sw          $v0, -0x6FD0($at)
    ctx->pc = 0x3349a4u;
    runtime->Store32(rdram, ctx, 0x10009030u, GPR_U32(ctx, 2)); // MMIO: 0x10009030
    // 0x3349a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3349a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3349ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3349acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3349b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3349b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3349b4: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x3349b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x3349b8: 0x3c061001  lui         $a2, 0x1001
    ctx->pc = 0x3349b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4097 << 16));
    // 0x3349bc: 0x8cc69030  lw          $a2, -0x6FD0($a2)
    ctx->pc = 0x3349bcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10009030u)); // MMIO: 0x10009030
    // 0x3349c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3349c0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x3349c4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x3349c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3349c8: 0x240501c5  addiu       $a1, $zero, 0x1C5
    ctx->pc = 0x3349c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
    // 0x3349cc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3349ccu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x3349d0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3349d0u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 5)); // MMIO: 0x10009000
    // 0x3349d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3349d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u)); // MMIO: 0x10009000
label_3349d8:
    // 0x3349d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3349D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3349D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3349E0u;
}
