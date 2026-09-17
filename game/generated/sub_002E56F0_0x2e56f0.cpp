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

// Function: sub_002E56F0
// Address: 0x2e56f0 - 0x2e5858
void sub_002E56F0_0x2e56f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E56F0_0x2e56f0");
#endif

    switch (ctx->pc) {
        case 0x2e5798u: goto label_2e5798;
        default: break;
    }

    ctx->pc = 0x2e56f0u;

    // 0x2e56f0: 0x24850154  addiu       $a1, $a0, 0x154
    ctx->pc = 0x2e56f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x2e56f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e56f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E56F8u;
    {
        const bool branch_taken_0x2e56f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56F8u;
        // 0x2e56fc: 0x8c890050  lw          $t1, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56f8) {
            ctx->pc = 0x2E5714u;
            goto label_2e5714;
        }
    }
    ctx->pc = 0x2E5700u;
    // 0x2e5700: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e5700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e5704: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e5704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5708: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e5708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e570c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E570Cu;
    {
        const bool branch_taken_0x2e570c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e570c) {
            ctx->pc = 0x2E5710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E570Cu;
            // 0x2e5710: 0x2485015c  addiu       $a1, $a0, 0x15C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5724u;
            goto label_2e5724;
        }
    }
    ctx->pc = 0x2E5714u;
label_2e5714:
    // 0x2e5714: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e5714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e5718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e5718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e571c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e571cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e5720: 0x2485015c  addiu       $a1, $a0, 0x15C
    ctx->pc = 0x2e5720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
label_2e5724:
    // 0x2e5724: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e5724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5728: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5728u;
    {
        const bool branch_taken_0x2e5728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5728u;
        // 0x2e572c: 0x24cc0054  addiu       $t4, $a2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5728) {
            ctx->pc = 0x2E5744u;
            goto label_2e5744;
        }
    }
    ctx->pc = 0x2E5730u;
    // 0x2e5730: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e5730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e5734: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e5734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5738: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e5738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e573c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E573Cu;
    {
        const bool branch_taken_0x2e573c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e573c) {
            ctx->pc = 0x2E5740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E573Cu;
            // 0x2e5740: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5754u;
            goto label_2e5754;
        }
    }
    ctx->pc = 0x2E5744u;
label_2e5744:
    // 0x2e5744: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e5744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e5748: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e5748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e574c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e574cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e5750: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2e5750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
label_2e5754:
    // 0x2e5754: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e5754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e5758: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5758u;
    {
        const bool branch_taken_0x2e5758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5758u;
        // 0x2e575c: 0x24cb0054  addiu       $t3, $a2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5758) {
            ctx->pc = 0x2E5774u;
            goto label_2e5774;
        }
    }
    ctx->pc = 0x2E5760u;
    // 0x2e5760: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e5760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e5764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e5764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5768: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e5768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e576c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E576Cu;
    {
        const bool branch_taken_0x2e576c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e576c) {
            ctx->pc = 0x2E5780u;
            goto label_2e5780;
        }
    }
    ctx->pc = 0x2E5774u;
label_2e5774:
    // 0x2e5774: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e5774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e5778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e577c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e577cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2e5780:
    // 0x2e5780: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5784: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e5784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5788: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5788u;
    {
        const bool branch_taken_0x2e5788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5788u;
        // 0x2e578c: 0x24aa0054  addiu       $t2, $a1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5788) {
            ctx->pc = 0x2E5794u;
            goto label_2e5794;
        }
    }
    ctx->pc = 0x2E5790u;
    // 0x2e5790: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2e5790u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_2e5794:
    // 0x2e5794: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2e5794u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5798:
    // 0x2e5798: 0x91680000  lbu         $t0, 0x0($t3)
    ctx->pc = 0x2e5798u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2e579c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2e579cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2e57a0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x2e57a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2e57a4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2e57a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2e57a8: 0x91870000  lbu         $a3, 0x0($t4)
    ctx->pc = 0x2e57a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2e57ac: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2e57acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2e57b0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2e57b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57b4: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x2e57b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2e57b8: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x2e57b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e57bc: 0xc7282a  slt         $a1, $a2, $a3
    ctx->pc = 0x2e57bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e57c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E57C0u;
    {
        const bool branch_taken_0x2e57c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57C0u;
        // 0x2e57c4: 0xc3200a  movz        $a0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57c0) {
            ctx->pc = 0x2E57D4u;
            goto label_2e57d4;
        }
    }
    ctx->pc = 0x2E57C8u;
    // 0x2e57c8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E57C8u;
    {
        const bool branch_taken_0x2e57c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57C8u;
        // 0x2e57cc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57c8) {
            ctx->pc = 0x2E57D4u;
            goto label_2e57d4;
        }
    }
    ctx->pc = 0x2E57D0u;
    // 0x2e57d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e57d4:
    // 0x2e57d4: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x2e57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2e57d8: 0x881823  subu        $v1, $a0, $t0
    ctx->pc = 0x2e57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2e57dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e57dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e57e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e57e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e57e4: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2e57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2e57e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e57e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e57ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e57ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e57f0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2e57f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2e57f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e57f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e57f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e57f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e57fc: 0x29a50100  slti        $a1, $t5, 0x100
    ctx->pc = 0x2e57fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e5800: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x2e5800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2e5804: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2e5804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2e5808: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2e5808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2e580c: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e580cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5810: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5814: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e5818: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2e5818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e581c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e581cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5820: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e5820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e5824: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e5824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e5828: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x2e5828u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e582c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e582cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e5830: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2e5830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2e5834: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2e5834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e5838: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x2e5838u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e583c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e583cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e5840: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x2e5840u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5844: 0x14a0ffd4  bnez        $a1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2E5844u;
    {
        const bool branch_taken_0x2e5844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5844u;
        // 0x2e5848: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5844) {
            ctx->pc = 0x2E5798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5798;
        }
    }
    ctx->pc = 0x2E584Cu;
    // 0x2e584c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E584Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E584Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5854u;
    // 0x2e5854: 0x0  nop
    ctx->pc = 0x2e5854u;
    // NOP
    ctx->pc = 0x2e5858u;
}
