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

// Function: sub_003204E0
// Address: 0x3204e0 - 0x3205f8
void sub_003204E0_0x3204e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003204E0_0x3204e0");
#endif

    switch (ctx->pc) {
        case 0x3204f0u: goto label_3204f0;
        case 0x320548u: goto label_320548;
        case 0x3205a0u: goto label_3205a0;
        default: break;
    }

    ctx->pc = 0x3204e0u;

    // 0x3204e0: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x3204e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3204e4: 0x240607ff  addiu       $a2, $zero, 0x7FF
    ctx->pc = 0x3204e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x3204e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3204e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3204ec: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3204ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3204f0:
    // 0x3204f0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3204f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3204f4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3204f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3204f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3204f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3204fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3204fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x320500: 0x0  nop
    ctx->pc = 0x320500u;
    // NOP
    // 0x320504: 0x14c7fffa  bne         $a2, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x320504u;
    {
        const bool branch_taken_0x320504 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x320508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320504u;
        // 0x320508: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320504) {
            ctx->pc = 0x3204F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3204f0;
        }
    }
    ctx->pc = 0x32050Cu;
    // 0x32050c: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x32050cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x320510: 0x34e74080  ori         $a3, $a3, 0x4080
    ctx->pc = 0x320510u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16512);
    // 0x320514: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x320514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x320518: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x320518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32051c: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x32051cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x320520: 0xac204008  sw          $zero, 0x4008($at)
    ctx->pc = 0x320520u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16392), GPR_U32(ctx, 0));
    // 0x320524: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x320524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x320528: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x320528u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x32052c: 0xac204000  sw          $zero, 0x4000($at)
    ctx->pc = 0x32052cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16384), GPR_U32(ctx, 0));
    // 0x320530: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x320530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320534: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x320534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x320538: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x320538u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x32053c: 0xac204004  sw          $zero, 0x4004($at)
    ctx->pc = 0x32053cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16388), GPR_U32(ctx, 0));
    // 0x320540: 0x240507ff  addiu       $a1, $zero, 0x7FF
    ctx->pc = 0x320540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x320544: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x320544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_320548:
    // 0x320548: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x320548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32054c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x32054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x320550: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x320550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x320554: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x320554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x320558: 0x0  nop
    ctx->pc = 0x320558u;
    // NOP
    // 0x32055c: 0x14a6fffa  bne         $a1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32055Cu;
    {
        const bool branch_taken_0x32055c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x320560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32055Cu;
        // 0x320560: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32055c) {
            ctx->pc = 0x320548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320548;
        }
    }
    ctx->pc = 0x320564u;
    // 0x320564: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x320564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x320568: 0x34c680c0  ori         $a2, $a2, 0x80C0
    ctx->pc = 0x320568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32960);
    // 0x32056c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x32056cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x320570: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x320570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x320574: 0x270821  addu        $at, $at, $a3
    ctx->pc = 0x320574u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x320578: 0xac204008  sw          $zero, 0x4008($at)
    ctx->pc = 0x320578u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16392), GPR_U32(ctx, 0));
    // 0x32057c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32057cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x320580: 0x270821  addu        $at, $at, $a3
    ctx->pc = 0x320580u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x320584: 0xac204000  sw          $zero, 0x4000($at)
    ctx->pc = 0x320584u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16384), GPR_U32(ctx, 0));
    // 0x320588: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x320588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32058c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x320590: 0x270821  addu        $at, $at, $a3
    ctx->pc = 0x320590u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x320594: 0xac204004  sw          $zero, 0x4004($at)
    ctx->pc = 0x320594u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16388), GPR_U32(ctx, 0));
    // 0x320598: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x320598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32059c: 0x240507ff  addiu       $a1, $zero, 0x7FF
    ctx->pc = 0x32059cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_3205a0:
    // 0x3205a0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3205a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3205a4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3205a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3205a8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3205a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3205ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3205acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3205b0: 0x0  nop
    ctx->pc = 0x3205b0u;
    // NOP
    // 0x3205b4: 0x14a7fffa  bne         $a1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3205B4u;
    {
        const bool branch_taken_0x3205b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x3205B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205B4u;
        // 0x3205b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3205b4) {
            ctx->pc = 0x3205A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3205a0;
        }
    }
    ctx->pc = 0x3205BCu;
    // 0x3205bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3205bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3205c0: 0x34634080  ori         $v1, $v1, 0x4080
    ctx->pc = 0x3205c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16512);
    // 0x3205c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3205c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3205c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3205c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3205cc: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x3205ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x3205d0: 0xac204008  sw          $zero, 0x4008($at)
    ctx->pc = 0x3205d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16392), GPR_U32(ctx, 0));
    // 0x3205d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3205d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3205d8: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x3205d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x3205dc: 0xac204000  sw          $zero, 0x4000($at)
    ctx->pc = 0x3205dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16384), GPR_U32(ctx, 0));
    // 0x3205e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3205e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3205e4: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x3205e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x3205e8: 0xac204004  sw          $zero, 0x4004($at)
    ctx->pc = 0x3205e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16388), GPR_U32(ctx, 0));
    // 0x3205ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3205ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3205F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205ECu;
        // 0x3205f0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3205ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3205F4u;
    // 0x3205f4: 0x0  nop
    ctx->pc = 0x3205f4u;
    // NOP
    ctx->pc = 0x3205f8u;
}
