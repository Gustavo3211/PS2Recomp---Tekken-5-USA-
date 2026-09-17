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

// Function: sub_00334570
// Address: 0x334570 - 0x334620
void sub_00334570_0x334570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334570_0x334570");
#endif

    switch (ctx->pc) {
        case 0x334598u: goto label_334598;
        case 0x3345c8u: goto label_3345c8;
        case 0x3345e8u: goto label_3345e8;
        case 0x334610u: goto label_334610;
        default: break;
    }

    ctx->pc = 0x334570u;

    // 0x334570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334574: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x334574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x334578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33457c: 0x2450ff80  addiu       $s0, $v0, -0x80
    ctx->pc = 0x33457cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x334580: 0x8e030404  lw          $v1, 0x404($s0)
    ctx->pc = 0x334580u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440384u));
    // 0x334584: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x334584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x334588: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x334588u;
    {
        const bool branch_taken_0x334588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334588u;
        // 0x33458c: 0xae000410  sw          $zero, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334588) {
            ctx->pc = 0x3345F8u;
            goto label_3345f8;
        }
    }
    ctx->pc = 0x334590u;
    // 0x334590: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x334590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x334594: 0x0  nop
    ctx->pc = 0x334594u;
    // NOP
label_334598:
    // 0x334598: 0x2c42003d  sltiu       $v0, $v0, 0x3D
    ctx->pc = 0x334598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
    // 0x33459c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33459Cu;
    {
        const bool branch_taken_0x33459c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3345A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33459Cu;
        // 0x3345a0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33459c) {
            ctx->pc = 0x3345ECu;
            goto label_3345ec;
        }
    }
    ctx->pc = 0x3345A4u;
    // 0x3345a4: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x3345a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x3345a8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x3345a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x3345ac: 0x8e040408  lw          $a0, 0x408($s0)
    ctx->pc = 0x3345acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x3345b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3345b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10009000
    // 0x3345b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3345b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3345b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3345B8u;
    {
        const bool branch_taken_0x3345b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3345b8) {
            ctx->pc = 0x3345BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3345B8u;
            // 0x3345bc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3345CCu;
            goto label_3345cc;
        }
    }
    ctx->pc = 0x3345C0u;
    // 0x3345c0: 0xc0cd2dc  jal         func_334B70
    ctx->pc = 0x3345C0u;
    SET_GPR_U32(ctx, 31, 0x3345C8u);
    ctx->pc = 0x334B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334B70u, 0x3345C0u, 0x3345C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345C8u;
label_3345c8:
    // 0x3345c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3345c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3345cc:
    // 0x3345cc: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x3345ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x3345d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3345d0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000a000
    // 0x3345d4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3345d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3345d8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3345D8u;
    {
        const bool branch_taken_0x3345d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3345d8) {
            ctx->pc = 0x3345DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3345D8u;
            // 0x3345dc: 0xae000410  sw          $zero, 0x410($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3345ECu;
            goto label_3345ec;
        }
    }
    ctx->pc = 0x3345E0u;
    // 0x3345e0: 0xc0cd2e8  jal         func_334BA0
    ctx->pc = 0x3345E0u;
    SET_GPR_U32(ctx, 31, 0x3345E8u);
    ctx->pc = 0x334BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334BA0u, 0x3345E0u, 0x3345E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345E8u;
label_3345e8:
    // 0x3345e8: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x3345e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
label_3345ec:
    // 0x3345ec: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x3345ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x3345f0: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3345F0u;
    {
        const bool branch_taken_0x3345f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3345f0) {
            ctx->pc = 0x3345F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3345F0u;
            // 0x3345f4: 0x8e020410  lw          $v0, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334598;
        }
    }
    ctx->pc = 0x3345F8u;
label_3345f8:
    // 0x3345f8: 0x8e020408  lw          $v0, 0x408($s0)
    ctx->pc = 0x3345f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x3345fc: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3345FCu;
    {
        const bool branch_taken_0x3345fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3345fc) {
            ctx->pc = 0x334600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3345FCu;
            // 0x334600: 0x8e020410  lw          $v0, 0x410($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334598;
        }
    }
    ctx->pc = 0x334604u;
    // 0x334604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x334604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334608: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0x334608u;
    SET_GPR_U32(ctx, 31, 0x334610u);
    ctx->pc = 0x33460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334608u;
    // 0x33460c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0x334608u, 0x334610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334610u;
label_334610:
    // 0x334610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334614: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x334614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334618: 0x3e00008  jr          $ra
    ctx->pc = 0x334618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334618u;
        // 0x33461c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334620u;
}
