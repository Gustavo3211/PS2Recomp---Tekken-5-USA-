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

// Function: sub_004FC368
// Address: 0x4fc368 - 0x4fc6b0
void sub_004FC368_0x4fc368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FC368_0x4fc368");
#endif

    ctx->pc = 0x4fc368u;

    // 0x4fc368: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x4fc368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x4fc36c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4fc36cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc370: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4fc370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fc374: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4fc374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc378: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x4fc378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4fc37c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x4fc37cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x4fc380: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x4fc380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x4fc384: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x4fc384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4fc388: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x4fc388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x4fc38c: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x4fc38cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4fc390: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x4fc390u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4fc394: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4fc394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4fc398: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4fc398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4fc39c: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x4fc39cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4fc3a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4fc3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4fc3a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4fc3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4fc3a8: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x4fc3a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4fc3ac: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4fc3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4fc3b0: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x4fc3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x4fc3b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4fc3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc3b8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x4fc3b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4fc3bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4fc3bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4fc3c0: 0x2d270006  sltiu       $a3, $t1, 0x6
    ctx->pc = 0x4fc3c0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4fc3c4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x4fc3c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4fc3c8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x4fc3c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4fc3cc: 0x46002202  mul.s       $f8, $f4, $f0
    ctx->pc = 0x4fc3ccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4fc3d0: 0x46001282  mul.s       $f10, $f2, $f0
    ctx->pc = 0x4fc3d0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4fc3d4: 0x460019c2  mul.s       $f7, $f3, $f0
    ctx->pc = 0x4fc3d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4fc3d8: 0x10e000b2  beqz        $a3, . + 4 + (0xB2 << 2)
    ctx->pc = 0x4FC3D8u;
    {
        const bool branch_taken_0x4fc3d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC3D8u;
        // 0x4fc3dc: 0x46000a42  mul.s       $f9, $f1, $f0 (Delay Slot)
        ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc3d8) {
            ctx->pc = 0x4FC6A4u;
            goto label_4fc6a4;
        }
    }
    ctx->pc = 0x4FC3E0u;
    // 0x4fc3e0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x4fc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4fc3e4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4fc3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4fc3e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fc3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fc3ec: 0x8c63bd20  lw          $v1, -0x42E0($v1)
    ctx->pc = 0x4fc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950176)));
    // 0x4fc3f0: 0x600008  jr          $v1
    ctx->pc = 0x4FC3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4FC3F8u: goto label_4fc3f8;
            case 0x4FC468u: goto label_4fc468;
            case 0x4FC4E0u: goto label_4fc4e0;
            case 0x4FC550u: goto label_4fc550;
            case 0x4FC5C0u: goto label_4fc5c0;
            case 0x4FC630u: goto label_4fc630;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC3F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4FC3F8u;
label_4fc3f8:
    // 0x4fc3f8: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x4fc3f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x4fc3fc: 0x46073042  mul.s       $f1, $f6, $f7
    ctx->pc = 0x4fc3fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x4fc400: 0x46074882  mul.s       $f2, $f9, $f7
    ctx->pc = 0x4fc400u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x4fc404: 0x460538c2  mul.s       $f3, $f7, $f5
    ctx->pc = 0x4fc404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x4fc408: 0x460849c2  mul.s       $f7, $f9, $f8
    ctx->pc = 0x4fc408u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x4fc40c: 0xe5000028  swc1        $f0, 0x28($t0)
    ctx->pc = 0x4fc40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x4fc410: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x4fc410u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x4fc414: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x4fc414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4fc418: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x4fc418u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x4fc41c: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x4fc41cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4fc420: 0x46054a42  mul.s       $f9, $f9, $f5
    ctx->pc = 0x4fc420u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x4fc424: 0xe5030018  swc1        $f3, 0x18($t0)
    ctx->pc = 0x4fc424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x4fc428: 0x460a3802  mul.s       $f0, $f7, $f10
    ctx->pc = 0x4fc428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x4fc42c: 0x460a4042  mul.s       $f1, $f8, $f10
    ctx->pc = 0x4fc42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x4fc430: 0x460a3082  mul.s       $f2, $f6, $f10
    ctx->pc = 0x4fc430u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x4fc434: 0x460a48c2  mul.s       $f3, $f9, $f10
    ctx->pc = 0x4fc434u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x4fc438: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x4fc438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x4fc43c: 0x46014840  add.s       $f1, $f9, $f1
    ctx->pc = 0x4fc43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x4fc440: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x4fc440u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x4fc444: 0x460340c0  add.s       $f3, $f8, $f3
    ctx->pc = 0x4fc444u;
    ctx->f[3] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x4fc448: 0x46005107  neg.s       $f4, $f10
    ctx->pc = 0x4fc448u;
    ctx->f[4] = FPU_NEG_S(ctx->f[10]);
    // 0x4fc44c: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x4fc44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x4fc450: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x4fc450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x4fc454: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x4fc454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x4fc458: 0xe5030014  swc1        $f3, 0x14($t0)
    ctx->pc = 0x4fc458u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x4fc45c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC45Cu;
        // 0x4fc460: 0xe5040008  swc1        $f4, 0x8($t0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC464u;
    // 0x4fc464: 0x0  nop
    ctx->pc = 0x4fc464u;
    // NOP
label_4fc468:
    // 0x4fc468: 0x46005047  neg.s       $f1, $f10
    ctx->pc = 0x4fc468u;
    ctx->f[1] = FPU_NEG_S(ctx->f[10]);
    // 0x4fc46c: 0xe5090004  swc1        $f9, 0x4($t0)
    ctx->pc = 0x4fc46cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4fc470: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x4fc470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x4fc474: 0x46083082  mul.s       $f2, $f6, $f8
    ctx->pc = 0x4fc474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x4fc478: 0x46003107  neg.s       $f4, $f6
    ctx->pc = 0x4fc478u;
    ctx->f[4] = FPU_NEG_S(ctx->f[6]);
    // 0x4fc47c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4fc47cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4fc480: 0x46083982  mul.s       $f6, $f7, $f8
    ctx->pc = 0x4fc480u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x4fc484: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x4fc484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4fc488: 0x460a4202  mul.s       $f8, $f8, $f10
    ctx->pc = 0x4fc488u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x4fc48c: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x4fc48cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x4fc490: 0x46055282  mul.s       $f10, $f10, $f5
    ctx->pc = 0x4fc490u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x4fc494: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x4fc494u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x4fc498: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x4fc498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x4fc49c: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x4fc49cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x4fc4a0: 0x46094082  mul.s       $f2, $f8, $f9
    ctx->pc = 0x4fc4a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x4fc4a4: 0x46005047  neg.s       $f1, $f10
    ctx->pc = 0x4fc4a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[10]);
    // 0x4fc4a8: 0x460938c2  mul.s       $f3, $f7, $f9
    ctx->pc = 0x4fc4a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x4fc4ac: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x4fc4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x4fc4b0: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x4fc4b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x4fc4b4: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x4fc4b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x4fc4b8: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x4fc4b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x4fc4bc: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x4fc4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x4fc4c0: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x4fc4c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x4fc4c4: 0xe5020018  swc1        $f2, 0x18($t0)
    ctx->pc = 0x4fc4c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x4fc4c8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x4fc4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x4fc4cc: 0xe5040024  swc1        $f4, 0x24($t0)
    ctx->pc = 0x4fc4ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x4fc4d0: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x4fc4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x4fc4d4: 0xe5030020  swc1        $f3, 0x20($t0)
    ctx->pc = 0x4fc4d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x4fc4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC4D8u;
        // 0x4fc4dc: 0xe5010028  swc1        $f1, 0x28($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC4E0u;
label_4fc4e0:
    // 0x4fc4e0: 0x46004847  neg.s       $f1, $f9
    ctx->pc = 0x4fc4e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[9]);
    // 0x4fc4e4: 0xe5050018  swc1        $f5, 0x18($t0)
    ctx->pc = 0x4fc4e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x4fc4e8: 0x46074002  mul.s       $f0, $f8, $f7
    ctx->pc = 0x4fc4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x4fc4ec: 0x46083082  mul.s       $f2, $f6, $f8
    ctx->pc = 0x4fc4ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x4fc4f0: 0x46004107  neg.s       $f4, $f8
    ctx->pc = 0x4fc4f0u;
    ctx->f[4] = FPU_NEG_S(ctx->f[8]);
    // 0x4fc4f4: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x4fc4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x4fc4f8: 0x46073202  mul.s       $f8, $f6, $f7
    ctx->pc = 0x4fc4f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x4fc4fc: 0xe5000028  swc1        $f0, 0x28($t0)
    ctx->pc = 0x4fc4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x4fc500: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x4fc500u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x4fc504: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x4fc504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x4fc508: 0x460a4a42  mul.s       $f9, $f9, $f10
    ctx->pc = 0x4fc508u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x4fc50c: 0x460a3182  mul.s       $f6, $f6, $f10
    ctx->pc = 0x4fc50cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x4fc510: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x4fc510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x4fc514: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x4fc514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x4fc518: 0x460538c2  mul.s       $f3, $f7, $f5
    ctx->pc = 0x4fc518u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x4fc51c: 0x46054842  mul.s       $f1, $f9, $f5
    ctx->pc = 0x4fc51cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x4fc520: 0x46053082  mul.s       $f2, $f6, $f5
    ctx->pc = 0x4fc520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x4fc524: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x4fc524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x4fc528: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x4fc528u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x4fc52c: 0x46014041  sub.s       $f1, $f8, $f1
    ctx->pc = 0x4fc52cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x4fc530: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x4fc530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x4fc534: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x4fc534u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x4fc538: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x4fc538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x4fc53c: 0xe5040008  swc1        $f4, 0x8($t0)
    ctx->pc = 0x4fc53cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x4fc540: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x4fc540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4fc544: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x4fc544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4fc548: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC548u;
        // 0x4fc54c: 0xe5030020  swc1        $f3, 0x20($t0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC550u;
label_4fc550:
    // 0x4fc550: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x4fc550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x4fc554: 0x46073042  mul.s       $f1, $f6, $f7
    ctx->pc = 0x4fc554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x4fc558: 0x46064082  mul.s       $f2, $f8, $f6
    ctx->pc = 0x4fc558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x4fc55c: 0x460a30c2  mul.s       $f3, $f6, $f10
    ctx->pc = 0x4fc55cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x4fc560: 0x46074182  mul.s       $f6, $f8, $f7
    ctx->pc = 0x4fc560u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x4fc564: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x4fc564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x4fc568: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x4fc568u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x4fc56c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x4fc56cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4fc570: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x4fc570u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x4fc574: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x4fc574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x4fc578: 0x460a4202  mul.s       $f8, $f8, $f10
    ctx->pc = 0x4fc578u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x4fc57c: 0xe5030020  swc1        $f3, 0x20($t0)
    ctx->pc = 0x4fc57cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x4fc580: 0x46093002  mul.s       $f0, $f6, $f9
    ctx->pc = 0x4fc580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x4fc584: 0x46093842  mul.s       $f1, $f7, $f9
    ctx->pc = 0x4fc584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x4fc588: 0x46092882  mul.s       $f2, $f5, $f9
    ctx->pc = 0x4fc588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x4fc58c: 0x460940c2  mul.s       $f3, $f8, $f9
    ctx->pc = 0x4fc58cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x4fc590: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4fc590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4fc594: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x4fc594u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x4fc598: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x4fc598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x4fc59c: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x4fc59cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x4fc5a0: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x4fc5a0u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
    // 0x4fc5a4: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x4fc5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4fc5a8: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x4fc5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x4fc5ac: 0xe5020028  swc1        $f2, 0x28($t0)
    ctx->pc = 0x4fc5acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x4fc5b0: 0xe5030024  swc1        $f3, 0x24($t0)
    ctx->pc = 0x4fc5b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x4fc5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC5B4u;
        // 0x4fc5b8: 0xe5040010  swc1        $f4, 0x10($t0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC5BCu;
    // 0x4fc5bc: 0x0  nop
    ctx->pc = 0x4fc5bcu;
    // NOP
label_4fc5c0:
    // 0x4fc5c0: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x4fc5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x4fc5c4: 0x46085042  mul.s       $f1, $f10, $f8
    ctx->pc = 0x4fc5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x4fc5c8: 0x46064082  mul.s       $f2, $f8, $f6
    ctx->pc = 0x4fc5c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x4fc5cc: 0x460940c2  mul.s       $f3, $f8, $f9
    ctx->pc = 0x4fc5ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x4fc5d0: 0x46063a02  mul.s       $f8, $f7, $f6
    ctx->pc = 0x4fc5d0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x4fc5d4: 0xe5000028  swc1        $f0, 0x28($t0)
    ctx->pc = 0x4fc5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x4fc5d8: 0x460a3182  mul.s       $f6, $f6, $f10
    ctx->pc = 0x4fc5d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x4fc5dc: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x4fc5dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x4fc5e0: 0x46095282  mul.s       $f10, $f10, $f9
    ctx->pc = 0x4fc5e0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x4fc5e4: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x4fc5e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x4fc5e8: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x4fc5e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x4fc5ec: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x4fc5ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4fc5f0: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x4fc5f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x4fc5f4: 0x46053042  mul.s       $f1, $f6, $f5
    ctx->pc = 0x4fc5f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x4fc5f8: 0x46055082  mul.s       $f2, $f10, $f5
    ctx->pc = 0x4fc5f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x4fc5fc: 0x460538c2  mul.s       $f3, $f7, $f5
    ctx->pc = 0x4fc5fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x4fc600: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x4fc600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x4fc604: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x4fc604u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x4fc608: 0x46024080  add.s       $f2, $f8, $f2
    ctx->pc = 0x4fc608u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x4fc60c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x4fc60cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x4fc610: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x4fc610u;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
    // 0x4fc614: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x4fc614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x4fc618: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x4fc618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x4fc61c: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x4fc61cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4fc620: 0xe5030008  swc1        $f3, 0x8($t0)
    ctx->pc = 0x4fc620u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x4fc624: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC624u;
        // 0x4fc628: 0xe5040024  swc1        $f4, 0x24($t0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC62Cu;
    // 0x4fc62c: 0x0  nop
    ctx->pc = 0x4fc62cu;
    // NOP
label_4fc630:
    // 0x4fc630: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x4fc630u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x4fc634: 0xe50a0020  swc1        $f10, 0x20($t0)
    ctx->pc = 0x4fc634u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x4fc638: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x4fc638u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x4fc63c: 0x46074082  mul.s       $f2, $f8, $f7
    ctx->pc = 0x4fc63cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x4fc640: 0x460638c2  mul.s       $f3, $f7, $f6
    ctx->pc = 0x4fc640u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x4fc644: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x4fc644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x4fc648: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x4fc648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x4fc64c: 0x460629c2  mul.s       $f7, $f5, $f6
    ctx->pc = 0x4fc64cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x4fc650: 0xe5020028  swc1        $f2, 0x28($t0)
    ctx->pc = 0x4fc650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x4fc654: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x4fc654u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x4fc658: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x4fc658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4fc65c: 0x46084a42  mul.s       $f9, $f9, $f8
    ctx->pc = 0x4fc65cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x4fc660: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x4fc660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x4fc664: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x4fc664u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x4fc668: 0xe5010024  swc1        $f1, 0x24($t0)
    ctx->pc = 0x4fc668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x4fc66c: 0x460a3882  mul.s       $f2, $f7, $f10
    ctx->pc = 0x4fc66cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x4fc670: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x4fc670u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x4fc674: 0x460a48c2  mul.s       $f3, $f9, $f10
    ctx->pc = 0x4fc674u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x4fc678: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x4fc678u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x4fc67c: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x4fc67cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x4fc680: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x4fc680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x4fc684: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x4fc684u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x4fc688: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x4fc688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x4fc68c: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x4fc68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4fc690: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x4fc690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x4fc694: 0xe5030018  swc1        $f3, 0x18($t0)
    ctx->pc = 0x4fc694u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x4fc698: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4fc698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4fc69c: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x4fc69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x4fc6a0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x4fc6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_4fc6a4:
    // 0x4fc6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC6ACu;
    // 0x4fc6ac: 0x0  nop
    ctx->pc = 0x4fc6acu;
    // NOP
    ctx->pc = 0x4fc6b0u;
}
