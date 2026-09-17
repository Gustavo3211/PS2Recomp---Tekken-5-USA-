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

// Function: sub_0022D578
// Address: 0x22d578 - 0x22d760
void sub_0022D578_0x22d578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D578_0x22d578");
#endif

    switch (ctx->pc) {
        case 0x22d5c8u: goto label_22d5c8;
        case 0x22d628u: goto label_22d628;
        default: break;
    }

    ctx->pc = 0x22d578u;

    // 0x22d578: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x22d578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x22d57c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x22d57cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d580: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x22d580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22d584: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d588: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x22d588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x22d58c: 0x2507fffe  addiu       $a3, $t0, -0x2
    ctx->pc = 0x22d58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x22d590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d598: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x22d598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x22d59c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x22d59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x22d5a0: 0x46003206  mov.s       $f8, $f6
    ctx->pc = 0x22d5a0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[6]);
    // 0x22d5a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22d5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d5a8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x22d5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22d5ac: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x22D5ACu;
    {
        const bool branch_taken_0x22d5ac = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5ACu;
        // 0x22d5b0: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5ac) {
            ctx->pc = 0x22D610u;
            goto label_22d610;
        }
    }
    ctx->pc = 0x22D5B4u;
    // 0x22d5b4: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x22d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x22d5b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d5bc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x22d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x22d5c0: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x22d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x22d5c4: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x22d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_22d5c8:
    // 0x22d5c8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22d5cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d5d0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22d5d4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22d5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d5d8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d5dc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d5e0: 0x46042881  sub.s       $f2, $f5, $f4
    ctx->pc = 0x22d5e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x22d5e4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22d5e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22d5e8: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x22d5e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x22d5ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d5f0: 0x460338c1  sub.s       $f3, $f7, $f3
    ctx->pc = 0x22d5f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x22d5f4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22d5f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22d5f8: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x22d5f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x22d5fc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22d5fcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22d600: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22d600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22d604: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x22d604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22d608: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22D608u;
    {
        const bool branch_taken_0x22d608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D608u;
        // 0x22d60c: 0x46003180  add.s       $f6, $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d608) {
            ctx->pc = 0x22D5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d5c8;
        }
    }
    ctx->pc = 0x22D610u;
label_22d610:
    // 0x22d610: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x22d610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x22d614: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x22D614u;
    {
        const bool branch_taken_0x22d614 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D614u;
        // 0x22d618: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d614) {
            ctx->pc = 0x22D678u;
            goto label_22d678;
        }
    }
    ctx->pc = 0x22D61Cu;
    // 0x22d61c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x22d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22d620: 0xc7a90000  lwc1        $f9, 0x0($sp)
    ctx->pc = 0x22d620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x22d624: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x22d624u;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
label_22d628:
    // 0x22d628: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22d628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22d62c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d630: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22d630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22d634: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d638: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22d638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d63c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d640: 0x46043881  sub.s       $f2, $f7, $f4
    ctx->pc = 0x22d640u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x22d644: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22d644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22d648: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x22d648u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x22d64c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d650: 0x460348c1  sub.s       $f3, $f9, $f3
    ctx->pc = 0x22d650u;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x22d654: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22d654u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22d658: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x22d658u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x22d65c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22d65cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22d660: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22d660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22d664: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x22d664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22d668: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22D668u;
    {
        const bool branch_taken_0x22d668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D668u;
        // 0x22d66c: 0x46004200  add.s       $f8, $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d668) {
            ctx->pc = 0x22D628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d628;
        }
    }
    ctx->pc = 0x22D670u;
    // 0x22d670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22D670u;
    {
        const bool branch_taken_0x22d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D670u;
        // 0x22d674: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d670) {
            ctx->pc = 0x22D680u;
            goto label_22d680;
        }
    }
    ctx->pc = 0x22D678u;
label_22d678:
    // 0x22d678: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x22d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22d67c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22d680:
    // 0x22d680: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x22d680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d684: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22d688: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x22d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d68c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d690: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x22d690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d694: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22d694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d698: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x22d698u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x22d69c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x22d69cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x22d6a0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x22d6a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x22d6a4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x22d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d6a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22d6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d6ac: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22d6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22d6b0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22d6b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22d6b4: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x22d6b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x22d6b8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22d6b8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22d6bc: 0xc78184bc  lwc1        $f1, -0x7B44($gp)
    ctx->pc = 0x22d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d6c0: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x22d6c0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x22d6c4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x22d6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x22d6c8: 0x46083001  sub.s       $f0, $f6, $f8
    ctx->pc = 0x22d6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x22d6cc: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x22d6ccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x22d6d0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22d6d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22d6d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22d6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d6d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22D6D8u;
    {
        const bool branch_taken_0x22d6d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6D8u;
        // 0x22d6dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6d8) {
            ctx->pc = 0x22D6E4u;
            goto label_22d6e4;
        }
    }
    ctx->pc = 0x22D6E0u;
    // 0x22d6e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22d6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d6e4:
    // 0x22d6e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22d6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22d6e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22D6E8u;
    {
        const bool branch_taken_0x22d6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6E8u;
        // 0x22d6ec: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6e8) {
            ctx->pc = 0x22D750u;
            goto label_22d750;
        }
    }
    ctx->pc = 0x22D6F0u;
    // 0x22d6f0: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x22d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22d6f4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d6f8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x22d6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d6fc: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x22d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22d700: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x22d700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d704: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x22d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d708: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x22d708u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x22d70c: 0x4600281e  madda.s     $f5, $f0
    ctx->pc = 0x22d70cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0])));
    // 0x22d710: 0x4606205c  madd.s      $f1, $f4, $f6
    ctx->pc = 0x22d710u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x22d714: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x22d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d718: 0xc5260008  lwc1        $f6, 0x8($t1)
    ctx->pc = 0x22d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22d71c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x22d71cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x22d720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d728: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x22d728u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x22d72c: 0x0  nop
    ctx->pc = 0x22d72cu;
    // NOP
    // 0x22d730: 0x0  nop
    ctx->pc = 0x22d730u;
    // NOP
    // 0x22d734: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x22d734u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x22d738: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x22d738u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x22d73c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x22d73cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x22d740: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22d740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d744: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x22d744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d748: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22D748u;
    {
        const bool branch_taken_0x22d748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d748) {
            ctx->pc = 0x22D74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D748u;
            // 0x22d74c: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D750u;
            goto label_22d750;
        }
    }
    ctx->pc = 0x22D750u;
label_22d750:
    // 0x22d750: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x22d750u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x22d754: 0x3e00008  jr          $ra
    ctx->pc = 0x22D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D754u;
        // 0x22d758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D75Cu;
    // 0x22d75c: 0x0  nop
    ctx->pc = 0x22d75cu;
    // NOP
    ctx->pc = 0x22d760u;
}
