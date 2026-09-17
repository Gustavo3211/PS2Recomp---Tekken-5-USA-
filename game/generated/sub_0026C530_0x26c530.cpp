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

// Function: sub_0026C530
// Address: 0x26c530 - 0x26c608
void sub_0026C530_0x26c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C530_0x26c530");
#endif

    switch (ctx->pc) {
        case 0x26c574u: goto label_26c574;
        case 0x26c5e8u: goto label_26c5e8;
        default: break;
    }

    ctx->pc = 0x26c530u;

    // 0x26c530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c53c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26c53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26c540: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26c540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c548: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x26c548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x26c54c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26c54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26c550: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x26c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c554: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26c554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26c558: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x26c558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c55c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26c560: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26C560u;
    {
        const bool branch_taken_0x26c560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C560u;
        // 0x26c564: 0x94710044  lhu         $s1, 0x44($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c560) {
            ctx->pc = 0x26C5ECu;
            goto label_26c5ec;
        }
    }
    ctx->pc = 0x26C568u;
    // 0x26c568: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26c568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26c56c: 0xc09faac  jal         func_27EAB0
    ctx->pc = 0x26C56Cu;
    SET_GPR_U32(ctx, 31, 0x26C574u);
    ctx->pc = 0x26C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C56Cu;
    // 0x26c570: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EAB0u, 0x26C56Cu, 0x26C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C574u;
label_26c574:
    // 0x26c574: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x26c574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c578: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x26C578u;
    {
        const bool branch_taken_0x26c578 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C578u;
        // 0x26c57c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c578) {
            ctx->pc = 0x26C5F0u;
            goto label_26c5f0;
        }
    }
    ctx->pc = 0x26C580u;
    // 0x26c580: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x26c580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c584: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26c584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26c588: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26c58c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c590: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26C590u;
    {
        const bool branch_taken_0x26c590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C590u;
        // 0x26c594: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c590) {
            ctx->pc = 0x26C5F0u;
            goto label_26c5f0;
        }
    }
    ctx->pc = 0x26C598u;
    // 0x26c598: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x26C598u;
    {
        const bool branch_taken_0x26c598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c598) {
            ctx->pc = 0x26C59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C598u;
            // 0x26c59c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C5F4u;
            goto label_26c5f4;
        }
    }
    ctx->pc = 0x26C5A0u;
    // 0x26c5a0: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x26c5a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26c5a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C5A4u;
    {
        const bool branch_taken_0x26c5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5A4u;
        // 0x26c5a8: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5a4) {
            ctx->pc = 0x26C5B8u;
            goto label_26c5b8;
        }
    }
    ctx->pc = 0x26C5ACu;
    // 0x26c5ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c5b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26C5B0u;
    {
        const bool branch_taken_0x26c5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5B0u;
        // 0x26c5b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5b0) {
            ctx->pc = 0x26C5F0u;
            goto label_26c5f0;
        }
    }
    ctx->pc = 0x26C5B8u;
label_26c5b8:
    // 0x26c5b8: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26c5bc: 0x8ca20298  lw          $v0, 0x298($a1)
    ctx->pc = 0x26c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 664)));
    // 0x26c5c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26c5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26c5c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C5C4u;
    {
        const bool branch_taken_0x26c5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5C4u;
        // 0x26c5c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5c4) {
            ctx->pc = 0x26C5F0u;
            goto label_26c5f0;
        }
    }
    ctx->pc = 0x26C5CCu;
    // 0x26c5cc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26c5d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c5d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C5D4u;
    {
        const bool branch_taken_0x26c5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5D4u;
        // 0x26c5d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5d4) {
            ctx->pc = 0x26C5F0u;
            goto label_26c5f0;
        }
    }
    ctx->pc = 0x26C5DCu;
    // 0x26c5dc: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x26c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26c5e0: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26C5E0u;
    SET_GPR_U32(ctx, 31, 0x26C5E8u);
    ctx->pc = 0x26C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5E0u;
    // 0x26c5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26C5E0u, 0x26C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5E8u;
label_26c5e8:
    // 0x26c5e8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x26c5e8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c5ec:
    // 0x26c5ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26c5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c5f0:
    // 0x26c5f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26c5f4:
    // 0x26c5f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c5f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26c5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c5fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26c5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c600: 0x3e00008  jr          $ra
    ctx->pc = 0x26C600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C600u;
        // 0x26c604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C608u;
}
