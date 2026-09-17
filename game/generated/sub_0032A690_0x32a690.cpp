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

// Function: sub_0032A690
// Address: 0x32a690 - 0x32a8e0
void sub_0032A690_0x32a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A690_0x32a690");
#endif

    switch (ctx->pc) {
        case 0x32a690u: goto label_32a690;
        case 0x32a694u: goto label_32a694;
        case 0x32a698u: goto label_32a698;
        case 0x32a69cu: goto label_32a69c;
        case 0x32a6a0u: goto label_32a6a0;
        case 0x32a6a4u: goto label_32a6a4;
        case 0x32a6a8u: goto label_32a6a8;
        case 0x32a6acu: goto label_32a6ac;
        case 0x32a6b0u: goto label_32a6b0;
        case 0x32a6b4u: goto label_32a6b4;
        case 0x32a6b8u: goto label_32a6b8;
        case 0x32a6bcu: goto label_32a6bc;
        case 0x32a6c0u: goto label_32a6c0;
        case 0x32a6c4u: goto label_32a6c4;
        case 0x32a6c8u: goto label_32a6c8;
        case 0x32a6ccu: goto label_32a6cc;
        case 0x32a6d0u: goto label_32a6d0;
        case 0x32a6d4u: goto label_32a6d4;
        case 0x32a6d8u: goto label_32a6d8;
        case 0x32a6dcu: goto label_32a6dc;
        case 0x32a6e0u: goto label_32a6e0;
        case 0x32a6e4u: goto label_32a6e4;
        case 0x32a6e8u: goto label_32a6e8;
        case 0x32a6ecu: goto label_32a6ec;
        case 0x32a6f0u: goto label_32a6f0;
        case 0x32a6f4u: goto label_32a6f4;
        case 0x32a6f8u: goto label_32a6f8;
        case 0x32a6fcu: goto label_32a6fc;
        case 0x32a700u: goto label_32a700;
        case 0x32a704u: goto label_32a704;
        case 0x32a708u: goto label_32a708;
        case 0x32a70cu: goto label_32a70c;
        case 0x32a710u: goto label_32a710;
        case 0x32a714u: goto label_32a714;
        case 0x32a718u: goto label_32a718;
        case 0x32a71cu: goto label_32a71c;
        case 0x32a720u: goto label_32a720;
        case 0x32a724u: goto label_32a724;
        case 0x32a728u: goto label_32a728;
        case 0x32a72cu: goto label_32a72c;
        case 0x32a730u: goto label_32a730;
        case 0x32a734u: goto label_32a734;
        case 0x32a738u: goto label_32a738;
        case 0x32a73cu: goto label_32a73c;
        case 0x32a740u: goto label_32a740;
        case 0x32a744u: goto label_32a744;
        case 0x32a748u: goto label_32a748;
        case 0x32a74cu: goto label_32a74c;
        case 0x32a750u: goto label_32a750;
        case 0x32a754u: goto label_32a754;
        case 0x32a758u: goto label_32a758;
        case 0x32a75cu: goto label_32a75c;
        case 0x32a760u: goto label_32a760;
        case 0x32a764u: goto label_32a764;
        case 0x32a768u: goto label_32a768;
        case 0x32a76cu: goto label_32a76c;
        case 0x32a770u: goto label_32a770;
        case 0x32a774u: goto label_32a774;
        case 0x32a778u: goto label_32a778;
        case 0x32a77cu: goto label_32a77c;
        case 0x32a780u: goto label_32a780;
        case 0x32a784u: goto label_32a784;
        case 0x32a788u: goto label_32a788;
        case 0x32a78cu: goto label_32a78c;
        case 0x32a790u: goto label_32a790;
        case 0x32a794u: goto label_32a794;
        case 0x32a798u: goto label_32a798;
        case 0x32a79cu: goto label_32a79c;
        case 0x32a7a0u: goto label_32a7a0;
        case 0x32a7a4u: goto label_32a7a4;
        case 0x32a7a8u: goto label_32a7a8;
        case 0x32a7acu: goto label_32a7ac;
        case 0x32a7b0u: goto label_32a7b0;
        case 0x32a7b4u: goto label_32a7b4;
        case 0x32a7b8u: goto label_32a7b8;
        case 0x32a7bcu: goto label_32a7bc;
        case 0x32a7c0u: goto label_32a7c0;
        case 0x32a7c4u: goto label_32a7c4;
        case 0x32a7c8u: goto label_32a7c8;
        case 0x32a7ccu: goto label_32a7cc;
        case 0x32a7d0u: goto label_32a7d0;
        case 0x32a7d4u: goto label_32a7d4;
        case 0x32a7d8u: goto label_32a7d8;
        case 0x32a7dcu: goto label_32a7dc;
        case 0x32a7e0u: goto label_32a7e0;
        case 0x32a7e4u: goto label_32a7e4;
        case 0x32a7e8u: goto label_32a7e8;
        case 0x32a7ecu: goto label_32a7ec;
        case 0x32a7f0u: goto label_32a7f0;
        case 0x32a7f4u: goto label_32a7f4;
        case 0x32a7f8u: goto label_32a7f8;
        case 0x32a7fcu: goto label_32a7fc;
        case 0x32a800u: goto label_32a800;
        case 0x32a804u: goto label_32a804;
        case 0x32a808u: goto label_32a808;
        case 0x32a80cu: goto label_32a80c;
        case 0x32a810u: goto label_32a810;
        case 0x32a814u: goto label_32a814;
        case 0x32a818u: goto label_32a818;
        case 0x32a81cu: goto label_32a81c;
        case 0x32a820u: goto label_32a820;
        case 0x32a824u: goto label_32a824;
        case 0x32a828u: goto label_32a828;
        case 0x32a82cu: goto label_32a82c;
        case 0x32a830u: goto label_32a830;
        case 0x32a834u: goto label_32a834;
        case 0x32a838u: goto label_32a838;
        case 0x32a83cu: goto label_32a83c;
        case 0x32a840u: goto label_32a840;
        case 0x32a844u: goto label_32a844;
        case 0x32a848u: goto label_32a848;
        case 0x32a84cu: goto label_32a84c;
        case 0x32a850u: goto label_32a850;
        case 0x32a854u: goto label_32a854;
        case 0x32a858u: goto label_32a858;
        case 0x32a85cu: goto label_32a85c;
        case 0x32a860u: goto label_32a860;
        case 0x32a864u: goto label_32a864;
        case 0x32a868u: goto label_32a868;
        case 0x32a86cu: goto label_32a86c;
        case 0x32a870u: goto label_32a870;
        case 0x32a874u: goto label_32a874;
        case 0x32a878u: goto label_32a878;
        case 0x32a87cu: goto label_32a87c;
        case 0x32a880u: goto label_32a880;
        case 0x32a884u: goto label_32a884;
        case 0x32a888u: goto label_32a888;
        case 0x32a88cu: goto label_32a88c;
        case 0x32a890u: goto label_32a890;
        case 0x32a894u: goto label_32a894;
        case 0x32a898u: goto label_32a898;
        case 0x32a89cu: goto label_32a89c;
        case 0x32a8a0u: goto label_32a8a0;
        case 0x32a8a4u: goto label_32a8a4;
        case 0x32a8a8u: goto label_32a8a8;
        case 0x32a8acu: goto label_32a8ac;
        case 0x32a8b0u: goto label_32a8b0;
        case 0x32a8b4u: goto label_32a8b4;
        case 0x32a8b8u: goto label_32a8b8;
        case 0x32a8bcu: goto label_32a8bc;
        case 0x32a8c0u: goto label_32a8c0;
        case 0x32a8c4u: goto label_32a8c4;
        case 0x32a8c8u: goto label_32a8c8;
        case 0x32a8ccu: goto label_32a8cc;
        case 0x32a8d0u: goto label_32a8d0;
        case 0x32a8d4u: goto label_32a8d4;
        case 0x32a8d8u: goto label_32a8d8;
        case 0x32a8dcu: goto label_32a8dc;
        default: break;
    }

    ctx->pc = 0x32a690u;

label_32a690:
    // 0x32a690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32a694:
    // 0x32a694: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x32a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_32a698:
    // 0x32a698: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x32a698u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_32a69c:
    // 0x32a69c: 0x26c203c0  addiu       $v0, $s6, 0x3C0
    ctx->pc = 0x32a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
label_32a6a0:
    // 0x32a6a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32a6a4:
    // 0x32a6a4: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x32a6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_32a6a8:
    // 0x32a6a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32a6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_32a6ac:
    // 0x32a6ac: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x32a6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_32a6b0:
    // 0x32a6b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_32a6b4:
    // 0x32a6b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32a6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a6b8:
    // 0x32a6b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32a6bc:
    // 0x32a6bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x32a6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32a6c0:
    // 0x32a6c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x32a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_32a6c4:
    // 0x32a6c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32a6c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32a6c8:
    // 0x32a6c8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x32a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_32a6cc:
    // 0x32a6cc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x32a6ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32a6d0:
    // 0x32a6d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32a6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a6d4:
    // 0x32a6d4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x32a6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_32a6d8:
    // 0x32a6d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32a6dc:
    // 0x32a6dc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x32a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_32a6e0:
    // 0x32a6e0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_32a6e4:
    if (ctx->pc == 0x32A6E4u) {
        ctx->pc = 0x32A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6E0u;
        // 0x32a6e4: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6E8u;
        goto label_32a6e8;
    }
    ctx->pc = 0x32A6E0u;
    {
        const bool branch_taken_0x32a6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6E0u;
        // 0x32a6e4: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a6e0) {
            ctx->pc = 0x32A840u;
            goto label_32a840;
        }
    }
    ctx->pc = 0x32A6E8u;
label_32a6e8:
    // 0x32a6e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_32a6ec:
    // 0x32a6ec: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x32a6ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_32a6f0:
    // 0x32a6f0: 0x0  nop
    ctx->pc = 0x32a6f0u;
    // NOP
label_32a6f4:
    // 0x32a6f4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_32a6f8:
    if (ctx->pc == 0x32A6F8u) {
        ctx->pc = 0x32A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6F4u;
        // 0x32a6f8: 0x24680004  addiu       $t0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6FCu;
        goto label_32a6fc;
    }
    ctx->pc = 0x32A6F4u;
    {
        const bool branch_taken_0x32a6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6F4u;
        // 0x32a6f8: 0x24680004  addiu       $t0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a6f4) {
            ctx->pc = 0x32A6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a6d8;
        }
    }
    ctx->pc = 0x32A6FCu;
label_32a6fc:
    // 0x32a6fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32a6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a700:
    // 0x32a700: 0x26d303c0  addiu       $s3, $s6, 0x3C0
    ctx->pc = 0x32a700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
label_32a704:
    // 0x32a704: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32a704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_32a708:
    // 0x32a708: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_32a70c:
    // 0x32a70c: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x32a70cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32a710:
    // 0x32a710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a714:
    // 0x32a714: 0xc0c8864  jal         func_322190
label_32a718:
    if (ctx->pc == 0x32A718u) {
        ctx->pc = 0x32A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A714u;
        // 0x32a718: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A71Cu;
        goto label_32a71c;
    }
    ctx->pc = 0x32A714u;
    SET_GPR_U32(ctx, 31, 0x32A71Cu);
    ctx->pc = 0x32A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A714u;
    // 0x32a718: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x32A714u, 0x32A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A71Cu;
label_32a71c:
    // 0x32a71c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32a71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a720:
    // 0x32a720: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x32a720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_32a724:
    // 0x32a724: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x32a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_32a728:
    // 0x32a728: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32a72c:
    // 0x32a72c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x32a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_32a730:
    // 0x32a730: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32a730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32a734:
    // 0x32a734: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a738:
    // 0x32a738: 0x40f809  jalr        $v0
label_32a73c:
    if (ctx->pc == 0x32A73Cu) {
        ctx->pc = 0x32A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A738u;
        // 0x32a73c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A740u;
        goto label_32a740;
    }
    ctx->pc = 0x32A738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A740u);
        ctx->pc = 0x32A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A738u;
        // 0x32a73c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A738u, 0x32A740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A740u;
label_32a740:
    // 0x32a740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a744:
    // 0x32a744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32a744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a748:
    // 0x32a748: 0xc0cab24  jal         func_32AC90
label_32a74c:
    if (ctx->pc == 0x32A74Cu) {
        ctx->pc = 0x32A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A748u;
        // 0x32a74c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A750u;
        goto label_32a750;
    }
    ctx->pc = 0x32A748u;
    SET_GPR_U32(ctx, 31, 0x32A750u);
    ctx->pc = 0x32A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A748u;
    // 0x32a74c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AC90u, 0x32A748u, 0x32A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A750u;
label_32a750:
    // 0x32a750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a754:
    // 0x32a754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a758:
    // 0x32a758: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32a758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32a75c:
    // 0x32a75c: 0xc0caa38  jal         func_32A8E0
label_32a760:
    if (ctx->pc == 0x32A760u) {
        ctx->pc = 0x32A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A75Cu;
        // 0x32a760: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A764u;
        goto label_32a764;
    }
    ctx->pc = 0x32A75Cu;
    SET_GPR_U32(ctx, 31, 0x32A764u);
    ctx->pc = 0x32A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A75Cu;
    // 0x32a760: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A8E0u, 0x32A75Cu, 0x32A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A764u;
label_32a764:
    // 0x32a764: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x32a764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_32a768:
    // 0x32a768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a76c:
    // 0x32a76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32a76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a770:
    // 0x32a770: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x32a770u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32a774:
    // 0x32a774: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x32a774u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_32a778:
    // 0x32a778: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32a778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32a77c:
    // 0x32a77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a780:
    // 0x32a780: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32a780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a784:
    // 0x32a784: 0xc0cab94  jal         func_32AE50
label_32a788:
    if (ctx->pc == 0x32A788u) {
        ctx->pc = 0x32A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A784u;
        // 0x32a788: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A78Cu;
        goto label_32a78c;
    }
    ctx->pc = 0x32A784u;
    SET_GPR_U32(ctx, 31, 0x32A78Cu);
    ctx->pc = 0x32A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A784u;
    // 0x32a788: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AE50u, 0x32A784u, 0x32A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A78Cu;
label_32a78c:
    // 0x32a78c: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x32a78cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32a790:
    // 0x32a790: 0x2128823  subu        $s1, $s0, $s2
    ctx->pc = 0x32a790u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_32a794:
    // 0x32a794: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_32a798:
    if (ctx->pc == 0x32A798u) {
        ctx->pc = 0x32A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A794u;
        // 0x32a798: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A79Cu;
        goto label_32a79c;
    }
    ctx->pc = 0x32A794u;
    {
        const bool branch_taken_0x32a794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A794u;
        // 0x32a798: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a794) {
            ctx->pc = 0x32A824u;
            goto label_32a824;
        }
    }
    ctx->pc = 0x32A79Cu;
label_32a79c:
    // 0x32a79c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32a79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32a7a0:
    // 0x32a7a0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x32a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_32a7a4:
    // 0x32a7a4: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x32a7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_32a7a8:
    // 0x32a7a8: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x32a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_32a7ac:
    // 0x32a7ac: 0xc0ce218  jal         func_338860
label_32a7b0:
    if (ctx->pc == 0x32A7B0u) {
        ctx->pc = 0x32A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7ACu;
        // 0x32a7b0: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7B4u;
        goto label_32a7b4;
    }
    ctx->pc = 0x32A7ACu;
    SET_GPR_U32(ctx, 31, 0x32A7B4u);
    ctx->pc = 0x32A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7ACu;
    // 0x32a7b0: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x32A7ACu, 0x32A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7B4u;
label_32a7b4:
    // 0x32a7b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32a7b8:
    // 0x32a7b8: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x32a7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
label_32a7bc:
    // 0x32a7bc: 0x112902  srl         $a1, $s1, 4
    ctx->pc = 0x32a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
label_32a7c0:
    // 0x32a7c0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x32a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_32a7c4:
    // 0x32a7c4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x32a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_32a7c8:
    // 0x32a7c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_32a7cc:
    // 0x32a7cc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x32a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_32a7d0:
    // 0x32a7d0: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x32a7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
label_32a7d4:
    // 0x32a7d4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x32a7d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_32a7d8:
    // 0x32a7d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x32a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a7dc:
    // 0x32a7dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x32a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_32a7e0:
    // 0x32a7e0: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x32a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_32a7e4:
    // 0x32a7e4: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x32a7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
label_32a7e8:
    // 0x32a7e8: 0x32423fff  andi        $v0, $s2, 0x3FFF
    ctx->pc = 0x32a7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
label_32a7ec:
    // 0x32a7ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32a7f0:
    // 0x32a7f0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x32a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32a7f4:
    // 0x32a7f4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x32a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_32a7f8:
    // 0x32a7f8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a7f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2)); // MMIO: 0x1000d080
label_32a7fc:
    // 0x32a7fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_32a800:
    // 0x32a800: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x32a800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
label_32a804:
    // 0x32a804: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x32a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_32a808:
    // 0x32a808: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x32a808u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x1000d080
label_32a80c:
    // 0x32a80c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32a80cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000e010
label_32a810:
    // 0x32a810: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x32a810u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e010
label_32a814:
    // 0x32a814: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x32a814u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000d000
label_32a818:
    // 0x32a818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32a818u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
label_32a81c:
    // 0x32a81c: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x32a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
label_32a820:
    // 0x32a820: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x32a820u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32a824:
    // 0x32a824: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x32a824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32a828:
    // 0x32a828: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_32a82c:
    // 0x32a82c: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
label_32a830:
    if (ctx->pc == 0x32A830u) {
        ctx->pc = 0x32A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A82Cu;
        // 0x32a830: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A834u;
        goto label_32a834;
    }
    ctx->pc = 0x32A82Cu;
    {
        const bool branch_taken_0x32a82c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x32A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A82Cu;
        // 0x32a830: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a82c) {
            ctx->pc = 0x32A860u;
            goto label_32a860;
        }
    }
    ctx->pc = 0x32A834u;
label_32a834:
    // 0x32a834: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x32a834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_32a838:
    // 0x32a838: 0x10000018  b           . + 4 + (0x18 << 2)
label_32a83c:
    if (ctx->pc == 0x32A83Cu) {
        ctx->pc = 0x32A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A838u;
        // 0x32a83c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A840u;
        goto label_32a840;
    }
    ctx->pc = 0x32A838u;
    {
        const bool branch_taken_0x32a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A838u;
        // 0x32a83c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a838) {
            ctx->pc = 0x32A89Cu;
            goto label_32a89c;
        }
    }
    ctx->pc = 0x32A840u;
label_32a840:
    // 0x32a840: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x32a840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_32a844:
    // 0x32a844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32a848:
    // 0x32a848: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32a84c:
    // 0x32a84c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x32a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_32a850:
    // 0x32a850: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x32a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_32a854:
    // 0x32a854: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x32a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_32a858:
    // 0x32a858: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
label_32a85c:
    if (ctx->pc == 0x32A85Cu) {
        ctx->pc = 0x32A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A858u;
        // 0x32a85c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A860u;
        goto label_32a860;
    }
    ctx->pc = 0x32A858u;
    {
        const bool branch_taken_0x32a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A858u;
        // 0x32a85c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a858) {
            ctx->pc = 0x32A700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a700;
        }
    }
    ctx->pc = 0x32A860u;
label_32a860:
    // 0x32a860: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x32a860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
label_32a864:
    // 0x32a864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32a864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a868:
    // 0x32a868: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32a868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a86c:
    // 0x32a86c: 0x0  nop
    ctx->pc = 0x32a86cu;
    // NOP
label_32a870:
    // 0x32a870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a874:
    // 0x32a874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32a878:
    if (ctx->pc == 0x32A878u) {
        ctx->pc = 0x32A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A874u;
        // 0x32a878: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A87Cu;
        goto label_32a87c;
    }
    ctx->pc = 0x32A874u;
    {
        const bool branch_taken_0x32a874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A874u;
        // 0x32a878: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a874) {
            ctx->pc = 0x32A884u;
            goto label_32a884;
        }
    }
    ctx->pc = 0x32A87Cu;
label_32a87c:
    // 0x32a87c: 0x50d20007  beql        $a2, $s2, . + 4 + (0x7 << 2)
label_32a880:
    if (ctx->pc == 0x32A880u) {
        ctx->pc = 0x32A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A87Cu;
        // 0x32a880: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A884u;
        goto label_32a884;
    }
    ctx->pc = 0x32A87Cu;
    {
        const bool branch_taken_0x32a87c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        if (branch_taken_0x32a87c) {
            ctx->pc = 0x32A880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A87Cu;
            // 0x32a880: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A89Cu;
            goto label_32a89c;
        }
    }
    ctx->pc = 0x32A884u;
label_32a884:
    // 0x32a884: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32a884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32a888:
    // 0x32a888: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32a888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_32a88c:
    // 0x32a88c: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x32a88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_32a890:
    // 0x32a890: 0x0  nop
    ctx->pc = 0x32a890u;
    // NOP
label_32a894:
    // 0x32a894: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_32a898:
    if (ctx->pc == 0x32A898u) {
        ctx->pc = 0x32A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A894u;
        // 0x32a898: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A89Cu;
        goto label_32a89c;
    }
    ctx->pc = 0x32A894u;
    {
        const bool branch_taken_0x32a894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A894u;
        // 0x32a898: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a894) {
            ctx->pc = 0x32A870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a870;
        }
    }
    ctx->pc = 0x32A89Cu;
label_32a89c:
    // 0x32a89c: 0x26c403c0  addiu       $a0, $s6, 0x3C0
    ctx->pc = 0x32a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
label_32a8a0:
    // 0x32a8a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32a8a4:
    // 0x32a8a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a8a8:
    // 0x32a8a8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_32a8ac:
    if (ctx->pc == 0x32A8ACu) {
        ctx->pc = 0x32A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8A8u;
        // 0x32a8ac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8B0u;
        goto label_32a8b0;
    }
    ctx->pc = 0x32A8A8u;
    {
        const bool branch_taken_0x32a8a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x32A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8A8u;
        // 0x32a8ac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a8a8) {
            ctx->pc = 0x32A8B8u;
            goto label_32a8b8;
        }
    }
    ctx->pc = 0x32A8B0u;
label_32a8b0:
    // 0x32a8b0: 0xc0ce218  jal         func_338860
label_32a8b4:
    if (ctx->pc == 0x32A8B4u) {
        ctx->pc = 0x32A8B8u;
        goto label_32a8b8;
    }
    ctx->pc = 0x32A8B0u;
    SET_GPR_U32(ctx, 31, 0x32A8B8u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x32A8B0u, 0x32A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8B8u;
label_32a8b8:
    // 0x32a8b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32a8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32a8bc:
    // 0x32a8bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32a8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32a8c0:
    // 0x32a8c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32a8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32a8c4:
    // 0x32a8c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x32a8c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32a8c8:
    // 0x32a8c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x32a8c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32a8cc:
    // 0x32a8cc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x32a8ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32a8d0:
    // 0x32a8d0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x32a8d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32a8d4:
    // 0x32a8d4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x32a8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_32a8d8:
    // 0x32a8d8: 0x3e00008  jr          $ra
label_32a8dc:
    if (ctx->pc == 0x32A8DCu) {
        ctx->pc = 0x32A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8D8u;
        // 0x32a8dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8E0u;
        goto label_fallthrough_0x32a8d8;
    }
    ctx->pc = 0x32A8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8D8u;
        // 0x32a8dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32a8d8:
    ctx->pc = 0x32A8E0u;
}
