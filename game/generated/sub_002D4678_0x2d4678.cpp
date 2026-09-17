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

// Function: sub_002D4678
// Address: 0x2d4678 - 0x2d47b8
void sub_002D4678_0x2d4678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4678_0x2d4678");
#endif

    switch (ctx->pc) {
        case 0x2d4724u: goto label_2d4724;
        case 0x2d4738u: goto label_2d4738;
        case 0x2d47acu: goto label_2d47ac;
        default: break;
    }

    ctx->pc = 0x2d4678u;

    // 0x2d4678: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d4678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d467c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2d467cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d4680: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d4680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d4684: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x2d4684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x2d4688: 0x2421df40  addiu       $at, $at, -0x20C0
    ctx->pc = 0x2d4688u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294958912));
    // 0x2d468c: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x2d468cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x2d4690: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2d4690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2d4694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d4694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4698: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2d4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d469c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2d469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d46a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2d46a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d46a4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2d46a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d46a8: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D46A8u;
    {
        const bool branch_taken_0x2d46a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46A8u;
        // 0x2d46ac: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46a8) {
            ctx->pc = 0x2D46C8u;
            goto label_2d46c8;
        }
    }
    ctx->pc = 0x2D46B0u;
    // 0x2d46b0: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x2d46b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d46b4: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x2d46b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d46b8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2d46b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d46bc: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2d46bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d46c0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d46c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d46c4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d46c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d46c8:
    // 0x2d46c8: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x2d46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d46cc: 0x35020020  ori         $v0, $t0, 0x20
    ctx->pc = 0x2d46ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x2d46d0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2d46d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d46d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d46d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d46d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d46d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d46dc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2d46dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d46e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d46e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d46e4: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2d46e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d46e8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d46e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2d46ec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2d46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2d46f0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d46f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d46f4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2d46f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2d46f8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2d46f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2d46fc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2d46fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d4700: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2d4700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d4704: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4704u;
    {
        const bool branch_taken_0x2d4704 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4704u;
        // 0x2d4708: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4704) {
            ctx->pc = 0x2D4714u;
            goto label_2d4714;
        }
    }
    ctx->pc = 0x2D470Cu;
    // 0x2d470c: 0x35020060  ori         $v0, $t0, 0x60
    ctx->pc = 0x2d470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)96);
    // 0x2d4710: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d4710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2d4714:
    // 0x2d4714: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4718: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x2d4718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x2d471c: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x2D471Cu;
    SET_GPR_U32(ctx, 31, 0x2D4724u);
    ctx->pc = 0x2D4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D471Cu;
    // 0x2d4720: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x2D471Cu, 0x2D4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4724u;
label_2d4724:
    // 0x2d4724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4728: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d4728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d472c: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x2d472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d4730: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x2D4730u;
    SET_GPR_U32(ctx, 31, 0x2D4738u);
    ctx->pc = 0x2D4734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4730u;
    // 0x2d4734: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x2D4730u, 0x2D4738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4738u;
label_2d4738:
    // 0x2d4738: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d473c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D473Cu;
    {
        const bool branch_taken_0x2d473c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D473Cu;
        // 0x2d4740: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d473c) {
            ctx->pc = 0x2D4758u;
            goto label_2d4758;
        }
    }
    ctx->pc = 0x2D4744u;
    // 0x2d4744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d4748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d474c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D474Cu;
    {
        const bool branch_taken_0x2d474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D474Cu;
        // 0x2d4750: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d474c) {
            ctx->pc = 0x2D4770u;
            goto label_2d4770;
        }
    }
    ctx->pc = 0x2D4754u;
    // 0x2d4754: 0x0  nop
    ctx->pc = 0x2d4754u;
    // NOP
label_2d4758:
    // 0x2d4758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d4758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d475c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d4760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d4764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d4768: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d4768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d476c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2d476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2d4770:
    // 0x2d4770: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4770u;
    {
        const bool branch_taken_0x2d4770 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4770u;
        // 0x2d4774: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4770) {
            ctx->pc = 0x2D4788u;
            goto label_2d4788;
        }
    }
    ctx->pc = 0x2D4778u;
    // 0x2d4778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d477c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d477cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d4780: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4780u;
    {
        const bool branch_taken_0x2d4780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4780u;
        // 0x2d4784: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4780) {
            ctx->pc = 0x2D47A4u;
            goto label_2d47a4;
        }
    }
    ctx->pc = 0x2D4788u;
label_2d4788:
    // 0x2d4788: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d4788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d478c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d4790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d4790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d4794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d4798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d479c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d479cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d47a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d47a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d47a4:
    // 0x2d47a4: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x2D47A4u;
    SET_GPR_U32(ctx, 31, 0x2D47ACu);
    ctx->pc = 0x2D47A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47A4u;
    // 0x2d47a8: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x2D47A4u, 0x2D47ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47ACu;
label_2d47ac:
    // 0x2d47ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d47acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d47b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D47B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47B0u;
        // 0x2d47b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D47B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D47B8u;
}
