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

// Function: sub_00304528
// Address: 0x304528 - 0x304620
void sub_00304528_0x304528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304528_0x304528");
#endif

    switch (ctx->pc) {
        case 0x30455cu: goto label_30455c;
        case 0x304564u: goto label_304564;
        case 0x304580u: goto label_304580;
        case 0x304590u: goto label_304590;
        case 0x3045d0u: goto label_3045d0;
        case 0x3045e8u: goto label_3045e8;
        case 0x3045fcu: goto label_3045fc;
        default: break;
    }

    ctx->pc = 0x304528u;

    // 0x304528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x304528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30452c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x304530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304538: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x304538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30453c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x304540: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304544: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x304544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x304548: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x304548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30454c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x304550: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x304550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x304554: 0xc0c1210  jal         func_304840
    ctx->pc = 0x304554u;
    SET_GPR_U32(ctx, 31, 0x30455Cu);
    ctx->pc = 0x304558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304554u;
    // 0x304558: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304840u, 0x304554u, 0x30455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30455Cu;
label_30455c:
    // 0x30455c: 0xc0be9f2  jal         func_2FA7C8
    ctx->pc = 0x30455Cu;
    SET_GPR_U32(ctx, 31, 0x304564u);
    ctx->pc = 0x304560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30455Cu;
    // 0x304560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA7C8u, 0x30455Cu, 0x304564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304564u;
label_304564:
    // 0x304564: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x304564u;
    {
        const bool branch_taken_0x304564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x304564) {
            ctx->pc = 0x304568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304564u;
            // 0x304568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3045C0u;
            goto label_3045c0;
        }
    }
    ctx->pc = 0x30456Cu;
    // 0x30456c: 0x9626000a  lhu         $a2, 0xA($s1)
    ctx->pc = 0x30456cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x304570: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x304570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x304574: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x304574u;
    {
        const bool branch_taken_0x304574 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x304578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304574u;
        // 0x304578: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304574) {
            ctx->pc = 0x3045BCu;
            goto label_3045bc;
        }
    }
    ctx->pc = 0x30457Cu;
    // 0x30457c: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x30457cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_304580:
    // 0x304580: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x304580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x304584: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x304584u;
    {
        const bool branch_taken_0x304584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x304588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304584u;
        // 0x304588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304584) {
            ctx->pc = 0x3045ACu;
            goto label_3045ac;
        }
    }
    ctx->pc = 0x30458Cu;
    // 0x30458c: 0x0  nop
    ctx->pc = 0x30458cu;
    // NOP
label_304590:
    // 0x304590: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x304590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x304594: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x304594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x304598: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x304598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30459c: 0x0  nop
    ctx->pc = 0x30459cu;
    // NOP
    // 0x3045a0: 0x0  nop
    ctx->pc = 0x3045a0u;
    // NOP
    // 0x3045a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3045A4u;
    {
        const bool branch_taken_0x3045a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3045A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045A4u;
        // 0x3045a8: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045a4) {
            ctx->pc = 0x304590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304590;
        }
    }
    ctx->pc = 0x3045ACu;
label_3045ac:
    // 0x3045ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3045acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3045b0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x3045b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3045b4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x3045B4u;
    {
        const bool branch_taken_0x3045b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3045b4) {
            ctx->pc = 0x3045B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3045B4u;
            // 0x3045b8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304580;
        }
    }
    ctx->pc = 0x3045BCu;
label_3045bc:
    // 0x3045bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3045bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3045c0:
    // 0x3045c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3045c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3045c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3045c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3045c8: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x3045C8u;
    SET_GPR_U32(ctx, 31, 0x3045D0u);
    ctx->pc = 0x3045CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045C8u;
    // 0x3045cc: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x3045C8u, 0x3045D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045D0u;
label_3045d0:
    // 0x3045d0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3045d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3045d4: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x3045d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3045d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3045d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3045dc: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x3045dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x3045e0: 0xc0bee6c  jal         func_2FB9B0
    ctx->pc = 0x3045E0u;
    SET_GPR_U32(ctx, 31, 0x3045E8u);
    ctx->pc = 0x3045E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045E0u;
    // 0x3045e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9B0u, 0x3045E0u, 0x3045E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045E8u;
label_3045e8:
    // 0x3045e8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3045e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3045ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3045ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3045f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3045f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3045f4: 0xc0bf138  jal         func_2FC4E0
    ctx->pc = 0x3045F4u;
    SET_GPR_U32(ctx, 31, 0x3045FCu);
    ctx->pc = 0x3045F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045F4u;
    // 0x3045f8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC4E0u, 0x3045F4u, 0x3045FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045FCu;
label_3045fc:
    // 0x3045fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3045fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304604: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x304604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304608: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x304608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30460c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30460cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304610: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x304610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304614: 0x3e00008  jr          $ra
    ctx->pc = 0x304614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304614u;
        // 0x304618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30461Cu;
    // 0x30461c: 0x0  nop
    ctx->pc = 0x30461cu;
    // NOP
    ctx->pc = 0x304620u;
}
