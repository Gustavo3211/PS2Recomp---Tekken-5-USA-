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

// Function: sub_004FA878
// Address: 0x4fa878 - 0x4fa920
void sub_004FA878_0x4fa878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FA878_0x4fa878");
#endif

    switch (ctx->pc) {
        case 0x4fa8c8u: goto label_4fa8c8;
        case 0x4fa8e0u: goto label_4fa8e0;
        case 0x4fa8f4u: goto label_4fa8f4;
        default: break;
    }

    ctx->pc = 0x4fa878u;

    // 0x4fa878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4fa878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4fa87c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fa87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fa880: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x4fa880u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x4fa884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4fa884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4fa888: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x4fa888u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x4fa88c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4fa88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4fa890: 0x36100234  ori         $s0, $s0, 0x234
    ctx->pc = 0x4fa890u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)564);
    // 0x4fa894: 0x2631ceb4  addiu       $s1, $s1, -0x314C
    ctx->pc = 0x4fa894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954676));
    // 0x4fa898: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4fa898u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000234u)); // MMIO: 0x70000234
    // 0x4fa89c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x4fa89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x4fa8a0: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x4fa8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x4fa8a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4fa8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4fa8a8: 0x34210238  ori         $at, $at, 0x238
    ctx->pc = 0x4fa8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)568);
    // 0x4fa8ac: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4fa8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4fa8b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4fa8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4fa8b4: 0x34210260  ori         $at, $at, 0x260
    ctx->pc = 0x4fa8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)608);
    // 0x4fa8b8: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x4fa8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x4fa8bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fa8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4fa8c0: 0xc042d06  jal         func_10B418
    ctx->pc = 0x4FA8C0u;
    SET_GPR_U32(ctx, 31, 0x4FA8C8u);
    ctx->pc = 0x4FA8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA8C0u;
    // 0x4fa8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0x4FA8C0u, 0x4FA8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA8C8u;
label_4fa8c8:
    // 0x4fa8c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4fa8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4fa8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4fa8d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4fa8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4fa8d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4fa8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4fa8d8: 0xc042d0a  jal         func_10B428
    ctx->pc = 0x4FA8D8u;
    SET_GPR_U32(ctx, 31, 0x4FA8E0u);
    ctx->pc = 0x4FA8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA8D8u;
    // 0x4fa8dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B428u, 0x4FA8D8u, 0x4FA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA8E0u;
label_4fa8e0:
    // 0x4fa8e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fa8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fa8e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fa8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4fa8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa8ec: 0xc042d24  jal         func_10B490
    ctx->pc = 0x4FA8ECu;
    SET_GPR_U32(ctx, 31, 0x4FA8F4u);
    ctx->pc = 0x4FA8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA8ECu;
    // 0x4fa8f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B490u, 0x4FA8ECu, 0x4FA8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA8F4u;
label_4fa8f4:
    // 0x4fa8f4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4fa8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x4fa8f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fa8fc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4fa8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4fa900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fa900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fa904: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4fa904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fa908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4fa908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fa90c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4fa90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fa910: 0xac60ce9c  sw          $zero, -0x3164($v1)
    ctx->pc = 0x4fa910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x56CE9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CE9Cu, _value); } while (0);
    // 0x4fa914: 0xaca4ceb8  sw          $a0, -0x3148($a1)
    ctx->pc = 0x4fa914u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x56CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CEB8u, _value); } while (0);
    // 0x4fa918: 0x3e00008  jr          $ra
    ctx->pc = 0x4FA918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA918u;
        // 0x4fa91c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FA918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FA920u;
}
