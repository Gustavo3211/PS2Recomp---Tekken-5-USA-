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

// Function: sub_002DA728
// Address: 0x2da728 - 0x2da8a0
void sub_002DA728_0x2da728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA728_0x2da728");
#endif

    switch (ctx->pc) {
        case 0x2da87cu: goto label_2da87c;
        default: break;
    }

    ctx->pc = 0x2da728u;

    // 0x2da728: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2da728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2da72c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da734: 0x2c830024  sltiu       $v1, $a0, 0x24
    ctx->pc = 0x2da734u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x2da738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da73c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2da73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da740: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2da740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2da744: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2DA744u;
    {
        const bool branch_taken_0x2da744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA744u;
        // 0x2da748: 0xaf82bbd8  sw          $v0, -0x4428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da744) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA74Cu;
    // 0x2da74c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2da74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2da750: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2da750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2da754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2da754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2da758: 0x8c63f1c0  lw          $v1, -0xE40($v1)
    ctx->pc = 0x2da758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963648)));
    // 0x2da75c: 0x600008  jr          $v1
    ctx->pc = 0x2DA75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DA768u: goto label_2da768;
            case 0x2DA770u: goto label_2da770;
            case 0x2DA778u: goto label_2da778;
            case 0x2DA780u: goto label_2da780;
            case 0x2DA788u: goto label_2da788;
            case 0x2DA790u: goto label_2da790;
            case 0x2DA798u: goto label_2da798;
            case 0x2DA7A0u: goto label_2da7a0;
            case 0x2DA7A8u: goto label_2da7a8;
            case 0x2DA7B0u: goto label_2da7b0;
            case 0x2DA7B8u: goto label_2da7b8;
            case 0x2DA7C0u: goto label_2da7c0;
            case 0x2DA7C8u: goto label_2da7c8;
            case 0x2DA7D0u: goto label_2da7d0;
            case 0x2DA7D8u: goto label_2da7d8;
            case 0x2DA7E0u: goto label_2da7e0;
            case 0x2DA7E8u: goto label_2da7e8;
            case 0x2DA7F0u: goto label_2da7f0;
            case 0x2DA7F8u: goto label_2da7f8;
            case 0x2DA800u: goto label_2da800;
            case 0x2DA808u: goto label_2da808;
            case 0x2DA810u: goto label_2da810;
            case 0x2DA818u: goto label_2da818;
            case 0x2DA820u: goto label_2da820;
            case 0x2DA828u: goto label_2da828;
            case 0x2DA830u: goto label_2da830;
            case 0x2DA838u: goto label_2da838;
            case 0x2DA840u: goto label_2da840;
            case 0x2DA844u: goto label_2da844;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA75Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DA764u;
    // 0x2da764: 0x0  nop
    ctx->pc = 0x2da764u;
    // NOP
label_2da768:
    // 0x2da768: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2DA768u;
    {
        const bool branch_taken_0x2da768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA768u;
        // 0x2da76c: 0x240505e0  addiu       $a1, $zero, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da768) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA770u;
label_2da770:
    // 0x2da770: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2DA770u;
    {
        const bool branch_taken_0x2da770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA770u;
        // 0x2da774: 0x240505e1  addiu       $a1, $zero, 0x5E1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da770) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA778u;
label_2da778:
    // 0x2da778: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2DA778u;
    {
        const bool branch_taken_0x2da778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA778u;
        // 0x2da77c: 0x240505e2  addiu       $a1, $zero, 0x5E2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1506));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da778) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA780u;
label_2da780:
    // 0x2da780: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2DA780u;
    {
        const bool branch_taken_0x2da780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA780u;
        // 0x2da784: 0x240505e3  addiu       $a1, $zero, 0x5E3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1507));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da780) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA788u;
label_2da788:
    // 0x2da788: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2DA788u;
    {
        const bool branch_taken_0x2da788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA788u;
        // 0x2da78c: 0x240505e4  addiu       $a1, $zero, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1508));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da788) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA790u;
label_2da790:
    // 0x2da790: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2DA790u;
    {
        const bool branch_taken_0x2da790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA790u;
        // 0x2da794: 0x240505e5  addiu       $a1, $zero, 0x5E5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da790) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA798u;
label_2da798:
    // 0x2da798: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2DA798u;
    {
        const bool branch_taken_0x2da798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA798u;
        // 0x2da79c: 0x240505e6  addiu       $a1, $zero, 0x5E6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1510));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da798) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7A0u;
label_2da7a0:
    // 0x2da7a0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2DA7A0u;
    {
        const bool branch_taken_0x2da7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7A0u;
        // 0x2da7a4: 0x240505e7  addiu       $a1, $zero, 0x5E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7a0) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7A8u;
label_2da7a8:
    // 0x2da7a8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2DA7A8u;
    {
        const bool branch_taken_0x2da7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7A8u;
        // 0x2da7ac: 0x240505e8  addiu       $a1, $zero, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7a8) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7B0u;
label_2da7b0:
    // 0x2da7b0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DA7B0u;
    {
        const bool branch_taken_0x2da7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7B0u;
        // 0x2da7b4: 0x240505e9  addiu       $a1, $zero, 0x5E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7b0) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7B8u;
label_2da7b8:
    // 0x2da7b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2DA7B8u;
    {
        const bool branch_taken_0x2da7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7B8u;
        // 0x2da7bc: 0x240505ea  addiu       $a1, $zero, 0x5EA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7b8) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7C0u;
label_2da7c0:
    // 0x2da7c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2DA7C0u;
    {
        const bool branch_taken_0x2da7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7C0u;
        // 0x2da7c4: 0x240505eb  addiu       $a1, $zero, 0x5EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7c0) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7C8u;
label_2da7c8:
    // 0x2da7c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2DA7C8u;
    {
        const bool branch_taken_0x2da7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7C8u;
        // 0x2da7cc: 0x240505ec  addiu       $a1, $zero, 0x5EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7c8) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7D0u;
label_2da7d0:
    // 0x2da7d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2DA7D0u;
    {
        const bool branch_taken_0x2da7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7D0u;
        // 0x2da7d4: 0x240505ed  addiu       $a1, $zero, 0x5ED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7d0) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7D8u;
label_2da7d8:
    // 0x2da7d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA7D8u;
    {
        const bool branch_taken_0x2da7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7D8u;
        // 0x2da7dc: 0x240505ee  addiu       $a1, $zero, 0x5EE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7d8) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7E0u;
label_2da7e0:
    // 0x2da7e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2DA7E0u;
    {
        const bool branch_taken_0x2da7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7E0u;
        // 0x2da7e4: 0x240505ef  addiu       $a1, $zero, 0x5EF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7e0) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7E8u;
label_2da7e8:
    // 0x2da7e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DA7E8u;
    {
        const bool branch_taken_0x2da7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7E8u;
        // 0x2da7ec: 0x240505f0  addiu       $a1, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7e8) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7F0u;
label_2da7f0:
    // 0x2da7f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DA7F0u;
    {
        const bool branch_taken_0x2da7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7F0u;
        // 0x2da7f4: 0x240505f1  addiu       $a1, $zero, 0x5F1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7f0) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA7F8u;
label_2da7f8:
    // 0x2da7f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DA7F8u;
    {
        const bool branch_taken_0x2da7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7F8u;
        // 0x2da7fc: 0x240505f2  addiu       $a1, $zero, 0x5F2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7f8) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA800u;
label_2da800:
    // 0x2da800: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA800u;
    {
        const bool branch_taken_0x2da800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA800u;
        // 0x2da804: 0x240505f3  addiu       $a1, $zero, 0x5F3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da800) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA808u;
label_2da808:
    // 0x2da808: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DA808u;
    {
        const bool branch_taken_0x2da808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA808u;
        // 0x2da80c: 0x240505f4  addiu       $a1, $zero, 0x5F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da808) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA810u;
label_2da810:
    // 0x2da810: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DA810u;
    {
        const bool branch_taken_0x2da810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA810u;
        // 0x2da814: 0x240505f5  addiu       $a1, $zero, 0x5F5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da810) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA818u;
label_2da818:
    // 0x2da818: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA818u;
    {
        const bool branch_taken_0x2da818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA818u;
        // 0x2da81c: 0x240505f6  addiu       $a1, $zero, 0x5F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1526));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da818) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA820u;
label_2da820:
    // 0x2da820: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA820u;
    {
        const bool branch_taken_0x2da820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA820u;
        // 0x2da824: 0x240505f7  addiu       $a1, $zero, 0x5F7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da820) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA828u;
label_2da828:
    // 0x2da828: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA828u;
    {
        const bool branch_taken_0x2da828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA828u;
        // 0x2da82c: 0x240505f8  addiu       $a1, $zero, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da828) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA830u;
label_2da830:
    // 0x2da830: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA830u;
    {
        const bool branch_taken_0x2da830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA830u;
        // 0x2da834: 0x240505f9  addiu       $a1, $zero, 0x5F9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da830) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA838u;
label_2da838:
    // 0x2da838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA838u;
    {
        const bool branch_taken_0x2da838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA838u;
        // 0x2da83c: 0x240505fa  addiu       $a1, $zero, 0x5FA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1530));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da838) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA840u;
label_2da840:
    // 0x2da840: 0x240505fb  addiu       $a1, $zero, 0x5FB
    ctx->pc = 0x2da840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1531));
label_2da844:
    // 0x2da844: 0x24a203e8  addiu       $v0, $a1, 0x3E8
    ctx->pc = 0x2da844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
    // 0x2da848: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA848u;
    {
        const bool branch_taken_0x2da848 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2DA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA848u;
        // 0x2da84c: 0xaf82bbe4  sw          $v0, -0x441C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da848) {
            ctx->pc = 0x2DA860u;
            goto label_2da860;
        }
    }
    ctx->pc = 0x2DA850u;
    // 0x2da850: 0xaf80bbd0  sw          $zero, -0x4430($gp)
    ctx->pc = 0x2da850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949840), GPR_U32(ctx, 0));
    // 0x2da854: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DA854u;
    {
        const bool branch_taken_0x2da854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA854u;
        // 0x2da858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da854) {
            ctx->pc = 0x2DA88Cu;
            goto label_2da88c;
        }
    }
    ctx->pc = 0x2DA85Cu;
    // 0x2da85c: 0x0  nop
    ctx->pc = 0x2da85cu;
    // NOP
label_2da860:
    // 0x2da860: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x2da860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x2da864: 0x24a5faa2  addiu       $a1, $a1, -0x55E
    ctx->pc = 0x2da864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965922));
    // 0x2da868: 0x2610c780  addiu       $s0, $s0, -0x3880
    ctx->pc = 0x2da868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952832));
    // 0x2da86c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2da870: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2da870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da874: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2DA874u;
    SET_GPR_U32(ctx, 31, 0x2DA87Cu);
    ctx->pc = 0x2DA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA874u;
    // 0x2da878: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2DA874u, 0x2DA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA87Cu;
label_2da87c:
    // 0x2da87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da880: 0xaf90bbd0  sw          $s0, -0x4430($gp)
    ctx->pc = 0x2da880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949840), GPR_U32(ctx, 16));
    // 0x2da884: 0xaf82bbdc  sw          $v0, -0x4424($gp)
    ctx->pc = 0x2da884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949852), GPR_U32(ctx, 2));
    // 0x2da888: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2da888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da88c:
    // 0x2da88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da890: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2da890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2da894: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA894u;
        // 0x2da898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA89Cu;
    // 0x2da89c: 0x0  nop
    ctx->pc = 0x2da89cu;
    // NOP
    ctx->pc = 0x2da8a0u;
}
