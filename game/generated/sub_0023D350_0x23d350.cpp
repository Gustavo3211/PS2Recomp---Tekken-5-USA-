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

// Function: sub_0023D350
// Address: 0x23d350 - 0x23d4c0
void sub_0023D350_0x23d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D350_0x23d350");
#endif

    switch (ctx->pc) {
        case 0x23d394u: goto label_23d394;
        case 0x23d3bcu: goto label_23d3bc;
        case 0x23d3d4u: goto label_23d3d4;
        case 0x23d3e0u: goto label_23d3e0;
        case 0x23d3fcu: goto label_23d3fc;
        case 0x23d408u: goto label_23d408;
        default: break;
    }

    ctx->pc = 0x23d350u;

    // 0x23d350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23d350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23d354: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23d354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23d358: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23d358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23d35c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23d35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d360: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23d364: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23d364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d368: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23d36c: 0x2453f3d0  addiu       $s3, $v0, -0xC30
    ctx->pc = 0x23d36cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964176));
    // 0x23d370: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x23d374: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x23d374u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d378: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x23d378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x23d37c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23d37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23d380: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23d380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x23d384: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23d384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x23d388: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23d388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23d38c: 0xc0959fa  jal         func_2567E8
    ctx->pc = 0x23D38Cu;
    SET_GPR_U32(ctx, 31, 0x23D394u);
    ctx->pc = 0x23D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D38Cu;
    // 0x23d390: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2567E8u, 0x23D38Cu, 0x23D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D394u;
label_23d394:
    // 0x23d394: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d394u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d398: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23d39c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23D39Cu;
    {
        const bool branch_taken_0x23d39c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D39Cu;
        // 0x23d3a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d39c) {
            ctx->pc = 0x23D3C8u;
            goto label_23d3c8;
        }
    }
    ctx->pc = 0x23D3A4u;
    // 0x23d3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d3a8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D3A8u;
    {
        const bool branch_taken_0x23d3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3A8u;
        // 0x23d3ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3a8) {
            ctx->pc = 0x23D3CCu;
            goto label_23d3cc;
        }
    }
    ctx->pc = 0x23D3B0u;
    // 0x23d3b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x23d3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23d3b4: 0xc08f454  jal         func_23D150
    ctx->pc = 0x23D3B4u;
    SET_GPR_U32(ctx, 31, 0x23D3BCu);
    ctx->pc = 0x23D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3B4u;
    // 0x23d3b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D150u, 0x23D3B4u, 0x23D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3BCu;
label_23d3bc:
    // 0x23d3bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23D3BCu;
    {
        const bool branch_taken_0x23d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3BCu;
        // 0x23d3c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3bc) {
            ctx->pc = 0x23D3D8u;
            goto label_23d3d8;
        }
    }
    ctx->pc = 0x23D3C4u;
    // 0x23d3c4: 0x0  nop
    ctx->pc = 0x23d3c4u;
    // NOP
label_23d3c8:
    // 0x23d3c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23d3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23d3cc:
    // 0x23d3cc: 0xc08f454  jal         func_23D150
    ctx->pc = 0x23D3CCu;
    SET_GPR_U32(ctx, 31, 0x23D3D4u);
    ctx->pc = 0x23D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3CCu;
    // 0x23d3d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D150u, 0x23D3CCu, 0x23D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3D4u;
label_23d3d4:
    // 0x23d3d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d3d8:
    // 0x23d3d8: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x23D3D8u;
    {
        const bool branch_taken_0x23d3d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3D8u;
        // 0x23d3dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3d8) {
            ctx->pc = 0x23D490u;
            goto label_23d490;
        }
    }
    ctx->pc = 0x23D3E0u;
label_23d3e0:
    // 0x23d3e0: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x23d3e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23d3e4: 0x6800026  bltz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x23D3E4u;
    {
        const bool branch_taken_0x23d3e4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3E4u;
        // 0x23d3e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3e4) {
            ctx->pc = 0x23D480u;
            goto label_23d480;
        }
    }
    ctx->pc = 0x23D3ECu;
    // 0x23d3ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x23d3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23d3f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23d3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3f4: 0xc08f47e  jal         func_23D1F8
    ctx->pc = 0x23D3F4u;
    SET_GPR_U32(ctx, 31, 0x23D3FCu);
    ctx->pc = 0x23D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3F4u;
    // 0x23d3f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D1F8u, 0x23D3F4u, 0x23D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3FCu;
label_23d3fc:
    // 0x23d3fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D3FCu;
    {
        const bool branch_taken_0x23d3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3FCu;
        // 0x23d400: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3fc) {
            ctx->pc = 0x23D414u;
            goto label_23d414;
        }
    }
    ctx->pc = 0x23D404u;
    // 0x23d404: 0x0  nop
    ctx->pc = 0x23d404u;
    // NOP
label_23d408:
    // 0x23d408: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x23d408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x23d40c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D40Cu;
    {
        const bool branch_taken_0x23d40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D40Cu;
        // 0x23d410: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d40c) {
            ctx->pc = 0x23D430u;
            goto label_23d430;
        }
    }
    ctx->pc = 0x23D414u;
label_23d414:
    // 0x23d414: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x23d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x23d418: 0x0  nop
    ctx->pc = 0x23d418u;
    // NOP
    // 0x23d41c: 0x0  nop
    ctx->pc = 0x23d41cu;
    // NOP
    // 0x23d420: 0x0  nop
    ctx->pc = 0x23d420u;
    // NOP
    // 0x23d424: 0x443fff8  bgezl       $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D424u;
    {
        const bool branch_taken_0x23d424 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23d424) {
            ctx->pc = 0x23D428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D424u;
            // 0x23d428: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d408;
        }
    }
    ctx->pc = 0x23D42Cu;
    // 0x23d42c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x23d42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d430:
    // 0x23d430: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23D430u;
    {
        const bool branch_taken_0x23d430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D430u;
        // 0x23d434: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d430) {
            ctx->pc = 0x23D480u;
            goto label_23d480;
        }
    }
    ctx->pc = 0x23D438u;
    // 0x23d438: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x23d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23d43c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x23d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x23d440: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x23d440u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d444: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x23d444u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x23d448: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x23d448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23d44c: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x23d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x23d450: 0xde430010  ld          $v1, 0x10($s2)
    ctx->pc = 0x23d450u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x23d454: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x23d454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x23d458: 0xde420018  ld          $v0, 0x18($s2)
    ctx->pc = 0x23d458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x23d45c: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x23d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x23d460: 0xde430020  ld          $v1, 0x20($s2)
    ctx->pc = 0x23d460u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x23d464: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x23d464u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x23d468: 0xde420028  ld          $v0, 0x28($s2)
    ctx->pc = 0x23d468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x23d46c: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x23d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x23d470: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x23d470u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x23d474: 0xae140044  sw          $s4, 0x44($s0)
    ctx->pc = 0x23d474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 20));
    // 0x23d478: 0xae160040  sw          $s6, 0x40($s0)
    ctx->pc = 0x23d478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 22));
    // 0x23d47c: 0xae17004c  sw          $s7, 0x4C($s0)
    ctx->pc = 0x23d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 23));
label_23d480:
    // 0x23d480: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23d480u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x23d484: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x23d484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23d488: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x23D488u;
    {
        const bool branch_taken_0x23d488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D488u;
        // 0x23d48c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d488) {
            ctx->pc = 0x23D3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d3e0;
        }
    }
    ctx->pc = 0x23D490u;
label_23d490:
    // 0x23d490: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23d490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d494: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23d494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d498: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23d498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d49c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23d49cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23d4a0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23d4a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d4a4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23d4a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23d4a8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23d4a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d4ac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x23d4acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23d4b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x23D4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4B4u;
        // 0x23d4b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D4BCu;
    // 0x23d4bc: 0x0  nop
    ctx->pc = 0x23d4bcu;
    // NOP
    ctx->pc = 0x23d4c0u;
}
