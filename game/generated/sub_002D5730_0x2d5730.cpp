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

// Function: sub_002D5730
// Address: 0x2d5730 - 0x2d5a00
void sub_002D5730_0x2d5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5730_0x2d5730");
#endif

    switch (ctx->pc) {
        case 0x2d5770u: goto label_2d5770;
        case 0x2d5830u: goto label_2d5830;
        case 0x2d587cu: goto label_2d587c;
        case 0x2d58c0u: goto label_2d58c0;
        case 0x2d5924u: goto label_2d5924;
        case 0x2d5968u: goto label_2d5968;
        case 0x2d59e0u: goto label_2d59e0;
        default: break;
    }

    ctx->pc = 0x2d5730u;

    // 0x2d5730: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d5730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d5734: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5738: 0x8c628878  lw          $v0, -0x7788($v1)
    ctx->pc = 0x2d5738u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8878u));
    // 0x2d573c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d573cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d5740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5748: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5748u;
    {
        const bool branch_taken_0x2d5748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5748u;
        // 0x2d574c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5748) {
            ctx->pc = 0x2D5768u;
            goto label_2d5768;
        }
    }
    ctx->pc = 0x2D5750u;
    // 0x2d5750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d5758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d575c: 0x80b567e  j           func_2D59F8
    ctx->pc = 0x2D575Cu;
    ctx->pc = 0x2D5760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D575Cu;
    // 0x2d5760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F8u;
    goto label_2d59f8;
    ctx->pc = 0x2D5764u;
    // 0x2d5764: 0x0  nop
    ctx->pc = 0x2d5764u;
    // NOP
label_2d5768:
    // 0x2d5768: 0xc0b5680  jal         func_2D5A00
    ctx->pc = 0x2D5768u;
    SET_GPR_U32(ctx, 31, 0x2D5770u);
    ctx->pc = 0x2D576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5768u;
    // 0x2d576c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A00u, 0x2D5768u, 0x2D5770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5770u;
label_2d5770:
    // 0x2d5770: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d5774: 0x10710034  beq         $v1, $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D5774u;
    {
        const bool branch_taken_0x2d5774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5774u;
        // 0x2d5778: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5774) {
            ctx->pc = 0x2D5848u;
            goto label_2d5848;
        }
    }
    ctx->pc = 0x2D577Cu;
    // 0x2d577c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D577Cu;
    {
        const bool branch_taken_0x2d577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d577c) {
            ctx->pc = 0x2D5780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D577Cu;
            // 0x2d5780: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5798u;
            goto label_2d5798;
        }
    }
    ctx->pc = 0x2D5784u;
    // 0x2d5784: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5784u;
    {
        const bool branch_taken_0x2d5784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5784u;
        // 0x2d5788: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5784) {
            ctx->pc = 0x2D57A8u;
            goto label_2d57a8;
        }
    }
    ctx->pc = 0x2D578Cu;
    // 0x2d578c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2D578Cu;
    {
        const bool branch_taken_0x2d578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D578Cu;
        // 0x2d5790: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d578c) {
            ctx->pc = 0x2D5908u;
            goto label_2d5908;
        }
    }
    ctx->pc = 0x2D5794u;
    // 0x2d5794: 0x0  nop
    ctx->pc = 0x2d5794u;
    // NOP
label_2d5798:
    // 0x2d5798: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D5798u;
    {
        const bool branch_taken_0x2d5798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5798u;
        // 0x2d579c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5798) {
            ctx->pc = 0x2D5890u;
            goto label_2d5890;
        }
    }
    ctx->pc = 0x2D57A0u;
    // 0x2d57a0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2D57A0u;
    {
        const bool branch_taken_0x2d57a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57A0u;
        // 0x2d57a4: 0x24c60053  addiu       $a2, $a2, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57a0) {
            ctx->pc = 0x2D590Cu;
            goto label_2d590c;
        }
    }
    ctx->pc = 0x2D57A8u;
label_2d57a8:
    // 0x2d57a8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d57a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d57ac: 0x904383c9  lbu         $v1, -0x7C37($v0)
    ctx->pc = 0x2d57acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935497)));
    // 0x2d57b0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d57b4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2d57b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2d57b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d57bc: 0x8ca588d0  lw          $a1, -0x7730($a1)
    ctx->pc = 0x2d57bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x2d57c0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D57C0u;
    {
        const bool branch_taken_0x2d57c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57C0u;
        // 0x2d57c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57c0) {
            ctx->pc = 0x2D57E8u;
            goto label_2d57e8;
        }
    }
    ctx->pc = 0x2D57C8u;
    // 0x2d57c8: 0x8ca3069c  lw          $v1, 0x69C($a1)
    ctx->pc = 0x2d57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
    // 0x2d57cc: 0x8ca206a0  lw          $v0, 0x6A0($a1)
    ctx->pc = 0x2d57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1696)));
    // 0x2d57d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2d57d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d57d4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D57D4u;
    {
        const bool branch_taken_0x2d57d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d57d4) {
            ctx->pc = 0x2D57D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D57D4u;
            // 0x2d57d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D57F8u;
            goto label_2d57f8;
        }
    }
    ctx->pc = 0x2D57DCu;
    // 0x2d57dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D57DCu;
    {
        const bool branch_taken_0x2d57dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d57dc) {
            ctx->pc = 0x2D57F8u;
            goto label_2d57f8;
        }
    }
    ctx->pc = 0x2D57E4u;
    // 0x2d57e4: 0x0  nop
    ctx->pc = 0x2d57e4u;
    // NOP
label_2d57e8:
    // 0x2d57e8: 0x8ca3069c  lw          $v1, 0x69C($a1)
    ctx->pc = 0x2d57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
    // 0x2d57ec: 0x8ca206a4  lw          $v0, 0x6A4($a1)
    ctx->pc = 0x2d57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1700)));
    // 0x2d57f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2d57f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d57f4: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2d57f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2d57f8:
    // 0x2d57f8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D57F8u;
    {
        const bool branch_taken_0x2d57f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d57f8) {
            ctx->pc = 0x2D5810u;
            goto label_2d5810;
        }
    }
    ctx->pc = 0x2D5800u;
    // 0x2d5800: 0x8ca206a0  lw          $v0, 0x6A0($a1)
    ctx->pc = 0x2d5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1696)));
    // 0x2d5804: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2d5804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5808: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2D5808u;
    {
        const bool branch_taken_0x2d5808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5808) {
            ctx->pc = 0x2D580Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5808u;
            // 0x2d580c: 0x24c60053  addiu       $a2, $a2, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 83));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D590Cu;
            goto label_2d590c;
        }
    }
    ctx->pc = 0x2D5810u;
label_2d5810:
    // 0x2d5810: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2d5810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d5814: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d5814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d5818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d581c: 0xe60c0024  swc1        $f12, 0x24($s0)
    ctx->pc = 0x2d581cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2d5820: 0xc4a006a0  lwc1        $f0, 0x6A0($a1)
    ctx->pc = 0x2d5820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5828: 0xc0b559e  jal         func_2D5678
    ctx->pc = 0x2D5828u;
    SET_GPR_U32(ctx, 31, 0x2D5830u);
    ctx->pc = 0x2D582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5828u;
    // 0x2d582c: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5678u, 0x2D5828u, 0x2D5830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5830u;
label_2d5830:
    // 0x2d5830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5834: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2d5834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d5838: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d5838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d583c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2d583cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d5840: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D5840u;
    {
        const bool branch_taken_0x2d5840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5840u;
        // 0x2d5844: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5840) {
            ctx->pc = 0x2D5908u;
            goto label_2d5908;
        }
    }
    ctx->pc = 0x2D5848u;
label_2d5848:
    // 0x2d5848: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d5848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d584c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2d584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5850: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d5854: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d5854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d5858: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d5858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d585c: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2d585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2d5860: 0xc46c069c  lwc1        $f12, 0x69C($v1)
    ctx->pc = 0x2d5860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5864: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d5864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d5868: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2d5868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d586c: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
    ctx->pc = 0x2D586Cu;
    {
        const bool branch_taken_0x2d586c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d586c) {
            ctx->pc = 0x2D5870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D586Cu;
            // 0x2d5870: 0x24c60053  addiu       $a2, $a2, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 83));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D590Cu;
            goto label_2d590c;
        }
    }
    ctx->pc = 0x2D5874u;
    // 0x2d5874: 0xc0b55b0  jal         func_2D56C0
    ctx->pc = 0x2D5874u;
    SET_GPR_U32(ctx, 31, 0x2D587Cu);
    ctx->pc = 0x2D5878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5874u;
    // 0x2d5878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D56C0u, 0x2D5874u, 0x2D587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D587Cu;
label_2d587c:
    // 0x2d587c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5880: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d5880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d5884: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D5884u;
    {
        const bool branch_taken_0x2d5884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5884u;
        // 0x2d5888: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5884) {
            ctx->pc = 0x2D5908u;
            goto label_2d5908;
        }
    }
    ctx->pc = 0x2D588Cu;
    // 0x2d588c: 0x0  nop
    ctx->pc = 0x2d588cu;
    // NOP
label_2d5890:
    // 0x2d5890: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2d5890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5894: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d5894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d5898: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d5898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d589c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d589cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d58a0: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2d58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2d58a4: 0xc46c069c  lwc1        $f12, 0x69C($v1)
    ctx->pc = 0x2d58a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d58a8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d58a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d58ac: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2d58acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d58b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2D58B0u;
    {
        const bool branch_taken_0x2d58b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d58b0) {
            ctx->pc = 0x2D58B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D58B0u;
            // 0x2d58b4: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D58C8u;
            goto label_2d58c8;
        }
    }
    ctx->pc = 0x2D58B8u;
    // 0x2d58b8: 0xc0b55b0  jal         func_2D56C0
    ctx->pc = 0x2D58B8u;
    SET_GPR_U32(ctx, 31, 0x2D58C0u);
    ctx->pc = 0x2D58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D58B8u;
    // 0x2d58bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D56C0u, 0x2D58B8u, 0x2D58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58C0u;
label_2d58c0:
    // 0x2d58c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d58c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d58c4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2d58c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d58c8:
    // 0x2d58c8: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x2d58c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d58cc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2d58ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d58d0: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x2d58d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d58d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d58d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d58d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d58dc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d58dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d58e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d58e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d58e8: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2d58e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d58ec: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D58ECu;
    {
        const bool branch_taken_0x2d58ec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D58ECu;
        // 0x2d58f0: 0xe602001c  swc1        $f2, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d58ec) {
            ctx->pc = 0x2D5908u;
            goto label_2d5908;
        }
    }
    ctx->pc = 0x2D58F4u;
    // 0x2d58f4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d58f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2d58f8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2d58f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2d58fc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2d58fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5900: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2d5900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2d5904: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2d5904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2d5908:
    // 0x2d5908: 0x24c60053  addiu       $a2, $a2, 0x53
    ctx->pc = 0x2d5908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 83));
label_2d590c:
    // 0x2d590c: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d590cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d5910: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2d5910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d5914: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5918: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d591c: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D591Cu;
    SET_GPR_U32(ctx, 31, 0x2D5924u);
    ctx->pc = 0x2D5920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D591Cu;
    // 0x2d5920: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D591Cu, 0x2D5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5924u;
label_2d5924:
    // 0x2d5924: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d5924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d5928: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2d5928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d592c: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d5930: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2d5930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5934: 0x24c60057  addiu       $a2, $a2, 0x57
    ctx->pc = 0x2d5934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 87));
    // 0x2d5938: 0xc78c94ac  lwc1        $f12, -0x6B54($gp)
    ctx->pc = 0x2d5938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d593c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2d593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d5940: 0xc78d94b0  lwc1        $f13, -0x6B50($gp)
    ctx->pc = 0x2d5940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d5944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5948: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2d5948u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d594c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d594cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d5950: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2d5950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2d5954: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x2d5954u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x2d5958: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d5958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d595c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2d595cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5960: 0xc0b51ee  jal         func_2D47B8
    ctx->pc = 0x2D5960u;
    SET_GPR_U32(ctx, 31, 0x2D5968u);
    ctx->pc = 0x2D5964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5960u;
    // 0x2d5964: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D47B8u, 0x2D5960u, 0x2D5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5968u;
label_2d5968:
    // 0x2d5968: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d5968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d596c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d596cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5970: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d5970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5974: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x2D5974u;
    {
        const bool branch_taken_0x2d5974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5974) {
            ctx->pc = 0x2D5978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5974u;
            // 0x2d5978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59E4u;
            goto label_2d59e4;
        }
    }
    ctx->pc = 0x2D597Cu;
    // 0x2d597c: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x2d597cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x2d5980: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5984: 0xc78294b4  lwc1        $f2, -0x6B4C($gp)
    ctx->pc = 0x2d5984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5988: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d5988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d598c: 0xc78194b8  lwc1        $f1, -0x6B48($gp)
    ctx->pc = 0x2d598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5990: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5994: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d5994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d5998: 0x0  nop
    ctx->pc = 0x2d5998u;
    // NOP
    // 0x2d599c: 0x0  nop
    ctx->pc = 0x2d599cu;
    // NOP
    // 0x2d59a0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2d59a0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2d59a4: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2d59a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d59a8: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x2d59a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d59ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D59ACu;
    {
        const bool branch_taken_0x2d59ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d59ac) {
            ctx->pc = 0x2D59B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D59ACu;
            // 0x2d59b0: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59B4u;
            goto label_2d59b4;
        }
    }
    ctx->pc = 0x2D59B4u;
label_2d59b4:
    // 0x2d59b4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d59b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d59b8: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d59bc: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2d59bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2d59c0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2d59c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2d59c4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2d59c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d59c8: 0x24c60055  addiu       $a2, $a2, 0x55
    ctx->pc = 0x2d59c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 85));
    // 0x2d59cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d59ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d59d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d59d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d59d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d59d8: 0xc0b51ee  jal         func_2D47B8
    ctx->pc = 0x2D59D8u;
    SET_GPR_U32(ctx, 31, 0x2D59E0u);
    ctx->pc = 0x2D59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59D8u;
    // 0x2d59dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D47B8u, 0x2D59D8u, 0x2D59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59E0u;
label_2d59e0:
    // 0x2d59e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d59e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d59e4:
    // 0x2d59e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d59e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d59e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d59e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d59ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D59ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59ECu;
        // 0x2d59f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D59ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D59F4u;
    // 0x2d59f4: 0x0  nop
    ctx->pc = 0x2d59f4u;
    // NOP
label_2d59f8:
    // 0x2d59f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D59F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D59F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5A00u;
}
