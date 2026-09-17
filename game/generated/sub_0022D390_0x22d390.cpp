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

// Function: sub_0022D390
// Address: 0x22d390 - 0x22d578
void sub_0022D390_0x22d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D390_0x22d390");
#endif

    switch (ctx->pc) {
        case 0x22d3e0u: goto label_22d3e0;
        case 0x22d440u: goto label_22d440;
        default: break;
    }

    ctx->pc = 0x22d390u;

    // 0x22d390: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x22d390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x22d394: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x22d394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d398: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x22d398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22d39c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d39cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d3a0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x22d3a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x22d3a4: 0x2507fffe  addiu       $a3, $t0, -0x2
    ctx->pc = 0x22d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x22d3a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d3ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d3b0: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x22d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x22d3b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x22d3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x22d3b8: 0x46003206  mov.s       $f8, $f6
    ctx->pc = 0x22d3b8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[6]);
    // 0x22d3bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3c0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x22d3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22d3c4: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x22D3C4u;
    {
        const bool branch_taken_0x22d3c4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3C4u;
        // 0x22d3c8: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3c4) {
            ctx->pc = 0x22D428u;
            goto label_22d428;
        }
    }
    ctx->pc = 0x22D3CCu;
    // 0x22d3cc: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x22d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x22d3d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d3d4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x22d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x22d3d8: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x22d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x22d3dc: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x22d3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_22d3e0:
    // 0x22d3e0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22d3e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d3e8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22d3ec: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22d3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d3f0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22d3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d3f4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d3f8: 0x46042881  sub.s       $f2, $f5, $f4
    ctx->pc = 0x22d3f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x22d3fc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22d3fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22d400: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x22d400u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x22d404: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22d404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d408: 0x460338c1  sub.s       $f3, $f7, $f3
    ctx->pc = 0x22d408u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x22d40c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22d40cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22d410: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x22d410u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x22d414: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22d414u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22d418: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22d418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22d41c: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x22d41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22d420: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22D420u;
    {
        const bool branch_taken_0x22d420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D420u;
        // 0x22d424: 0x46003180  add.s       $f6, $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d420) {
            ctx->pc = 0x22D3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d3e0;
        }
    }
    ctx->pc = 0x22D428u;
label_22d428:
    // 0x22d428: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x22d428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x22d42c: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x22D42Cu;
    {
        const bool branch_taken_0x22d42c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D42Cu;
        // 0x22d430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d42c) {
            ctx->pc = 0x22D490u;
            goto label_22d490;
        }
    }
    ctx->pc = 0x22D434u;
    // 0x22d434: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x22d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22d438: 0xc7a90000  lwc1        $f9, 0x0($sp)
    ctx->pc = 0x22d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x22d43c: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x22d43cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
label_22d440:
    // 0x22d440: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22d440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22d444: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d448: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22d44c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d450: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d454: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d458: 0x46043881  sub.s       $f2, $f7, $f4
    ctx->pc = 0x22d458u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x22d45c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22d45cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22d460: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x22d460u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x22d464: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d468: 0x460348c1  sub.s       $f3, $f9, $f3
    ctx->pc = 0x22d468u;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x22d46c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22d46cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22d470: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x22d470u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x22d474: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22d474u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22d478: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22d478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22d47c: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x22d47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22d480: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22D480u;
    {
        const bool branch_taken_0x22d480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D480u;
        // 0x22d484: 0x46004200  add.s       $f8, $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d480) {
            ctx->pc = 0x22D440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d440;
        }
    }
    ctx->pc = 0x22D488u;
    // 0x22d488: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22D488u;
    {
        const bool branch_taken_0x22d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D488u;
        // 0x22d48c: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d488) {
            ctx->pc = 0x22D498u;
            goto label_22d498;
        }
    }
    ctx->pc = 0x22D490u;
label_22d490:
    // 0x22d490: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x22d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22d494: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22d494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22d498:
    // 0x22d498: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x22d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d49c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d4a0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x22d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d4a4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d4a8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x22d4a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d4ac: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d4b0: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x22d4b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x22d4b4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x22d4b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x22d4b8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x22d4b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x22d4bc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x22d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d4c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22d4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d4c4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22d4c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22d4c8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22d4c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22d4cc: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x22d4ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x22d4d0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22d4d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22d4d4: 0xc78184b8  lwc1        $f1, -0x7B48($gp)
    ctx->pc = 0x22d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d4d8: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x22d4d8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x22d4dc: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x22d4dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x22d4e0: 0x46083001  sub.s       $f0, $f6, $f8
    ctx->pc = 0x22d4e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x22d4e4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x22d4e4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x22d4e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22d4e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22d4ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22d4ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d4f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22D4F0u;
    {
        const bool branch_taken_0x22d4f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4F0u;
        // 0x22d4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4f0) {
            ctx->pc = 0x22D4FCu;
            goto label_22d4fc;
        }
    }
    ctx->pc = 0x22D4F8u;
    // 0x22d4f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22d4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d4fc:
    // 0x22d4fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22d4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22d500: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22D500u;
    {
        const bool branch_taken_0x22d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D500u;
        // 0x22d504: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d500) {
            ctx->pc = 0x22D568u;
            goto label_22d568;
        }
    }
    ctx->pc = 0x22D508u;
    // 0x22d508: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x22d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22d50c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d510: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x22d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d514: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x22d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22d518: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x22d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d51c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x22d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d520: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x22d520u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x22d524: 0x4600281e  madda.s     $f5, $f0
    ctx->pc = 0x22d524u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0])));
    // 0x22d528: 0x4606205c  madd.s      $f1, $f4, $f6
    ctx->pc = 0x22d528u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x22d52c: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x22d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d530: 0xc5260008  lwc1        $f6, 0x8($t1)
    ctx->pc = 0x22d530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22d534: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x22d534u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x22d538: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d53c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d53cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d540: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x22d540u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x22d544: 0x0  nop
    ctx->pc = 0x22d544u;
    // NOP
    // 0x22d548: 0x0  nop
    ctx->pc = 0x22d548u;
    // NOP
    // 0x22d54c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x22d54cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x22d550: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x22d550u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x22d554: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x22d554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x22d558: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22d558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d55c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x22d55cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d560: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22D560u;
    {
        const bool branch_taken_0x22d560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d560) {
            ctx->pc = 0x22D564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D560u;
            // 0x22d564: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D568u;
            goto label_22d568;
        }
    }
    ctx->pc = 0x22D568u;
label_22d568:
    // 0x22d568: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x22d568u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x22d56c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D56Cu;
        // 0x22d570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D574u;
    // 0x22d574: 0x0  nop
    ctx->pc = 0x22d574u;
    // NOP
    ctx->pc = 0x22d578u;
}
