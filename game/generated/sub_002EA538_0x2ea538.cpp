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

// Function: sub_002EA538
// Address: 0x2ea538 - 0x2ea640
void sub_002EA538_0x2ea538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA538_0x2ea538");
#endif

    switch (ctx->pc) {
        case 0x2ea560u: goto label_2ea560;
        case 0x2ea594u: goto label_2ea594;
        case 0x2ea5ccu: goto label_2ea5cc;
        case 0x2ea62cu: goto label_2ea62c;
        default: break;
    }

    ctx->pc = 0x2ea538u;

    // 0x2ea538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea53c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ea53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ea540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ea540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ea544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea54c: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x2ea54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2ea550: 0x24a505c0  addiu       $a1, $a1, 0x5C0
    ctx->pc = 0x2ea550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2ea554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ea554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ea558: 0xc0bbdbc  jal         func_2EF6F0
    ctx->pc = 0x2EA558u;
    SET_GPR_U32(ctx, 31, 0x2EA560u);
    ctx->pc = 0x2EA55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA558u;
    // 0x2ea55c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2EA558u, 0x2EA560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA560u;
label_2ea560:
    // 0x2ea560: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea564: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA564u;
    {
        const bool branch_taken_0x2ea564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea564) {
            ctx->pc = 0x2EA568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA564u;
            // 0x2ea568: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA580u;
            goto label_2ea580;
        }
    }
    ctx->pc = 0x2EA56Cu;
    // 0x2ea56c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ea570: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ea574: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA574u;
    {
        const bool branch_taken_0x2ea574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea574) {
            ctx->pc = 0x2EA578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA574u;
            // 0x2ea578: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA58Cu;
            goto label_2ea58c;
        }
    }
    ctx->pc = 0x2EA57Cu;
    // 0x2ea57c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea580:
    // 0x2ea580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea584: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ea588: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ea588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2ea58c:
    // 0x2ea58c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EA58Cu;
    SET_GPR_U32(ctx, 31, 0x2EA594u);
    ctx->pc = 0x2EA590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA58Cu;
    // 0x2ea590: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EA58Cu, 0x2EA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA594u;
label_2ea594:
    // 0x2ea594: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2ea594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2ea598: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea59c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA59Cu;
    {
        const bool branch_taken_0x2ea59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea59c) {
            ctx->pc = 0x2EA5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA59Cu;
            // 0x2ea5a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA5B8u;
            goto label_2ea5b8;
        }
    }
    ctx->pc = 0x2EA5A4u;
    // 0x2ea5a4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ea5a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ea5ac: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA5ACu;
    {
        const bool branch_taken_0x2ea5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea5ac) {
            ctx->pc = 0x2EA5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5ACu;
            // 0x2ea5b0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA5C4u;
            goto label_2ea5c4;
        }
    }
    ctx->pc = 0x2EA5B4u;
    // 0x2ea5b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea5b8:
    // 0x2ea5b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ea5c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ea5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2ea5c4:
    // 0x2ea5c4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EA5C4u;
    SET_GPR_U32(ctx, 31, 0x2EA5CCu);
    ctx->pc = 0x2EA5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5C4u;
    // 0x2ea5c8: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EA5C4u, 0x2EA5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5CCu;
label_2ea5cc:
    // 0x2ea5cc: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x2ea5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2ea5d0: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2ea5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2ea5d4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ea5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ea5d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA5D8u;
    {
        const bool branch_taken_0x2ea5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea5d8) {
            ctx->pc = 0x2EA5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5D8u;
            // 0x2ea5dc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA5F4u;
            goto label_2ea5f4;
        }
    }
    ctx->pc = 0x2EA5E0u;
    // 0x2ea5e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ea5e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ea5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ea5e8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA5E8u;
    {
        const bool branch_taken_0x2ea5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea5e8) {
            ctx->pc = 0x2EA5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA5E8u;
            // 0x2ea5ec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA600u;
            goto label_2ea600;
        }
    }
    ctx->pc = 0x2EA5F0u;
    // 0x2ea5f0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ea5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ea5f4:
    // 0x2ea5f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ea5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ea5fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ea5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea600:
    // 0x2ea600: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA600u;
    {
        const bool branch_taken_0x2ea600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea600) {
            ctx->pc = 0x2EA604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA600u;
            // 0x2ea604: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA61Cu;
            goto label_2ea61c;
        }
    }
    ctx->pc = 0x2EA608u;
    // 0x2ea608: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ea608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ea60c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ea610: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA610u;
    {
        const bool branch_taken_0x2ea610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea610) {
            ctx->pc = 0x2EA624u;
            goto label_2ea624;
        }
    }
    ctx->pc = 0x2EA618u;
    // 0x2ea618: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea61c:
    // 0x2ea61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea620: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea624:
    // 0x2ea624: 0xc0ba544  jal         func_2E9510
    ctx->pc = 0x2EA624u;
    SET_GPR_U32(ctx, 31, 0x2EA62Cu);
    ctx->pc = 0x2E9510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9510u, 0x2EA624u, 0x2EA62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA62Cu;
label_2ea62c:
    // 0x2ea62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ea634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea638: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA638u;
        // 0x2ea63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA640u;
}
